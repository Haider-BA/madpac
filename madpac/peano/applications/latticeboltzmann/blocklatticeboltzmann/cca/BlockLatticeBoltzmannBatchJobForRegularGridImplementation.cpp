#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/BlockLatticeBoltzmannBatchJobForRegularGridImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2BlockCCAOutput.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryFactory.h"
#include "tarch/plotter/griddata/regular/cca/CCAGridArrayWriter.h"
#include "peano/integration/dataqueries/QueryServer.h"
#include "tarch/Assertions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/services/ReceiveBoundaryDataService.h"

#include "peano/peano.h"
#include "peano/utils/Globals.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"

#endif


#if defined(CCA)
#include "tarch/logging/CCALogger.h"
#include "peano/UserInterface.h"
#include "tarch/configuration/ConfigurationRegistry.h"
#include "tarch/configuration/TopLevelConfiguration.h"
#endif



int peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
  fillLookupTables();

  int parallelSetup = initParallelEnvironment(&argc,&argv);
  if ( parallelSetup!=0 ) {
      std::cerr << "mpi initialisation wasn't successful. Application shut down" << std::endl;
      return parallelSetup;
  }

  int sharedMemorySetup = initSharedMemoryEnvironment();
  if (sharedMemorySetup!=0) {
      std::cerr << "shared memory initialisation wasn't successful. Application shut down" << std::endl;
      return sharedMemorySetup;
  }

  return 0;
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::configure(){
  std::string configFile = "/home_shared/atanasoa_workspace/PorousMedia.xml";
  std::list<tarch::configuration::TopLevelConfiguration*> configurations =
      tarch::configuration::ConfigurationRegistry::getInstance().readFile( configFile, "peano-configuration" );

  if (configurations.empty()) {

  }
  std::cout<<"configured"<<std::endl;
  peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid* configuration=NULL;
  int executedRuns = 0;
  for (
      std::list<tarch::configuration::TopLevelConfiguration*>::iterator p = configurations.begin();
      (p != configurations.end()) ;
      p++
  ) {
      (*p)->interpreteConfiguration();
      if(dynamic_cast<peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid*>(*p)!=NULL)
        configuration=(( peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid*)(*p));

      assertion( configuration->isValid() );
  }

      // configure multicore support
#if defined(SharedTBB)
      tarch::multicore::tbb::Core::getInstance().configure( configuration->getCoreConfiguration().getNumberOfThreads() );
#endif


      // ----- adapt domain size, domain offset and number of RegularGridVertices for RegularGrid construction ------
        // number of blocks (=RegularGridVertices,initialised with the total number of LB cells;
        // blocks will be computed in next loop!)
        tarch::la::Vector<DIMENSIONS,int> blocks = configuration->getRegularGridConfiguration().getNumberOfGridPoints();
        // domain size (is to be modified for grid construction!)
        tarch::la::Vector<DIMENSIONS,double> domainSize = configuration->getRegularGridConfiguration().getDomainSize();
        // domain offset (is to be modified for grid construction!)
        tarch::la::Vector<DIMENSIONS,double> domainOffset = configuration->getRegularGridConfiguration().getDomainOffset();

        for (int d = 0; d < DIMENSIONS; d++){
          // determine how many cells have to be put at the end of the domain and which do not fill a whole block
          int additionalCellsInLastBlock = blocks(d) % LB_BLOCKSIZE;
          // number of peano vertices=LB blocks is the number of cells / LB_BLOCKSIZE +1. The +1 comes from the fact,
          // that the center of the first peano vertex is put at the first corner of the domain. So, we need one more vertex
          // at the end of the domain.
          blocks(d) = blocks(d)/LB_BLOCKSIZE + 1;

          // if we have some cells that do not fill a whole block, we need one more block...
          if (additionalCellsInLastBlock != 0){
            blocks(d) += 1;
          }
          // set domain size accordingly
          domainSize(d) = configuration->getLatticeBoltzmannConfiguration().getDx()*(blocks(d)-1)*LB_BLOCKSIZE;
        }
              logDebug("run()", "Total number of blocks (incl. boundary blocks): " << blocks);
        logDebug("run()", "Domain size for grid construction: " << domainSize << ", respective grid construction offset: " << domainOffset);

        // ----- adapt domain size, domain offset and number of RegularGridVertices for RegularGrid construction (end) ------


        // ----------------- initialise services --------------------------------------------
        initServices(*configuration);

        // hexahedron fitting the domain size. This is used for the regular-grid geometry. However,
        // THE REAL GEOMETRY is used throughout the LB simulation!
        peano::geometry::builtin::Hexahedron *hexahedron = new peano::geometry::builtin::Hexahedron(false,domainSize,domainOffset);

        _repository =
          peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
            // use enlarged grid for grid setup
            *hexahedron,
            // add another boundary layer of vertices around the domain
            blocks,
            // correction for additional boundary layer
            domainSize,
            // shift of offset for additional boundary layer
            domainOffset
          );

        std::cout<<"configured"<<std::endl;


      configuration->initState(_repository->getRegularGridState());



}
#ifdef Parallel
int peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::runAsClient(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
   peano::kernel::regulargrid::parallel::messages::ForkMessage forkMessage;
    forkMessage.receive(tarch::parallel::NodePool::getInstance().getMasterNodeNumber(),tarch::parallel::NodePool::getInstance().getTagForForkMessages());
    std::cout<<"fork received"<<std::endl;

    repository.restart(
      forkMessage.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(forkMessage),
      forkMessage.getDomainOffset(),
      forkMessage.getNeighbourRanks()
    );

    while (repository.continueToIterate()) {
      repository.iterate();
    }

    // insert your postprocessing here
    // -------------------------------

    // -------------------------------

    repository.terminate();
  }
  return 0;
}
#endif
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::
initServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid& configuration){

  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().init();
#if defined(Precice)
  // precice: initialse geometry, receive and send services
  if (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO){
    // service holding everything together
    peano::integration::partitioncoupling::services::CouplingService::getInstance().init(configuration.getPreciceConfiguration());
    // geometry services
    peano::geometry::services::GeometryService::getInstance().init(configuration.getPreciceConfiguration());

    // receive and send services
    peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(configuration.getPreciceConfiguration());
    peano::integration::partitioncoupling::services::SendDataService::getInstance().init(configuration.getPreciceConfiguration());

    // service for force synchronisation
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().init();
  } else {
#endif

    peano::geometry::services::GeometryService::getInstance().init(configuration.getBuiltinGeometryConfiguration());

    if (   (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
        || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
        || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
    ){

      peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition(),
        // sphere radius
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getRadius(),
        // TODO Put this into config as well
        tarch::la::Vector<3,double>(0.0),
        tarch::la::Vector<3,double>(0.0)
      );
      peano::integration::partitioncoupling::services::SendDataService::getInstance().init(
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition()
      );
      peano::integration::partitioncoupling::services::CouplingService::getInstance().init(
        // general geometry
        configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
        // domainSize
        configuration.getRegularGridConfiguration().getDomainSize(),
        // domainOffset
        configuration.getRegularGridConfiguration().getDomainOffset(),
        // position of sphere
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition(),
        // sphere radius
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getRadius(),
        // density of sphere
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getDensity(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingVtk(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingPovray(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getFilename()
      );

      // service for force synchronisation
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().init();
    }
#if defined(Precice)
  }
#endif


  // initialise scenario
  scenario::latticeboltzmann::blocklatticeboltzmann::services::
  ReceiveBoundaryDataService::getInstance().init(
    configuration.getRegularGridConfiguration().getDomainSize(),
    configuration.getRegularGridConfiguration().getDomainOffset(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getCharacteristicVelocityL(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().useParabolicProfile(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getTimestepsPerSineCycle()*
    configuration.getLatticeBoltzmannConfiguration().getDt(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario(),
    configuration.getBuiltinGeometryConfiguration().interpreteConfiguration()
  );
  }

int peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::BlockLatticeBoltzmannBatchJobForRegularGridImplementation() {

  // @todo Insert your code here
peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracleType(peano::kernel::datatraversal::autotuning::Oracle::NoSharedMemoryParallelisation,false);
#ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
#endif
  configure();
#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
      runAsClient( *_repository );
  }
#endif

  //  _repository =
  //    peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
  //      *_geometry,
  //      ,      // numberOfGridPoints,
  //      tarch::la::Vector<DIMENSIONS,double>(2.46,0.41,0.41),   // domainSize,
  //      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
  //    );

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::~BlockLatticeBoltzmannBatchJobForRegularGridImplementation() {
#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().terminate();
  }
#endif

  // @todo Insert your code here

  if (_repository!=0) {
      delete _repository;
  }
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getSimulationOutline(long long& dimension, double* boundingBoxOffset,long boundingBoxOffset_len, double* boundingBox,long boundingBox_len){
  tarch::la::Vector<DIMENSIONS,double> width(2.46,0.41,0.41);
  tarch::la::Vector<DIMENSIONS,double> offsetV(0.0);
  for(int i=0;i<DIMENSIONS;i++){
      boundingBox[i]=width[i];
      boundingBoxOffset[i]=offsetV[i];
  }
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getScopes(long long& numberOfScopes, long long* scopeCardinality,long scopeCardinality_len, std::string* descriptionOfScope,long descriptionOfScope_len){

}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getData(const long long& scope, const double* boundingBoxOffset,long boundingBoxOffset_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double* data,long data_len){
  std::cout<<"execute 3d query"<<std::endl;
  tarch::la::Vector<DIMENSIONS,double> qOffset(0.0);
  tarch::la::Vector<DIMENSIONS,double> qSize(0.0);
  tarch::la::Vector<DIMENSIONS,int> dims(0.0);
  for(int i=0;i<DIMENSIONS;i++){
      qOffset[i]=boundingBoxOffset[i];
      qSize[i]=boundingBox[i];
      dims[i]=(int)resolution[i];
  }
  int records_per_entry=DIMENSIONS;
  peano::integration::dataqueries::DataQuery query;
  //_queryid++;
  query.setId(0);
  query.setBoundingBoxOffset(qOffset);
  query.setBoundingBox(qSize);
  query.setResolution(dims);
  if (scope==0) {

      query.setRecordsPerEntry(DIMENSIONS);
      query.setScope( peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::Velocity);
  }
  else if (scope==1) {
      query.setRecordsPerEntry(DIMENSIONS);
      query.setScope( peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::Density);
      records_per_entry=1;
  }
  else {

      return;
  }

  tarch::plotter::griddata::regular::cca::CCAGridArrayWriter writer(
      query.getResolution(),
      query.getBoundingBox(),
      query.getBoundingBoxOffset()
  );

  peano::integration::dataqueries::QueryServer::getInstance().addQuery(
      "query",records_per_entry ,query, writer
  );
  switchToRegularBlockSolverAdapter();
  _repository->iterate();
  switchToBlockCCAOutputAdapter();
  _repository->iterate();
  scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::getInstance().advance(_repository->getRegularGridState().getDt());

  //std::cout<<"starting cAdapter"<<std::endl;

  //    runner.runCartesianGridAdapter();
  writer.writeToVertexArray(data,data_len);
  //  //  writer.writeToFile(
  //  //      "/home_local/atanasoa/query.vtk");
  //    if (scope==1){
  //        if(_queryid<=3)
  //          for(int i=0;i<10;i++)
  //            runner.runOneStep();
  //        else
  //          runner.runOneStep();
  //    }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::switchToRegularBlockSolverAdapter() {
 assertion( _repository!=0 ); _repository->switchToRegularBlockSolverAdapter();
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::switchToBlockVTKOutputAdapter() {
  assertion( _repository!=0 ); _repository->switchToBlockVTKOutputAdapter();
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::switchToBlockCCAOutputAdapter() {
  assertion( _repository!=0 ); _repository->switchToBlockCCAOutputAdapter();
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::switchToRegularBlockSolverAndVTKOutputAdapter() {
  assertion( _repository!=0 ); _repository->switchToRegularBlockSolverAndVTKOutputAdapter();
  }



void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::iterate() {
  assertion( _repository!=0 );

#if defined(CCA)
  if (Log!=0) {
      tarch::logging::CCALogger::getInstance().connect(Log);
  }
#endif

  _repository->iterate();

#if defined(CCA)
  tarch::logging::CCALogger::getInstance().disconnect();

  if (GridStatistics!=0) {
      peano::UserInterface userInterface;
      userInterface.writeDatatypeStatistics<
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState
      >(*GridStatistics);

      _repository->logIterationStatistics(*GridStatistics);
  }
#endif
} 


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  //vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  //vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  //vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  //cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  //cells = _repository->getRegularGridState().getNumberOfOuterCells();
}


#if defined(CCA)
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
 // h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  //h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
