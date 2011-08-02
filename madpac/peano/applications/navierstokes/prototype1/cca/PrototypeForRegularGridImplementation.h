// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_PrototypeFOR_REGULAR_GRID_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_PrototypeFOR_REGULAR_GRID_H_

#if defined(CCA)
#include "peano/applications/navierstokes/prototype1/cca/scicode/AbstractPrototypeForRegularGrid.h"
#endif
 
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"
#include "peano/geometry/builtin/Sphere.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
      namespace cca {
        class PrototypeForRegularGridImplementation;
      }
}
}
}
}



/**
 * CCA Component of Prototype
 *
 * This is the blueprint of Prototype acting as 
 * CCA component. 
 */
class peano::applications::navierstokes::prototype1::cca::PrototypeForRegularGridImplementation
#if defined(CCA)
  : public AbstractPrototypeForRegularGrid
#endif
{
  private:
    /**
     * @todo Replace by another geometry if you feel like
     */
    peano::geometry::builtin::Sphere                                     _geometry;
    
    peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid*            _repository;
    
  public:
    PrototypeForRegularGridImplementation();
    virtual ~PrototypeForRegularGridImplementation();
          
    virtual void switchToInitialiseScenario();
    virtual void switchToMergeA();
    virtual void switchToCalculateF();
    virtual void switchToCalculatePPERHS();
    virtual void switchToGaussSeidelForEnhancedDivFree();
    virtual void switchToUpdateVelocity();
    virtual void switchToPlotSolutionVTK();
    virtual void switchToPlotRegularSolutionVTK();
    virtual void switchToUpdateScenario();


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
