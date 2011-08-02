// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_H_
#define PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace faxen { 
      namespace lbf {
      namespace repositories {
        class LBFBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class BlockState;
}
}
}
}


class peano::applications::faxen::lbf::repositories::LBFBatchJobRepository {
  public:
    virtual ~LBFBatchJobRepository() {}

    /**
     * Iterate with current active event handle.
     * @oaram reduceState Desides if the state should be reduced after each iteration.
     */
    virtual void iterate( bool reduceState = true ) = 0;

    virtual peano::applications::faxen::lbf::BlockState& getState() = 0;

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
     virtual void switchToMoveParticles() = 0;    
     virtual void switchToSwitchFromLB2NSE() = 0;    
     virtual void switchToExtractDataNSE2LB() = 0;    
     virtual void switchToCorrectDensityAndComputeEqPDF4LB() = 0;    
     virtual void switchToRegularBlockSolverAdapter() = 0;    
     virtual void switchToInitialiseSpacetreeGridAdapter() = 0;    
     virtual void switchToBlockCCAOutputAdapter() = 0;    
     virtual void switchToDynamicRefinementForSpacetreeGridAdapter() = 0;    
     virtual void switchToBlockVTKOutputAdapter() = 0;    
     virtual void switchToRegularBlockSolverAndVTKOutputAdapter() = 0;    
     virtual void switchToTraceNSEData() = 0;    
     virtual void switchToTraceLBData() = 0;    

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
     virtual bool isActiveAdapterMoveParticles() const = 0;
     virtual bool isActiveAdapterSwitchFromLB2NSE() const = 0;
     virtual bool isActiveAdapterExtractDataNSE2LB() const = 0;
     virtual bool isActiveAdapterCorrectDensityAndComputeEqPDF4LB() const = 0;
     virtual bool isActiveAdapterRegularBlockSolverAdapter() const = 0;
     virtual bool isActiveAdapterInitialiseSpacetreeGridAdapter() const = 0;
     virtual bool isActiveAdapterBlockCCAOutputAdapter() const = 0;
     virtual bool isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const = 0;
     virtual bool isActiveAdapterBlockVTKOutputAdapter() const = 0;
     virtual bool isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const = 0;
     virtual bool isActiveAdapterTraceNSEData() const = 0;
     virtual bool isActiveAdapterTraceLBData() const = 0;

    
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
