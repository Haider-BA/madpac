#include "peano/applications/faxen/cca/FaxenBatchJobForRegularGridImplementation.h"

#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryFactory.h"

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



int peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::FaxenBatchJobForRegularGridImplementation():
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
    peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
    peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGridImplementation clientRunner;
    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::~FaxenBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToInitialize() {assertion( _repository!=0 ); _repository->switchToInitialize(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToInitializeAndSetBoundary() {assertion( _repository!=0 ); _repository->switchToInitializeAndSetBoundary(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToPlotGrid() {assertion( _repository!=0 ); _repository->switchToPlotGrid(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToControlTimeStep() {assertion( _repository!=0 ); _repository->switchToControlTimeStep(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToSetVelocitiesBoundary() {assertion( _repository!=0 ); _repository->switchToSetVelocitiesBoundary(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToSetScenarioBoundary() {assertion( _repository!=0 ); _repository->switchToSetScenarioBoundary(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToComputeVelocitiesDerivatives() {assertion( _repository!=0 ); _repository->switchToComputeVelocitiesDerivatives(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToComputeRightHandSide() {assertion( _repository!=0 ); _repository->switchToComputeRightHandSide(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToSetZeroPressureBoundary() {assertion( _repository!=0 ); _repository->switchToSetZeroPressureBoundary(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToSetPressureBoundary() {assertion( _repository!=0 ); _repository->switchToSetPressureBoundary(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToSORStep() {assertion( _repository!=0 ); _repository->switchToSORStep(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToComputeResidualNorm() {assertion( _repository!=0 ); _repository->switchToComputeResidualNorm(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToComputeVelocities() {assertion( _repository!=0 ); _repository->switchToComputeVelocities(); }
 void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }



void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::faxen::RegularGridVertex,
      peano::applications::faxen::RegularGridCell,
      peano::applications::faxen::RegularGridState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfInnerVertices();
}


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfBoundaryVertices();
}


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getState().getNumberOfOuterVertices();
}


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getState().getNumberOfInnerCells();
}


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getState().getMaximumMeshWidth()(dimension);
}


void peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getState().getMinimumMeshWidth()(dimension);
}

#endif
