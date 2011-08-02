// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_RUNNERS_PrototypeRunner__FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_RUNNERS_PrototypeRunner__FOR_SPACETREE_GRID_H_ 


#include "peano/applications/navierstokes/prototype2/configurations/PrototypeConfigurationForSpacetreeGrid.h"

namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 {
    namespace runners {
      class PrototypeRunnerForSpacetreeGrid;
    }
    namespace configurations {
      class PrototypeConfigurationForSpacetreeGrid;
    }
    namespace repositories {
      class PrototypeRepositoryForSpacetreeGrid;
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
class peano::applications::navierstokes::prototype2::runners::PrototypeRunnerForSpacetreeGrid {
  private:
    int runAsMaster(peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGrid& repository);
    
    #ifdef Parallel
    int runAsClient(peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGrid& repository);
    #endif
  public:
    PrototypeRunnerForSpacetreeGrid();
    virtual ~PrototypeRunnerForSpacetreeGrid();

    /**
     * Executes the run for one configuration.
     * 
     * Whenever the configuration file parser encounters a tag corresponding to
     * a regular grid runner, it tells the corresponding configuration class
     * configurations::peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid 
     * to create an instance of this class and to parse the configuration file. 
     * If the latter is valid, Peano afterwards calls the runner's run() routine 
     * and passes it the configuration instance. 
     *
     * @param configuration Valid configuration for this experiment run.
     */
    int run(const peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForSpacetreeGrid& configuration); 
};

#endif
