// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_RegularGridFluidStateEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_RegularGridFluidStateEnhancedDivFreeEulerExplicit_H_


#include "peano/kernel/regulargrid/State.h"

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"



namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 { 
      class RegularGridFluidStateEnhancedDivFreeEulerExplicit;
      /**
       * Forward declaration
       */
      class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
      /**
       * Forward declaration
       */
      class RegularGridFluidCellEnhancedDivFreeEulerExplicit;
      namespace repositories {
        /** 
         * Forward declaration
         */
        class PrototypeRepositoryForRegularGridStandardImplementation;
      }
}
}
}
}

/**
 * Blueprint for solver/application state.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit: public peano::kernel::regulargrid::State< peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit >, public peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit { 
  public:
    typedef class peano::kernel::regulargrid::State< peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit > Base;

  private: 
    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    /**
     * Needed for checkpointing.
     */
    friend class peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGridStandardImplementation;
    
    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) const;    
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint );    
    
  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridFluidStateEnhancedDivFreeEulerExplicit();

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
    RegularGridFluidStateEnhancedDivFreeEulerExplicit(const Base::PersistentState& argument);

    #ifdef Parallel
    /**
     * Merge worker state with global master state
     * 
     * The state management follows a one-point-holds-it-all policy, i.e. before 
     * and after each iteration, the global master (rank 0) is the only rank 
     * that has a valid state object. Whenever the application starts up, this 
     * valid state object is distributed among the working nodes. Whenever any 
     * node finishes to iterate, it sends back its state to the global master 
     * where all the state objects are merged into one big state object.
     *
     * This operation implements the merge process (the distribution is just a 
     * simple copying), i.e. it is called on the master node only. Implement 
     * your PDE-specific operations such as the computation of a global residual 
     * here but ensure that you also call the super class' merge operation. The 
     * this object is the master's state. The argument is the state that the 
     * node just received from a worker.
     */
    void mergeWithWorkerState(const RegularGridFluidStateEnhancedDivFreeEulerExplicit& workerState);
    #endif

  /// start manually introduced
  /*****************************************************************************
   * Spatial Discretization stuff
   */
  /**
   * Getter for the used element type.
   */
  ElementType getElementType() const;
  /**
   * Setter for the used element type.
   */
  void setElementType(const ElementType newValue);

  /*****************************************************************************
   * LGS stuff
   */
  /**
   * Getter for maximum number of iterations for the linear solver.
   */
  int getLGSMaxIterations() const;
  /**
   * Setter for maximum number of iterations for the linear solver.
   */
  void setLGSMaxIterations(const int newValue);

  /**
   * Getter for current global residual of linear solver.
   */
  double getLGSResidual() const;
  /**
   * Setter for current global residual of linear solver.
   */
  void setLGSResidual(double);

  /*****************************************************************************
   * ode stuff
   */
  /**
   * Getter for current time step number.
   */
  int getOdeTimestepnumber() const;
  /**
   * Setter for current time step number.
   */
  void setOdeTimestepnumber(const int newValue);


  /**
   * Getter for current time.
   */
  double getOdeTime() const;
  /**
   * setter for current time.
   */
  void setOdeTime(const double newValue);

  /**
   * Getter for time step size.
   */
  double getOdeTau() const;

  /**
   * Setter for time step size.
   */
  void setOdeTau(const double newValue);



  /*****************************************************************************
   * plotter stuff
   */
  /**
   * Getter for plotter debug flag.
   */
  bool getPlotterPlotDebugInfo() const;
  /**
   * Setter for plotter debug flag.
   */
  void setPlotterPlotDebugInfo(const bool newValue);

  /**
   * Sets wether the results should be plotted to VTK-files.
   */
  void setUseVTKFiles( bool newValue );

  /**
   * Returns wether the results are plotted to VTK-files.
   */
  bool useVTKFiles();

  /**
   * Generated
   */
  tarch::la::Vector<DIMENSIONS,int> getNumberOfVertices() const;

  /**
   * Generated
   */
  void setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices);

  /**
   * Generated
   */
  tarch::la::Vector<DIMENSIONS,double> getOffset() const;

  /**
   * Generated
   */
  void setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset);

  /**
   * Generated
   */
  tarch::la::Vector<DIMENSIONS,double> getSize() const;

  /**
   * Generated
   */
  void setSize(const tarch::la::Vector<DIMENSIONS,double>& size);

  /*****************************************************************************
   * Scenario stuff
   */
  /**
   * Getter for the Reynolds number.
   */
  double getScenarioRe() const;
  /**
   * Setter for the Reynolds number.
   */
  void setScenarioRe(const double& newScenarioRe);

  /**
   * Getter the kinematic viscosity @f$ \eta @f$.
   */
  double getScenarioEta() const;
  /**
   * Setter the kinematic viscosity @f$ \eta @f$.
   */
  void setScenarioEta(const double& newScenarioEta);

  /**
   * Getter for the density @f$ \rho @f$.
   */
  double getScenarioRho() const;
  /**
   * Setter for the density @f$ \rho @f$.
   */
  void setScenarioRho(const double& newScenarioRho);

  /**
   * Getter for the characteristic length.
   */
  double getScenarioCharacteristicLength() const;

  /**
   * Setter for the characteristic length.
   */
  void setScenarioCharacteristicLength(const double& newScenarioCharacteristicLength);



  /**
   * This method returns the current value of p in the L2h norm.
   */
  double getPL2h() const;
  /**
   * This method returns the current value of p in the maximum norm.
   */
  double getPMax() const;
  /**
   * This method returns the improvement of p in L2h norm
   * (@f$ \| p_{old} - p_{new}\|_{L2h} @f$).
   */
  double getPImprovementL2h() const;
  /**
   * This method returns the improvement of p in maximum norm
   * (@f$ max| p_{old} - p_{new}| @f$).
   */
  double getPImprovementMax() const;
  /**
   * Setter for current value of p in different variants (L2h, max, L2h
   * improvement, max improvement).
   *
   * Is used in mapping.
   */
  void setPMeasurementData(
      const double pL2h,
      const double pMax,
      const double pL2hImprovement,
      const double pMaxImprovement
  );


  /**
   * This method returns the current value of u in the L2h norm.
   */
  double getUL2h() const;
  /**
   * This method returns the current value of u in the maximum norm.
   */
  double getUMax() const;
  /**
   * This method returns the improvement of u in L2h norm
   * (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
   */
  double getUImprovementL2h() const;
  /**
   * This method returns the improvement of u in maximum norm
   * (@f$ max| u_{old} - u_{new}| @f$).
   */
  double getUImprovementMax() const;
  /**
   * This method returns maximum absolute values of the velocity field
   * separated in dimensions. Note that the values differ in general (even in
   * sum) from the one of getUMax().
   *
   * This method is needed for variable time step size computations.
   */
  Vector getUMaxPerDimension() const;
  /**
   * Setter for current value of u in different variants (L2h, max, L2h
   * improvement, max improvement).
   *
   * Is used in mapping.
   */
  void setUMeasurementData(
      const double uL2h,
      const double uMax,
      const double uL2hImprovement,
      const double uMaxImprovement,
      const double uMaxPerDimension
  );
};


#endif
