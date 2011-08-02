#include "peano/applications/poisson/multigrid/runners/MultigridBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryFactory.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h" 
#include "peano/geometry/builtin/Hexahedron.h"

peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid::MultigridBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid::~MultigridBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid::run(const peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid& configuration) {
  assertion( configuration.isValid() );

  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( configuration.getLogConfiguration().getFilterList() );

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
    1.0,                                        // width
    tarch::la::Vector<DIMENSIONS,double>(0.0)   // offset
   );
  //geometry.plotGeometryAsVTK("exact-geometry.vtk");
  peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* repository = 
    peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
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
  
  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntry(tarch::logging::CommandLineLogger::FilterListEntry());

  return result;
}


int peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();
  
//  repository.switchToSetupExperiment(); repository.iterate();
//  repository.switchToSetupExperimentAndPlotGrid(); repository.iterate();
  repository.switchToSetupExperimentAndPlotStartSolution(); repository.iterate();

  int its = 2;
  for(int i = 0; i<its; i++){
    repository.switchToSmoothAndComputeGalerkinCoarseGridOperator(); repository.iterate();
    repository.switchToPlotSolution(); repository.iterate();
  }
 
  repository.logIterationStatistics();
  repository.terminate();

  return 0;
}


