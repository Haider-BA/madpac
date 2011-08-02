// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_H_
#define PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace repositories {
        class FaxenBatchJobRepository;  
      }
}
}
}


class peano::applications::faxen::repositories::FaxenBatchJobRepository {
  public:
    virtual ~FaxenBatchJobRepository() {}
    
    /**
     * Iterate with current active event handle.
     */
    virtual void iterate() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToInitialize() = 0;    
     virtual void switchToInitializeAndSetBoundary() = 0;    
     virtual void switchToPlotGrid() = 0;    
     virtual void switchToControlTimeStep() = 0;    
     virtual void switchToSetVelocitiesBoundary() = 0;    
     virtual void switchToSetScenarioBoundary() = 0;    
     virtual void switchToComputeVelocitiesDerivatives() = 0;    
     virtual void switchToComputeRightHandSide() = 0;    
     virtual void switchToSetZeroPressureBoundary() = 0;    
     virtual void switchToSetPressureBoundary() = 0;    
     virtual void switchToSORStep() = 0;    
     virtual void switchToComputeResidualNorm() = 0;    
     virtual void switchToComputeVelocities() = 0;    
     virtual void switchToPlotSolution() = 0;    

     virtual bool isActiveAdapterInitialize() const = 0;
     virtual bool isActiveAdapterInitializeAndSetBoundary() const = 0;
     virtual bool isActiveAdapterPlotGrid() const = 0;
     virtual bool isActiveAdapterControlTimeStep() const = 0;
     virtual bool isActiveAdapterSetVelocitiesBoundary() const = 0;
     virtual bool isActiveAdapterSetScenarioBoundary() const = 0;
     virtual bool isActiveAdapterComputeVelocitiesDerivatives() const = 0;
     virtual bool isActiveAdapterComputeRightHandSide() const = 0;
     virtual bool isActiveAdapterSetZeroPressureBoundary() const = 0;
     virtual bool isActiveAdapterSetPressureBoundary() const = 0;
     virtual bool isActiveAdapterSORStep() const = 0;
     virtual bool isActiveAdapterComputeResidualNorm() const = 0;
     virtual bool isActiveAdapterComputeVelocities() const = 0;
     virtual bool isActiveAdapterPlotSolution() const = 0;

    
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
