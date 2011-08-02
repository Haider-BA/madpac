// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_MULTIGRID_RUNNERS_MultigridBatchJobRunner__FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_POISSON_MULTIGRID_RUNNERS_MultigridBatchJobRunner__FOR_SPACETREE_GRID_H_ 


#include "peano/applications/poisson/multigrid/configurations/MultigridBatchJobConfigurationForSpacetreeGrid.h"

#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/Log.h"
#include "tarch/logging/CommandLineLogger.h"

namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace multigrid {
    namespace runners {
      class MultigridBatchJobRunnerForSpacetreeGrid;
    }
    namespace configurations {
      class MultigridBatchJobConfigurationForSpacetreeGrid;
    }
    namespace repositories {
      class MultigridBatchJobRepositoryForSpacetreeGrid;
    }
}
}
}
}



/**
 * Runner for the regular grid.
 *
 * @author Generated by the RaPeP (Peano Rapid Prototyping) tool. 
 */
class peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid {
  private:
    int runAsMaster(peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid& repository);
    
    #ifdef Parallel
    int runAsClient(peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid& repository);
    #endif
  public:
    MultigridBatchJobRunnerForSpacetreeGrid();
    virtual ~MultigridBatchJobRunnerForSpacetreeGrid();

    /**
     * Executes the run for one configuration.
     * 
     * Whenever the configuration file parser encounters a tag corresponding to
     * a regular grid runner, it tells the corresponding configuration class
     * configurations::peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForRegularGrid 
     * to create an instance of this class and to parse the configuration file. 
     * If the latter is valid, Peano afterwards calls the runner's run() routine 
     * and passes it the configuration instance. 
     *
     * @param configuration Valid configuration for this experiment run.
     */
    int run(const peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid& configuration); 
};

#endif
