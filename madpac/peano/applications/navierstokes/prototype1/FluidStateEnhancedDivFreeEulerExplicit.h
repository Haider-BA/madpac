// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FluidStateEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FluidStateEnhancedDivFreeEulerExplicit_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/navierstokes/prototype1/records/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 { 
      class FluidStateEnhancedDivFreeEulerExplicit;
}
}
}
}



class peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit { 
  public:
    /**
     * Empty Destructor
     */
    virtual ~FluidStateEnhancedDivFreeEulerExplicit() {};

    /// start manually virtual introduced
    /**
     * Getter for the used element type.
     */
    virtual ElementType getElementType() const = 0;
    /**
     * Setter for the used element type.
     */
    virtual void setElementType(const ElementType newValue) = 0;

    /*****************************************************************************
     * LGS stuff
     */
    /**
     * Getter for maximum number of iterations for the linear solver.
     */
    virtual int getLGSMaxIterations() const = 0;
    /**
     * Setter for maximum number of iterations for the linear solver.
     */
    virtual void setLGSMaxIterations(const int newValue) = 0;

    /**
     * Getter for current global residual of linear solver.
     */
    virtual double getLGSResidual() const = 0;
    /**
     * Setter for current global residual of linear solver.
     */
    virtual void setLGSResidual(double) = 0;

    /*****************************************************************************
     * ode stuff
     */
    /**
     * Getter for current time step number.
     */
    virtual int getOdeTimestepnumber() const = 0;
    /**
     * Setter for current time step number.
     */
    virtual void setOdeTimestepnumber(const int newValue) = 0;


    /**
     * Getter for current time.
     */
    virtual double getOdeTime() const = 0;
    /**
     * setter for current time.
     */
    virtual void setOdeTime(const double newValue) = 0;

    /**
     * Getter for time step size.
     */
    virtual double getOdeTau() const = 0;

    /**
     * Setter for time step size.
     */
    virtual void setOdeTau(const double newValue) = 0;

    /*****************************************************************************
     * plotter stuff
     */
    /**
     * Getter for plotter debug flag.
     */
    virtual bool getPlotterPlotDebugInfo() const = 0;
    /**
     * Setter for plotter debug flag.
     */
    virtual void setPlotterPlotDebugInfo(const bool newValue) = 0;

    /**
     * Sets wether the results should be plotted to VTK-files.
     */
    virtual void setUseVTKFiles( bool newValue ) = 0;

    /**
     * Returns wether the results are plotted to VTK-files.
     */
    virtual bool useVTKFiles() = 0;

    /*****************************************************************************
     * Scenario stuff
     */
    /**
     * Getter for the Reynolds number.
     */
    virtual double getScenarioRe() const = 0;
    /**
     * Setter for the Reynolds number.
     */
    virtual void setScenarioRe(const double& newScenarioRe) = 0;

    /**
     * Getter the kinematic viscosity @f$ \eta @f$.
     */
    virtual double getScenarioEta() const = 0;
    /**
     * Setter the kinematic viscosity @f$ \eta @f$.
     */
    virtual void setScenarioEta(const double& newScenarioEta) = 0;

    /**
     * Getter for the density @f$ \rho @f$.
     */
    virtual double getScenarioRho() const = 0;
    /**
     * Setter for the density @f$ \rho @f$.
     */
    virtual void setScenarioRho(const double& newScenarioRho) = 0;

    /**
     * Getter for the characteristic length.
     */
    virtual double getScenarioCharacteristicLength() const = 0;

    /**
     * Setter for the characteristic length.
     */
    virtual void setScenarioCharacteristicLength(const double& newScenarioCharacteristicLength) = 0;



    /**
     * This method returns the current value of p in the L2h norm.
     */
    virtual double getPL2h() const = 0;
    /**
     * This method returns the current value of p in the maximum norm.
     */
    virtual double getPMax() const = 0;
    /**
     * This method returns the improvement of p in L2h norm
     * (@f$ \| p_{old} - p_{new}\|_{L2h} @f$).
     */
    virtual double getPImprovementL2h() const = 0;
    /**
     * This method returns the improvement of p in maximum norm
     * (@f$ max| p_{old} - p_{new}| @f$).
     */
    virtual double getPImprovementMax() const = 0;
    /**
     * Setter for current value of p in different variants (L2h, max, L2h
     * improvement, max improvement).
     *
     * Is used in mapping.
     */
    virtual void setPMeasurementData(
      const double pL2h,
      const double pMax,
      const double pL2hImprovement,
      const double pMaxImprovement
    ) = 0;


    /**
     * This method returns the current value of u in the L2h norm.
     */
    virtual double getUL2h() const = 0;
    /**
     * This method returns the current value of u in the maximum norm.
     */
    virtual double getUMax() const = 0;
    /**
     * This method returns the improvement of u in L2h norm
     * (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
     */
    virtual double getUImprovementL2h() const = 0;
    /**
     * This method returns the improvement of u in maximum norm
     * (@f$ max| u_{old} - u_{new}| @f$).
     */
    virtual double getUImprovementMax() const = 0;
    /**
     * This method returns maximum absolute values of the velocity field
     * separated in dimensions. Note that the values differ in general (even in
     * sum) from the one of getUMax().
     *
     * This method is needed for variable time step size computations.
     */
    virtual Vector getUMaxPerDimension() const = 0;
    /**
     * Setter for current value of u in different variants (L2h, max, L2h
     * improvement, max improvement).
     *
     * Is used in mapping.
     */
    virtual void setUMeasurementData(
      const double uL2h,
      const double uMax,
      const double uL2hImprovement,
      const double uMaxImprovement,
      const double uMaxPerDimension
    ) = 0;
};


#endif
