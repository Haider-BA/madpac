#include "peano/applications/faxen/lbf/cca/LBFBatchJobForRegularGridImplementation.h"

#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryFactory.h"

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



int peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::LBFBatchJobForRegularGridImplementation():
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
    peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
    peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGridImplementation clientRunner;
    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::~LBFBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToInitialize() {assertion( _repository!=0 ); _repository->switchToInitialize(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToInitializeAndSetBoundary() {assertion( _repository!=0 ); _repository->switchToInitializeAndSetBoundary(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToPlotGrid() {assertion( _repository!=0 ); _repository->switchToPlotGrid(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToControlTimeStep() {assertion( _repository!=0 ); _repository->switchToControlTimeStep(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToSetVelocitiesBoundary() {assertion( _repository!=0 ); _repository->switchToSetVelocitiesBoundary(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToSetScenarioBoundary() {assertion( _repository!=0 ); _repository->switchToSetScenarioBoundary(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToComputeVelocitiesDerivatives() {assertion( _repository!=0 ); _repository->switchToComputeVelocitiesDerivatives(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToComputeRightHandSide() {assertion( _repository!=0 ); _repository->switchToComputeRightHandSide(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToSetZeroPressureBoundary() {assertion( _repository!=0 ); _repository->switchToSetZeroPressureBoundary(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToSetPressureBoundary() {assertion( _repository!=0 ); _repository->switchToSetPressureBoundary(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToSORStep() {assertion( _repository!=0 ); _repository->switchToSORStep(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToComputeResidualNorm() {assertion( _repository!=0 ); _repository->switchToComputeResidualNorm(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToComputeVelocities() {assertion( _repository!=0 ); _repository->switchToComputeVelocities(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToRegularBlockSolverAdapter() {assertion( _repository!=0 ); _repository->switchToRegularBlockSolverAdapter(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToInitialiseSpacetreeGridAdapter() {assertion( _repository!=0 ); _repository->switchToInitialiseSpacetreeGridAdapter(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToBlockCCAOutputAdapter() {assertion( _repository!=0 ); _repository->switchToBlockCCAOutputAdapter(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToDynamicRefinementForSpacetreeGridAdapter() {assertion( _repository!=0 ); _repository->switchToDynamicRefinementForSpacetreeGridAdapter(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToBlockVTKOutputAdapter() {assertion( _repository!=0 ); _repository->switchToBlockVTKOutputAdapter(); }
 void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::switchToRegularBlockSolverAndVTKOutputAdapter() {assertion( _repository!=0 ); _repository->switchToRegularBlockSolverAndVTKOutputAdapter(); }



void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::faxen::lbf::RegularGridBlockVertex,
      peano::applications::faxen::lbf::RegularGridBlockCell,
      peano::applications::faxen::lbf::RegularGridBlockState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfInnerVertices();
}


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfBoundaryVertices();
}


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfOuterVertices();
}


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getState().getNumberOfInnerCells();
}


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getState().getMaximumMeshWidth()(dimension);
}


void peano::applications::faxen::lbf::cca::LBFBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getState().getMinimumMeshWidth()(dimension);
}

#endif
