#include "peano/applications/puregrid/runners/GridConstructionMovieBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryFactory.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

#include "peano/geometry/services/GeometryService.h"

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h" 


peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid::GridConstructionMovieBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid::~GridConstructionMovieBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid::run(const peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid& configuration) {
  assertion( configuration.isValid() );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(peano::kernel::datatraversal::configurations::AutotuningConfiguration::getOracleForSequentialCode());

  peano::geometry::builtin::Sphere geometry(
    false,                                      // isInverted
    0.4,                                        // radius
    tarch::la::Vector<DIMENSIONS,double>(0.5)   // center
   );
  geometry.plotGeometryAsVTK("exact-geometry.vtk");
//  peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* repository =
//    peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
//      geometry,
//      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
//      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
//    );

  peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* repository =
    peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::getInstance().createSpacetreeGridDynamicStackImplementation(
      geometry,
      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
      tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
    );

//  peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* repository =
//    peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDDoubleStackImplementation(
//      geometry,
//      tarch::la::Vector<DIMENSIONS,double>(1.0),   // domainSize,
//      tarch::la::Vector<DIMENSIONS,double>(0.0),   // computationalDomainOffset
//      1024
//    );

  peano::geometry::services::GeometryService::getInstance().init( &geometry, false );

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


int peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

  const double memoryInBytePerVertex = 500;
  const double MByte                 = 1024 * 1024;

  int iterationCounter = 0;

  repository.getSpacetreeGridState().setMaximumNumberOfRefinements(10);
  repository.switchToPerformOneRefinement();
  repository.switchToPerformOneRefinementWithoutGridSnapshot();
  while (!repository.getSpacetreeGridState().isGridStationary()) {
    repository.iterate();

    double vertices =
        repository.getSpacetreeGridState().getNumberOfInnerVertices()
      + repository.getSpacetreeGridState().getNumberOfBoundaryVertices()
      + repository.getSpacetreeGridState().getNumberOfOuterVertices();

    std::cout <<
      "it #" << iterationCounter << ": with " << (vertices * memoryInBytePerVertex) / MByte <<
      " MByte main memory, Peano can handle " << vertices << " vertices. Application's memory footprint: "  <<
      userInterface.getMemoryUsageMB() << " MByte(s)" << std::endl;

    if (vertices<1e5) {
      repository.getSpacetreeGridState().setMaximumNumberOfRefinements(repository.getSpacetreeGridState().getMaximumNumberOfRefinements()*2);
    }
    else if (vertices>1e7) {
      repository.getSpacetreeGridState().setMaximumNumberOfRefinements(repository.getSpacetreeGridState().getMaximumNumberOfRefinements()*4);
    }

    iterationCounter++;
  }

  repository.logIterationStatistics();
  repository.terminate();

  return 0;
}


