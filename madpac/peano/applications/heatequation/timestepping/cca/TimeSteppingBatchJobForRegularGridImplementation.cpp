#include "peano/applications/heatequation/timestepping/cca/TimeSteppingBatchJobForRegularGridImplementation.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryFactory.h"

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



int peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::TimeSteppingBatchJobForRegularGridImplementation():
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
    peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
//    peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGridImplementation clientRunner;
//    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::~TimeSteppingBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToSetupExperiment() {assertion( _repository!=0 ); _repository->switchToSetupExperiment(); }
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlot() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlot(); }
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStep() {assertion( _repository!=0 ); _repository->switchToPerformExplitEulerTimeStep(); }
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStepAndPlot() {assertion( _repository!=0 ); _repository->switchToPerformExplitEulerTimeStepAndPlot(); }
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }
 void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::switchToPlotGrid() {assertion( _repository!=0 ); _repository->switchToPlotGrid(); }



void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,
      peano::applications::heatequation::timestepping::RegularGridCell,
      peano::applications::heatequation::timestepping::RegularGridState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::heatequation::timestepping::cca::TimeSteppingBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
