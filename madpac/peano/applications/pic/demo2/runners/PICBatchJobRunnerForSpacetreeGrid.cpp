#include "peano/applications/pic/demo2/runners/PICBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryFactory.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
//#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/Hexahedron.h"


peano::applications::pic::demo2::runners::PICBatchJobRunnerForSpacetreeGrid::PICBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::pic::demo2::runners::PICBatchJobRunnerForSpacetreeGrid::~PICBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::pic::demo2::runners::PICBatchJobRunnerForSpacetreeGrid::run(const peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForSpacetreeGrid& configuration) {
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
  peano::geometry::builtin::Hexahedron geometry(
     false,                                      // isInverted
     tarch::la::Vector<DIMENSIONS,double>(1.0),   // width, i.e. bounding box,
     tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );

   peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* repository =
   peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
       geometry,
       tarch::la::Vector<DIMENSIONS,double>(1.0),   // width, i.e. bounding box,
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


int peano::applications::pic::demo2::runners::PICBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid& repository) {
	 UserInterface userInterface;
	  userInterface.writeHeader();

	  // @todo Insert your code here

	  // Start of dummy implementation

	//  repository.switchToSetupExperiment();
	//  repository.iterate();
	//

	  repository.switchToSetupExperimentAndPlot();
	  repository.iterate();



	 repository.logIterationStatistics();
	 repository.terminate();
	  // End of dummy implementation

  return 0;
}


