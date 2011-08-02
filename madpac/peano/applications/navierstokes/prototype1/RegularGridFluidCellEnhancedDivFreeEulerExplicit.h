// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_RegularGridFluidCellEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_RegularGridFluidCellEnhancedDivFreeEulerExplicit_H_


#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/kernel/regulargrid/Cell.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
        class RegularGridFluidCellEnhancedDivFreeEulerExplicit;
      }
    }
  }
}


/**
 * Blueprint for regular grid cell.
 * 
 * This file has originally been created by RaPeP and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author RaPeP
 */


class peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit: public peano::kernel::regulargrid::Cell< peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit > { 
  private: 
    typedef class peano::kernel::regulargrid::Cell< peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit >  Base;

    /**
     * L2h norm of p. Used for relative difference measurement.
     *
     * This member holds the accumulated squared contributions. The overall
     * square root is drawn in the corresponding getter.
     */
    static double _pL2h;
    /**
     * Maximum norm of p. Used for relative difference measurement.
     */
    static double _pMax;
    /**
     * Current improvement of p in L2h norm (@f$ \| p_{old} - p_{new}\|_{L2h} @f$).
     *
     * This member holds the accumulated squared contributions. The overall
     * square root is drawn in the corresponding getter.
     */
    static double _pImprovementL2h;
    /**
     * Current improvement of p in maximum norm (@f$ max| p_{old} - p_{new}| @f$).
     */
    static double _pImprovementMax;

    /**
     * This method calculates the data for the pressure measurement when it is
     * updated.
     *
     * The pressure measurements are the following (in this order):
     * - set _pMax if absolute pressure value is larger than current maximum.
     * - set _pImprovementMax if absolute pressure difference to last value on
     *   this cell is larger than current maximum.
     * - accumulate _pL2h in the discrete L2 norm (squared; the root is taken in
     *   the getter getPL2h()).
     * - accumulate _pImprovementL2h in the discrete L2 norm (squared; the root
     *   is taken in the getter getPImprovementL2h()).
     *
     * The measurement on p (and not only on the difference dp) is necessary in
     * order to get values for the relative tolerance checks.
     *
     * @param newPressureValue New value of the pressure on the current cell.
     * @param oldPressureValue Old value of the pressure on the current cell.
     * @param h                Mesh size of the current cell.
     */
    void calculatePMeasurement(
      const double& newPressureValue,
      const double& oldPressureValue,
      const Vector& h
    );


  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridFluidCellEnhancedDivFreeEulerExplicit();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it. It is kind of a copy constructor that converts an object which 
     * comprises solely persistent attributes into a full attribute. This very 
     * functionality is implemented within the super type, i.e. this constructor 
     * has to invoke the correponsing super type's constructor and not the super 
     * type standard constructor.
     */
    RegularGridFluidCellEnhancedDivFreeEulerExplicit(const Base::PersistentCell& argument);

    /**
     * This method resets all measurement members for p. This is used before a
     * run of an adapter that modifies the desired members.
     */
    static void resetMeasurementMembers();

    /**
     * This method sets the pressure _p to a new value and uses this update info
     * for a call of calculatePMeasurement().
     */
    void setPAndCalculatePMeasurement(
      const double& newPressureValue,
      const Vector& h
    );

    /**
     * This method returns the current value of p in the L2h norm.
     *
     * Since the accumulated values are a sum of squares, we have to take the
     * root of _pL2h.
     */
    static double getPL2h();

    /**
     * This method returns the current value of p in the maximum norm.
     */
    static double getPMax();

    /**
     * This method returns the improvement of p in L2h norm
     * (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
     *
     * Since the accumulated values are a sum of squares, we have to take the
     * root of _pImprovementL2h.
     */
    static double getPImprovementL2h();

    /**
     * This method returns the improvement of p in maximum norm
     * (@f$ max| u_{old} - u_{new}| @f$).
     */
    static double getPImprovementMax();

    /**
     * Proxy for getting fluid cell type.
     */
    Base::Records::FluidCellType getFluidCellType() const;

    /**
     * Proxy for setting fluid cell type.
     *
     * @param fluidCellType New cell type to be set.
     */
    void setFluidCellType(const Base::Records::FluidCellType& fluidCellType);

    /**
     * Proxy for getting the pressure of a cell.
     */
    double getP() const;

    /**
     * Proxy for setting the pressure on a cell.
     *
     * @param p New pressure value.
     */
    void setP(const double& p);

    /**
     * Proxy for getting right hand side of the pressure Poisson equation.
     *
     * This method is "misused" in steady-state for divergence getting.
     */
    double getRhsPPE() const;

    /**
     * Proxy for setting right hand side of the pressure Poisson equation.
     *
     * This method is "misused" in steady-state for divergence setting.
     *
     * @param rhsPPE New rhs value.
     */
    void setRhsPPE(const double& rhsPPE);

    /**
     * Getter for residuum
     */
    double getResiduum() const;
    /**
     * Setter for residuum.
     */
    void setResiduum(const double& newValue);
    /**
     * Method to reset residuum to zero.
     */
    void resetResiduum();

};


#endif
