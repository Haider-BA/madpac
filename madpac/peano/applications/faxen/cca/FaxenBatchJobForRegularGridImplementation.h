// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_CCA_FaxenBatchJobFOR_REGULAR_GRID_H_ 
#define _PEANO_APPLICATIONS_FAXEN_CCA_FaxenBatchJobFOR_REGULAR_GRID_H_

#if defined(CCA)
#include "peano/applications/faxen/cca/scicode/AbstractFaxenBatchJobForRegularGrid.h"
#endif
 
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForRegularGrid.h"
#include "peano/geometry/builtin/Sphere.h"


namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace cca {
        class FaxenBatchJobForRegularGridImplementation;
      }
}
}
}



/**
 * CCA Component of FaxenBatchJob
 *
 * This is the blueprint of FaxenBatchJob acting as 
 * CCA component. 
 */
class peano::applications::faxen::cca::FaxenBatchJobForRegularGridImplementation
#if defined(CCA)
  : public AbstractFaxenBatchJobForRegularGrid
#endif
{
  private:
    /**
     * @todo Replace by another geometry if you feel like
     */
    peano::geometry::builtin::Sphere                                     _geometry;
    
    peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGrid*            _repository;
    
  public:
    FaxenBatchJobForRegularGridImplementation();
    virtual ~FaxenBatchJobForRegularGridImplementation();
          
    virtual void switchToInitialize();
    virtual void switchToInitializeAndSetBoundary();
    virtual void switchToPlotGrid();
    virtual void switchToControlTimeStep();
    virtual void switchToSetVelocitiesBoundary();
    virtual void switchToSetScenarioBoundary();
    virtual void switchToComputeVelocitiesDerivatives();
    virtual void switchToComputeRightHandSide();
    virtual void switchToSetZeroPressureBoundary();
    virtual void switchToSetPressureBoundary();
    virtual void switchToSORStep();
    virtual void switchToComputeResidualNorm();
    virtual void switchToComputeVelocities();
    virtual void switchToPlotSolution();


    virtual void iterate();

    virtual void getNumberOfInnerVertices(double& vertices);
    virtual void getNumberOfBoundaryVertices(double& vertices);
    virtual void getNumberOfOuterVertices(double& vertices);
    virtual void getNumberOfInnerCells(double& cells);
    virtual void getNumberOfOuterCells(double& cells);
    
    #if defined(CCA)
    /**
     * Operation is protected by include guard as the ISO C++ 1998 standard 
     * does not support long long. However, if you link Peano to Java, you 
     * have to support long long.
     */
    virtual void getMaximumMeshWidth(const long long& dimension, double& h);

    /**
     * Operation is protected by include guard as the ISO C++ 1998 standard 
     * does not support long long. However, if you link Peano to Java, you 
     * have to support long long.
     */
    virtual void getMinimumMeshWidth(const long long& dimension, double& h);
    #endif

    /**
     * Callback Point for CCA Main
     *
     * This operation is called by main if Peano runs as remote job. The 
     * operation sets up Peano, so, usually, there's no need to add any code 
     * here. Nevertheless, you may want to modify the routine. 
     */    
    static int initRemoteJob(int argc, char** argv);
    
    /**
     * Callback Point for CCA Main
     *
     * This operation is called before a remote Peano main terminates. The 
     * operation sets up Peano, so, usually, there's no need to add any code 
     * here. Nevertheless, you may want to modify the routine. 
     */    
    static int shutdownRemoteJob();
};


#endif
