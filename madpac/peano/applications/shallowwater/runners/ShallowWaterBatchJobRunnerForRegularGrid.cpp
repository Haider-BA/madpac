#include "peano/applications/shallowwater/runners/ShallowWaterBatchJobRunnerForRegularGrid.h"

#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryFactory.h"
#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Hexahedron.h"

#include "scenario/shallowwater/ShallowWaterScenarioService.h"

peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid::ShallowWaterBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid::~ShallowWaterBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


int peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid::run(const peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid& configuration) {
  assertion( configuration.isValid() );
  
  // configure multicore support
  #if defined(SharedTBB)
  tarch::multicore::tbb::Core::getInstance().configure( configuration.getCoreConfiguration().getNumberOfThreads() );
  #endif

  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( configuration.getLogConfiguration().getFilterList() );
  tarch::logging::CommandLineLogger::getInstance().setLogFormat( configuration.getLogFormatConfiguration() );

  // @todo Insert your geometry generation here and adopt the repository 
  //       generation to your needs. There is a dummy implementation to allow 
  //       for a quick start, but this is really very dummy (it generates 
  //       solely a sphere computational domain and basically does nothing with 
  //       it).
  
  // Start of dummy implementation
  peano::geometry::builtin::Hexahedron geometry(
    false,
    tarch::la::Vector<DIMENSIONS,double>(1.0),
    tarch::la::Vector<DIMENSIONS,double>(0.0)
  );

  scenario::shallowwater::ShallowWaterScenario* experiment = configuration.getShallowWaterScenario().interpreteConfiguration();
  scenario::shallowwater::ShallowWaterScenarioService::getInstance().setScenario(experiment);

  peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGrid* repository = 
    peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      geometry,
      experiment -> getNumberOfGridPoints(),
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


int peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

  // @todo Insert your code here
  
  // Start of dummy implementation
  repository.switchToSetupExperiment(); repository.iterate();
  repository.switchToPlotSolution(); repository.iterate();
  repository.switchToGodunovMethod();
  

  for(int i = 1; i <= scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getNumberOfTimeSteps(); i++) {
    repository.iterate();
    if(
        scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getOutputTimeDistance() > 0 &&
        i % scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getOutputTimeDistance() == 0
     ) {
       repository.switchToPlotSolution(); repository.iterate(); repository.switchToGodunovMethod();
     }
  }

 
 
 repository.logIterationStatistics();
 repository.terminate();
  // End of dummy implementation

  return 0;
}


