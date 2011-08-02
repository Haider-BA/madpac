// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
      namespace repositories {
        class PrototypeRepository;  
      }
      /**
       * Forward declaration.
       */
      class FluidStateEnhancedDivFreeEulerExplicit;
}
}
}
}


class peano::applications::navierstokes::prototype1::repositories::PrototypeRepository {
  public:
    virtual ~PrototypeRepository() {}

    /**
     * Iterate with current active event handle.
     * @oaram reduceState Desides if the state should be reduced after each iteration.
     */
    virtual void iterate( bool reduceState = true ) = 0;

    virtual peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit& getState() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToInitialiseScenario() = 0;    
     virtual void switchToMergeA() = 0;    
     virtual void switchToCalculateF() = 0;    
     virtual void switchToCalculatePPERHS() = 0;    
     virtual void switchToGaussSeidelForEnhancedDivFree() = 0;    
     virtual void switchToUpdateVelocity() = 0;    
     virtual void switchToPlotSolutionVTK() = 0;    
     virtual void switchToPlotRegularSolutionVTK() = 0;    
     virtual void switchToUpdateScenario() = 0;    

     virtual bool isActiveAdapterInitialiseScenario() const = 0;
     virtual bool isActiveAdapterMergeA() const = 0;
     virtual bool isActiveAdapterCalculateF() const = 0;
     virtual bool isActiveAdapterCalculatePPERHS() const = 0;
     virtual bool isActiveAdapterGaussSeidelForEnhancedDivFree() const = 0;
     virtual bool isActiveAdapterUpdateVelocity() const = 0;
     virtual bool isActiveAdapterPlotSolutionVTK() const = 0;
     virtual bool isActiveAdapterPlotRegularSolutionVTK() const = 0;
     virtual bool isActiveAdapterUpdateScenario() const = 0;

    
    /**
     * Give Some Statistics
     *
     * This operation gives you a table which tells you for each adapter how 
     * much time was spent in it. The result is written to the info log device 
     * if you are not using CCA/sciCoDE. If you use the PSE framework, it is 
     * written to the corresponding output port. 
     */
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const = 0;
    #endif
    virtual void logIterationStatistics() const = 0;
};


#endif
