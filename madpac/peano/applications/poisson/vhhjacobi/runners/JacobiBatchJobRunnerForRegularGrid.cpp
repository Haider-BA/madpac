#include "peano/applications/poisson/vhhjacobi/runners/JacobiBatchJobRunnerForRegularGrid.h"

#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryFactory.h"
#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h" 


peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid::JacobiBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid::~JacobiBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


int peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid::run(const peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid& configuration) {
  assertion( configuration.isValid() );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  // @todo Insert your geometry generation here and adopt the repository 
  //       generation to your needs. There is a dummy implementation to allow 
  //       for a quick start, but this is really very dummy (it generates 
  //       solely a sphere computational domain and basically does nothing with 
  //       it).
  
  // Start of dummy implementation
  peano::geometry::builtin::Sphere geometry(
    false,                                      // isInverted
    0.4,                                        // radius
    tarch::la::Vector<DIMENSIONS,double>(0.5)   // center
   );
  geometry.plotGeometryAsVTK("exact-geometry.vtk");
  peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid* repository = 
    peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      geometry,
      tarch::la::Vector<DIMENSIONS,int>(40),       // numberOfGridPoints,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );
  // End of dummy implementation
  
  int result;
  #if !defined(Parallel)
  result = runAsMaster( *repository );
  #else
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    result = runAsMaster( *repository );
    tarch::parallel::NodePool::getInstance().terminate();
  }
  else {
    result = runAsClient( *repository );
  }
  #endif
  
  delete repository;
  
  return result;
}


int peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

  repository.switchToSetupExperiment();
  repository.iterate();
  repository.switchToJacobiStepAndPlotSolution();
  
  for (int i=0; i<20; i++) {
    repository.iterate();
  }
 
  repository.logIterationStatistics();
  repository.terminate();

  return 0;
}


