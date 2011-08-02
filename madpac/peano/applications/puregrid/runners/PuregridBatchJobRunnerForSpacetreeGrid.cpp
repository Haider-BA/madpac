#include "peano/applications/puregrid/runners/PuregridBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryFactory.h"
#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h" 


peano::applications::puregrid::runners::PuregridBatchJobRunnerForSpacetreeGrid::PuregridBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::puregrid::runners::PuregridBatchJobRunnerForSpacetreeGrid::~PuregridBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::puregrid::runners::PuregridBatchJobRunnerForSpacetreeGrid::run(const peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid& configuration) {
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
  peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGrid* repository = 
    peano::applications::puregrid::repositories::PuregridBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
      geometry,
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


int peano::applications::puregrid::runners::PuregridBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

  // @todo Insert your code here
  
  // Start of dummy implementation
  
  repository.switchToSetupGrid(); repository.iterate();

 
 
 repository.logIterationStatistics();
 repository.terminate();
  // End of dummy implementation

  return 0;
}


