#include "peano/applications/poisson/jacobitutorial/cca/JacobiBatchJobForRegularGridImplementation.h"

#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryFactory.h"

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



int peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::JacobiBatchJobForRegularGridImplementation():
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
    peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
//    peano::applications::poisson::jacobitutorial::runners::JacobiBatchJobRunnerForRegularGridImplementation clientRunner;
//    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::~JacobiBatchJobForRegularGridImplementation() {
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
    
    
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToSetupExperiment() {assertion( _repository!=0 ); _repository->switchToSetupExperiment(); }
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlotGrid() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlotGrid(); }
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlotStartSolution() {assertion( _repository!=0 ); _repository->switchToSetupExperimentAndPlotStartSolution(); }
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToJacobiStep() {assertion( _repository!=0 ); _repository->switchToJacobiStep(); }
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToJacobiStepAndPlotSolution() {assertion( _repository!=0 ); _repository->switchToJacobiStepAndPlotSolution(); }
 void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::switchToPlotSolution() {assertion( _repository!=0 ); _repository->switchToPlotSolution(); }



void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::iterate() {
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
      peano::applications::poisson::jacobitutorial::RegularGridVertex,
      peano::applications::poisson::jacobitutorial::RegularGridCell,
      peano::applications::poisson::jacobitutorial::RegularGridState
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::poisson::jacobitutorial::cca::JacobiBatchJobForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
