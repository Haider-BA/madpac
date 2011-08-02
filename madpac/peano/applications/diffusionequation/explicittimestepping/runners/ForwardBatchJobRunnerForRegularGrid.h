// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RUNNERS_ForwardBatchJobRunner__FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RUNNERS_ForwardBatchJobRunner__FOR_REGULAR_GRID_H_


#include "peano/applications/diffusionequation/explicittimestepping/configurations/ForwardBatchJobConfigurationForRegularGrid.h"

namespace peano { 
  namespace applications { 
    namespace diffusionequation {
      namespace explicittimestepping {
    namespace runners {
      class ForwardBatchJobRunnerForRegularGrid;
    }
    namespace configurations {
      class ForwardBatchJobConfigurationForRegularGrid;
    }
    namespace repositories {
      class ForwardBatchJobRepositoryForRegularGrid;
    }
}
}
}
}



/**
 * Runner for the regular grid.
 *
 * @author Generated by the PeProt (Peano Rapid Prototyping) tool. 
 */
class peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid {
  private:
    int runAsMaster(peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid& repository, const peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid& configuration);
    
    #ifdef Parallel
    int runAsClient(peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid& repository);
    #endif
  public:
    ForwardBatchJobRunnerForRegularGrid();
    virtual ~ForwardBatchJobRunnerForRegularGrid();

    /**
     * Executes the run for one configuration.
     * 
     * Whenever the configuration file parser encounters a tag corresponding to
     * a regular grid runner, it tells the corresponding configuration class
     * configurations::peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid
     * to create an instance of this class and to parse the configuration file. 
     * If the latter is valid, Peano afterwards calls the runner's run() routine 
     * and passes it the configuration instance. 
     *
     * @param configuration Valid configuration for this experiment run.
     */
    int run(const peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid& configuration);
};

#endif