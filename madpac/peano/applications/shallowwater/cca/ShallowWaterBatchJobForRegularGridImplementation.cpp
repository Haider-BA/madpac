#include "peano/applications/shallowwater/cca/ShallowWaterBatchJobForRegularGridImplementation.h"

#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryFactory.h"

#include "tarch/Assertions.h"

#include "peano/peano.h"
#include "peano/utils/Globals.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif


#if defined(CCA)
#include "tarch/logging/CCALogger.h"
#include "peano/UserInterface.h"
#endif



int peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::ShallowWaterBatchJobForRegularGridImplementation():
  _geometry(
    false,                                      // isInverted
    0.4,                                        // radius
    tarch::la::Vector<DIMENSIONS,double>(0.5)   // center
  ),
  _repository(0) {
  // @todo Insert your code here
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  _repository = 
    peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
    peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGridImplementation clientRunner;
    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::~ShallowWaterBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToSetupExperiment() {assertion( _repository!=0 ); _repository->switchToSetupExperiment(); }
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlotGrid() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlotGrid(); }
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlotStartSolution() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlotStartSolution(); }
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToGodunovMethod() {assertion( _repository!=0 ); _repository->switchToGodunovMethod(); }
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToGodunovMethodAndPlotSolution() {assertion( _repository!=0 ); _repository->switchToGodunovMethodAndPlotSolution(); }
 void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }



void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::shallowwater::RegularGridVertex,
      peano::applications::shallowwater::RegularGridCell,
      peano::applications::shallowwater::RegularGridState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::shallowwater::cca::ShallowWaterBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
