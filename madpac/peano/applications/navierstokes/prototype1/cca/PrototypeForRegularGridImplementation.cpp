#include "peano/applications/navierstokes/prototype1/cca/PrototypeForRegularGridImplementation.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryFactory.h"

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



int peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::initRemoteJob(int argc, char** argv) {
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


int peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::shutdownRemoteJob() {
  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();
  return 0;
}


peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::PrototypeForRegularGridImplementation():
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
    peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      _geometry,
      tarch::la::Vector<DIMENSIONS,int>(100),      // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  
  #if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
  }
  else {
    peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGridImplementation clientRunner;
    clientRunner.runAsClient( *_repository );
  }
  #endif
}  


peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::~PrototypeForRegularGridImplementation() {
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
    
    
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToInitialiseScenario() {assertion( _repository!=0 ); _repository->switchToInitialiseScenario(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToMergeA() {assertion( _repository!=0 ); _repository->switchToMergeA(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToCalculateF() {assertion( _repository!=0 ); _repository->switchToCalculateF(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToCalculatePPERHS() {assertion( _repository!=0 ); _repository->switchToCalculatePPERHS(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToGaussSeidelForEnhancedDivFree() {assertion( _repository!=0 ); _repository->switchToGaussSeidelForEnhancedDivFree(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToUpdateVelocity() {assertion( _repository!=0 ); _repository->switchToUpdateVelocity(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToPlotSolutionVTK() {assertion( _repository!=0 ); _repository->switchToPlotSolutionVTK(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToPlotRegularSolutionVTK() {assertion( _repository!=0 ); _repository->switchToPlotRegularSolutionVTK(); }
 void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::switchToUpdateScenario() {assertion( _repository!=0 ); _repository->switchToUpdateScenario(); }



void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::iterate() {
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
      peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,
      peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,
      peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit
    >(*GridStatistics);
    
    _repository->logIterationStatistics(*GridStatistics);
  }
  #endif
} 


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getNumberOfInnerVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfInnerVertices();
}


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getNumberOfBoundaryVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfBoundaryVertices();
}


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getNumberOfOuterVertices(double& vertices) {
  vertices = _repository->getRegularGridState().getNumberOfOuterVertices();
}


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getNumberOfInnerCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfInnerCells();
}


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getNumberOfOuterCells(double& cells) {
  cells = _repository->getRegularGridState().getNumberOfOuterCells();
}
    

#if defined(CCA)
void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getMaximumMeshWidth(const long long& dimension, double& h)  {
  h = _repository->getRegularGridState().getMaximumMeshWidth()(dimension);
}


void peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation::getMinimumMeshWidth(const long long& dimension, double& h) {
  h = _repository->getRegularGridState().getMinimumMeshWidth()(dimension);
}

#endif
