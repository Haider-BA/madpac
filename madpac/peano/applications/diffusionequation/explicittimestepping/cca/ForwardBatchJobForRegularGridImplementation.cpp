#include "peano/applications/diffusionequation/explicittimestepping/cca/ForwardBatchJobForRegularGridImplementation.h"

#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryFactory.h"

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



int peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::ForwardBatchJobForRegularGridImplementation():
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
    peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
//    peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGridImplementation clientRunner;
//    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::~ForwardBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToSetupExperiment() {assertion( _repository!=0 ); _repository->switchToSetupExperiment(); }
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlot() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlot(); }
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStep() {assertion( _repository!=0 ); _repository->switchToPerformExplitEulerTimeStep(); }
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStepAndPlot() {assertion( _repository!=0 ); _repository->switchToPerformExplitEulerTimeStepAndPlot(); }
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }
 void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToApplyRefineDeleteCriterion() {assertion( _repository!=0 ); _repository->switchToApplyRefineDeleteCriterion(); }



void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,
      peano::applications::diffusionequation::explicittimestepping::RegularGridCell,
      peano::applications::diffusionequation::explicittimestepping::RegularGridState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
