#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDSIMULATION_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDSIMULATION_H_

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/UserInterface.h"
#include "tarch/logging/Log.h"
#include "tarch/utils/Watch.h"


namespace peano {
	namespace applications {
	  namespace navierstokes {
      namespace prototype1 {
        class FluidSimulation;
      }
	  }
	}
}

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace repositories {
          /**
           * Forward declaration for reference.
           */
          class PrototypeRepositoryForRegularGrid;
        }
      }
    }
  }
}
/**
 * Base class for performing a fluid simulation run. This class is instanciated
 * in the PeanoFluidRunner or TrivialgridFluidRunner with the corresponding
 * adapter as a template argument.
 *
 * This class contains the steering (i.e. order of commands) for fluid
 * simulations on both trivialgrid and peano grid.
 *
 * This class is now implemented as an abstract one with the two children
 * TrivialgridFluidSimulation and PeanoFluidSimulation, since we wanted to avoid
 * the former construct with (unnecessary) templates.
 *
 * Currently, the following static values are used:
 * A  = _tauSecurityFactorGlobal  = 0.8;
 * A1 = _tauSecurityFactorVisc    = 0.5;
 * A2 = _tauSecurityFactorU       = 0.5;
 *
 * In order to make the scenario adaption for the solver matrix and the rhs
 * usable, we now use the template method pattern realised by
 * AdaptSolverToFluidScenario. That is why the subclasses do not have the two
 * methods adaptPETScMatrixToScenario and adaptPETScRHSToScenario any longer.
 * Instead, we now use two attributes of AdaptMatrix and AdaptRHS in this base
 * class, resp.
 * This allows, in addition, to make the scenario adaption independent of the
 * solver type via template arguments for the solver pointer (even if we use
 * only the PETSc versions currently ;-)). In particular, the former attribute
 * _fluidScenarioName is now obsolete in the subclasses since AdaptMatrix and
 * AdaptRHS hold this internally and since it is not used somewhere else. The
 * attribute _scenarioName of this abstract class therefore may be (and is)
 * private and not protected.
 * Please note that this means that the adaptive Peano grid and trivialgrid use
 * the same adaption (number of cells etc.) One has to change this if one wants
 * to use different adaptions!
 * For a visualisation of this usage of the template method pattern, see the
 * following image:
 * @image html ../../petsc/adapter/petsc_AdaptSolverToFluidScenario_templateMethodPattern.png
 *
 * @author Michael Lieb, Tobias Neckel, Kristof Unterweger
 *
 * @todo check ob protected noetig (und wenn, was)
 */
//class peano::applications::navierstokes::prototype1::FluidSimulation : public ode::ODEOperations {
class peano::applications::navierstokes::prototype1::FluidSimulation {

  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Time measuring watch device (the extended one).
     */
    tarch::utils::Watch _extendedWatchForTimeStep;
    /**
     * Time measuring watch device (the extended one).
     */
    tarch::utils::Watch _extendedWatchForLGSSolution;
    /**
     * \brief Holds the complete elapsed processor time for one whole timestep
     *        (up to command line info part).
     *
     * Is set in runFluidSimulation().
     */
    double _elapsedCpuTimePerTimeStep;
    /**
     * \brief Holds the complete elapsed processor time for one solution of the
     *        complete linear system of equations (LGS).
     *
     * Is set in simulateOneFluidTimestep().
     */
    double _elapsedLGSTime;
    /**
     * \brief Holds adapters used in FluidSimulation.
     */
    repositories::PrototypeRepositoryForRegularGrid& _repository;


    /**
     * Bool deciding if the simulation shall use additional divergence
     * correction steps or not.
     * This decision has to be done by the user via the config file. For all
     * test cases (such as integration tests), this is an optional parameter in
     * the constructor.
     *
     * This flag has been introduced after the implementation of all divergence
     * correction stuff since we noticed that all former integration tests would
     * not be valid any longer due to changed pressure values in the first time
     * step. Furthermore, divergence correction means additional costs that we
     * would like to avoid when not necessary!
     */
    bool _useDivergenceCorrection;

    /**
     * Bool for storing the validity of the fluid setting data.
     *
     * This value is set via the method checkFluidScenarioSetting() directly
     * in the constructor. _isValid is used for the return method isValid().
     */
    bool _isValid;

    /**
     * Flag for decision for time-dependent boundary conditions. In particular,
     * time-dependent pressure is respected with this flag.
     */
    bool _useTimeDependentBoundaryConditions;
//    /**
//     * Instance of TimeDependentBoundaryConditions.
//     */
//    peano::fluidscenario::TimeDependentBoundaryData _timeDependentBoundaryData;

    /**
     * Desides wether the results are plotted to VTK-files.
     */
    bool _plotToVTK;

#if defined(ComponentPrecice)

    /**
     * In a coupled FSI simulation, the maximal timestep length to be chosen
     * by Peano is prescribed by the coupling logic. It can vary, depending
     * on the actual timestep lengths used by Peano.
     */
    double _maximalFSITimestepLength;

#endif // defined( ComponentPrecice )

    /**
     * Method for initialisation. Is called in the constructors.
     *
     * Currently, we call checkFluidSetting() and set the flag for periodic
     * boundary conditions (if in use).
     *
     * The setting of the _globalForceDirichletBoundaryPartNumber is now moved
     * to runFluidSimulation() because we needed to encapsulate it in
     * getGlobalForceDirichletBoundaryPartNumber() which - as a virtual function
     * - must not be called in the constructor.
     *
     * @param forceOutputPath Output path for force data file.
     */
    void init(const std::string forceOutputPath);

    /**
     *  Method for callculating an adaptive timestep-size for implicit
     *  time - integration
     *  @TODO (not yet implemented!)
     *
     */
    static double evaluateImplicitTimeStepSizeCriterion(
      const Vector uMaxPerDimension,
      const Vector minimumMeshSize,
      const double nu
    );

//    /**
//     * Method for setting time dependent boundary data. Is called in
//     * implementBeginTimeStep().
//     *
//     * We currently support time-dependent pressure boundary conditions only
//     * which are set via setNewPressureBoundaryData().
//     *
//     * @param timeStepNumber Number of the time step to begin.
//     * @param time           Current time.
//     * @return True, if new velocity boundary values have been set.
//     */
//    bool setNewTimeDependentBoundaryData(
//      const int    timeStepNumber,
//      const double time
//    );

//    /**
//     * Abstract method for setting time dependent pressure boundary data.
//     *
//     * @param pInlet  New inlet pressure.
//     * @param pOutlet New outlet pressure.
//     */
//    virtual void setNewPressureBoundaryData(
//      const double pInlet,
//      const double pOutlet
//    ) = 0;

  protected:
    /**
     * UserInterface instance (for command line logging etc.)
     */
    peano::applications::navierstokes::prototype1::UserInterface _userInterface;
//    /**
//     * Reference of the underlying geometry.
//     *
//     * We now keep it protected to allow TrivialgridFluidSimulation and
//     * PeanoFluidSimulation to access it (e.g. for calculateF adapter setup).
//     *
//     * Furthermore, it will be necessary for changing geometry stuff.
//     */
//    fluidscenario::FluidScenario& _fluidScenario;

    /**
     * Bool deciding whether to use explicit assembling via PETSc or not. It is
     * set in the constructor.
     */
    bool _useExplicitAssembling;

    /**
     * Bool to decide whether or not the computation and plotting of total
     * forces (hold in _globalForce) shall be performed. This flag is initialised
     * with false and set to true in the constructor if the scenario is
     * obstacle-in-channel
     */
    bool _forceDesired;
    /**
     * Vector of total force values on the desired Dirichlet boundary part. This
     * vector always exists even if no forces are calculated (zero return of
     * _gridFluidAdapter.calculatePressureGradientAndForces()).
     */
    Vector _globalForce;
    /**
     * Integer that holds the boundary part number for the computation of the
     * global force (on an obstacle in the channel).
     */
    int _globalForceDirichletBoundaryPartNumber;
    /**
     * Indicates wether the movement of the geometry shall be computed or not.
     */
    bool _useMovingGeometry;

///DEC for file data
//#if defined(ComponentPlotter)
//    /**
//     * Writer for force data of each time step.
//     *
//     * This writer is set up in the constructor (for real runs; for tests, this
//     * is currently not supported!).
//     */
//    tarch::plotter::TXTWriter_GlobalVectorData* _forceWriter;
//    /**
//     * Writer for force data in the tecplot x-y-plot format.
//     */
//    tarch::plotter::TECWriter_GlobalVectorData* _forceWriterTEC;
//    /**
//     * Writer for number of iterations for the LGS solver.
//     */
//    tarch::plotter::TXTWriter_ScalarData* _iterationsWriter;
//    /**
//     * Writer for time dependent boundary function (e.g. pressure).
//     * This writer currently plots the inlet pressure.
//     */
//    tarch::plotter::TXTWriter_ScalarData* _boundaryFunctionWriter;
//#endif


    /**
     * Security factor A for adaptive time step size computation.
     *
     * The value is initiated with -1 and is set in the method
     * setTauSecurityFactors().
     *
     * We changed this attribute to static in order to be able to set up the
     * method evaluateTimeStepSizeCriterion() as static.
     *
     *  \see evaluateTimeStepSizeCriterion()
     */
    static double _tauSecurityFactorGlobal;
    /**
     * Security factor A for adaptive time step size computation.
     *
     * The value is initiated with -1 and is set in the method
     * setTauSecurityFactors().
     *
     * We changed this attribute to static in order to be able to set up the
     * method evaluateTimeStepSizeCriterion() as static.
     *
     *  \see evaluateTimeStepSizeCriterion()
     */
    static double _tauSecurityFactorVisc;
    /**
     * Security factor A for adaptive time step size computation.
     *
     * The value is initiated with -1 and is set in the method
     * setTauSecurityFactors().
     *
     * We changed this attribute to static in order to be able to set up the
     * method evaluateTimeStepSizeCriterion() as static.
     *
     *  \see evaluateTimeStepSizeCriterion()
     */
    static double _tauSecurityFactorU;

    /**
     * Holds the maximum depth of an adaptive grid. Is equal to -1 for
     * trivialgrid.
     */
    int _maximumGridDepth;
    /**
     * Holds the number of fluid cells (allows counting of pressure dofs).
     *
     * This attribute is initialised with zero and set indirectly via a call of
     * countInnerCells() in runFluidSimulation() (implemented in the subclass).
     */
    int _numberOfFluidCells;

#ifdef Parallel
    /**
     * Hold the total number of inner cells ditributed over the nodes (CPUs).
     */
    int  _numberOfTotalFluidCellsForParallel;
#endif

    /**
     * Holds the number of fluid dof nodes (allows counting of velocity dofs).
     *
     * This includes all (persistent (Peano)) INNER and NEUMANN fluid vertices,
     * but no hanging nodes.
     *
     * This attribute is initialised with zero and set indirectly via a call of
     * countInnerCells() in runFluidSimulation() (implemented in the subclass).
     */
    int _numberOfFluidDoFNodes;

    /**
     * Flag to decide whether or not a periodic boundary is used. Used for
     * decision when to call corresponding data exchange methods in derived
     * classes.
     *
     * This flag is currently set in the constructor (for turbulent channel
     * only).
     */
    bool _periodicBoundaryInUse;

    /**
     * Used for setup of PETScSolver in test cases without any solver config.
     *
     * @todo check ob das nicht schoener und ohne _rTol geht.
     */
    double _rTol;

///DEC for PETSc usage
//    #if defined(ComponentPETSc)
//    /**
//     * Instance of the matrix adaption depending on scenario (derived version of
//     * AdaptSolverToFluidScenario). Initiated in the constructor.
//     *
//     * For a visualisation of the usage of the template method pattern in this
//     * case, see the following image:
//     * @image html ./adapter/fluid_AdaptSolverToFluidScenario_templateMethodPattern.png
//     */
//    petsc::AdaptMatrix _adaptMatrix;
//    /**
//     * Instance of the rhs adaption depending on scenario (derived version of
//     * AdaptSolverToFluidScenario). Initiated in the constructor.
//     *
//     * For a visualisation of the usage of the template method pattern in this
//     * case, see the following image:
//     * @image html ./adapter/fluid_AdaptSolverToFluidScenario_templateMethodPattern.png
//     */
//    petsc::AdaptRHS _adaptRHS;
//    #endif

    /**
     * \brief Holds the number of iterations performed by the solver for the
     *        linear system of equations (LGS).
     *
     * The initialisation is done with -1.
     *
     * Is set in solveSystem().
     */
    int _neededLGSIterations;
    /**
     * Flag wether or not to plot the number of iterations required by
     * the LGS solver. Initially set to false and set in the constructor
     * to true if desired.
     */
    bool _plotNumberIterationsDesired;

///DEC for PETSc usage non-linear
//    #if defined(ComponentPETSc)
//    /**
//     * Pointer to PETScNonLinearSolver.
//     */
//    petsc::PETScNonLinearSolver* _PETScNonLinearSolver;
//    #endif
//    /**
//     * Flag for MF usage for the Jacobian (without a real matrix assemblation).
//     *
//     * Workaround: is currently set in constructor of non-linear derived
//     * children.
//     */
//    bool _useMatrixFreeJacobian;
//    /*
//     * Copy of input vector x passed into the empty jacobianGridMF method
//     * in matrixfree mode.
//     *
//     * Used in matMultMF method.
//     *
//     * @see saveInputVector
//     * @see getInputVector
//     */
//    #if defined(ComponentPETSc)
//    Vec _inputCopy;
//    #endif

//    /**
//     * Holds the number of non-linear iterations done by the solver.
//     *
//     * Is initiated with -1 and set in solveNonLinearSystem().
//     */
//    int _numberOfPerformedNonLinearIterations;


//    #if defined(ComponentPlotter)
//    /**
//     * Writer for force data of each non-linear steady-state iteration.
//     *
//     * This writer is needed in addition to _forceWriter in order to distinguish
//     * forces from time steps from those of the non-linear iterations. The price
//     * is that is has to be implemented/used (in plotSteadyStateIterationOutput())
//     * twice, if the peano grid version is implemented. But this class is the
//     * only one that has all necessary knowledge (AbstractSteadyStateSolver does
//     * not have it!).
//     */
//    tarch::plotter::TXTWriter_GlobalVectorData* _nonLinearIterationForceWriter;
//    #endif

    /**
     * \brief This method checks the fluid setting.
     *
     * Currently, we check the adjustment factor and the supported scenario.
     *
     * The check for the element type are now done in the child classes as ido
     * has its own type.
     */
    virtual bool checkFluidSetting();

    /**
     * \brief This method evaluates the CFL-like criterion for the computation
     * of a new variable time step size (which is returned).
     * (only used for explicit time-integration)
     *
     * It is called in initiateTimeStepSize() and calculateTimeStepSize().
     *
     * The criterion is a mixture of the one used in the Griebel et. al. book
     * and the one of the Tome & McGee paper (1994).
     * The formula is (for 2D):
     * \f$ \tau \leq \sigma \cdot min \left\{ \delta t_{visc}, \delta t_{u},
     *      \delta t_{v}\right\} \f$ \n
     * where the different delta time step sizes are defined as following:
     * \f{eqnarray*}
     *   \delta t_{visc} &=& \frac{A_1}{2\nu} \cdot \frac{h_x^2 h_y^2}{h_x^2 + h_y^2}
     *      \ = \ \frac{A_1}{\nu} \frac{h^2}{4},  \\
     *   \delta t_{u} &=& A_2 \cdot \frac{h_x}{2U_{max}}, \\
     *   \delta t_{v} &=& A_2 \cdot \frac{h_y}{2V_{max}} .
     * \f}
     *
     * In 3D, we currently use:
     * \f{eqnarray*}
     *   \tau &\leq& \sigma \cdot min \left\{ \delta t_{visc}, \delta t_{u},
     *      \delta t_{v}, \delta t_{w} \right\} \\
     *   \delta t_{visc} &=& \frac{A_1}{2\nu} \cdot \left(
     *      \frac{1}{h_x^2} + \frac{1}{h_y^2} + \frac{1}{h_z^2} \right)^{-1}
     *    \ = \ \frac{A_1}{\nu}
     *         \frac{h_y^2h_z^2 + h_x^2h_z^2 + h_x^2h_y^2}{2h_x^2h_y^2h_z^2 },\\
     *   \delta t_{u} &=& A_2 \cdot \frac{h_x}{2U_{max}}, \\
     *   \delta t_{v} &=& A_2 \cdot \frac{h_y}{2V_{max}}, \\
     *   \delta t_{w} &=& A_2 \cdot \frac{h_z}{2W_{max}} .
     * \f}
     * Note that the criterion for \f$\delta t_{visc}\f$ in 3D has to be checked. We
     * take it at the moment from the Griebel book. The Tome & McGee paper (1994)
     * only considers 2D, and we have not yet really found a complete
     * explanation of the criterion.
     *
     * \f$\sigma=0.8\f$ is the global security factor, \f$A_1=0.5\f$ is the
     * viscous and \f$A_2=0.5\f$ the velocity security factor. We use the actual
     * minimum mesh size of the grid for \f$h\f$ and the maximum absolute value
     * \f$U_{max}\f$ of the velocity field. According to the
     * Tome & McGee paper (1994), we are even more conservative by using an
     * additional factor of 0.5.
     *
     * At the moment, the "forward guessing"
     * is used, but we want to change that by using the intermediate velocities
     * (F) in order to check for validity and readjust tau if necessary.
     *
     * Since it has to be assured in the calling
     * method, that uMaxPerDimension and minimumMeshSize hold the correct values
     * (especially for the initialisation!), we decided to use these values via
     * parameters instead of a "silent" call of _uMaxPerDimension and
     * _gridFluidAdapter.getMinimumMeshSize().
     *
     * We changed this method to be static since it does not change its
     * behaviour (apart from changing the security factors to static, too, and
     * using nu = _eta/_rho as additional input paramter) and since it allows a
     * much easier test.
     *
     * @param uMaxPerDimension Maximum absolute value of the velocity flow field
     *                         in each dimension. In general, this is different
     *                         from _oldUMax!
     * @param minimumMeshSize
     * @param nu               Kinematic viscosity (_eta/_rho); necessary due to
     *                         recent static declaration.
     *
     * @return New time step size from the criterion evaluation.
     *
     * @todo finish implementation of more complex criterion from paper!
     * @todo check 3D correct?
     */
    static double evaluateExplicitTimeStepSizeCriterion(
      const Vector uMaxPerDimension,
      const Vector minimumMeshSize,
      const double nu
    );

//    /**
//     *  Method for callculating an adaptive timestep size for implicit time-
//     *  integration.
//     *  No operation, but overwritten in derived class.
//     *
//     *  @ param tau  Current timestep size
//     *
//     *  @ return     New timestep size
//     */
//    virtual double evaluateImplicitTimeStepSizeCriterion(
//      const double tau
//    ) const;

    /**
     * This method encapsulates all the calls/computations necessary for the
     * complete fluid simulation of one single explicit timestep with a fixed
     * geometry.
     *
     * The method performs all the commands of one time step on the
     * GridTypeFluidAdapter in the desired order. These are the following:
     * - calculate F
     * - calculate PPE right hand side
     * - solve linear system of equations for pressure (PPE)
     * - calculate pressure gradient
     * - calculate forces
     * - plot output
     * - update velocities
     * - display command line info
     *
     * We needed to make this method protected and virtual instead of private
     * only as the child class TurbulenceTrivialgridFluidSimulation in
     * turbulence needs to access it (to enlarge it).
     *
     * @todo check correct time step size usage when Runge-Kutta is also in use.
     */
    virtual void performExplicitTimestep();

///DEC for time-implicit
//    /**
//     * Abstract method for one implicit time step.
//     *
//     * @param solverStepNumber       Step number of the solver in use.
//     * @param derivativeTime         Time to evaluate derivative at.
//     * @param updateTimeIntermediate Time for intermediate accumulation.
//     * @param updateTimeAccumulated  Time for accumulation.
//     */
//    virtual void performImplicitTimestep(
//      const int     solverStepNumber,
//      const double& derivativeTime,
//      const double& updateTimeIntermediate,
//      const double& updateTimeAccumulated
//    ) = 0;

    /**
     * Abstract Method. Has to be implemented in derived classes.
     *
     * Method for exporting the global boundary part number.
     *
     * This has to be done in each specific grid simulation since the number of
     * an obstacle is now a coded in the corresponding vertex dofs.
     */
    virtual int getGlobalForceDirichletBoundaryPartNumber() const;

    /**
     * Has to be overwritten in derived classes for a meaningful behavior.
     * Returns true, if a coupled FSI simulation should be performed.
     */
    //virtual bool isFSI() const { return false; };
    /**
     * Has to be overwritten in derived classes for a meaningful behavior.
     * Initializes a coupled FSI simulation.
     */
    //virtual void initializeFSI() { assertion(false); };
    /**
     * Has to be overwritten in derived classes for a meaningful behavior.
     * Finalizes a coupled FSI simulation.
     */
    //virtual void finalizeFSI() { assertion(false); };
    /**
     * Has to be overwritten in derived classes for a meaningful behavior.
     * Returns the maximal limit for the length of the current timestep
     * of Peano in the frame of a coupled FSI simulation.
     */
    //virtual double getMaximalFSITimestepLength() const { return 0.0; };
    /**
     * Abstract Method. Has to be implemented in derived classes.
     * Performs the actual Fluid-Structure-Interaction, i.e. it
     * collects the forces on the geometry and computes a timestep.
     * @return true if the geometry has changed during the timestep
     * otherwise false.
     */
//    virtual bool computeFSI( double tau );
    /**
     * Abstract Method. Has to be implemented in derived classes.
     */
    virtual void prepareGrid();
    /**
     * Abstract Method. Has to be implemented in derived classes.
     * Sets the states of the cells and vertices when the
     * geometry has moved.
     * @return true if at least one cell or vertex has changed.
     */
//    virtual bool updateGrid();

///DEC for moving geo
//    /**
//     * Performs all actions that are needed to move geometries.
//     * I.e. computing the timestep for the geometry, updating the
//     * grid to set new inner/outer cells and vertices, building
//     * the new matrix for the PPE and finally performing some
//     * adjustments on the new grid.
//     * @param tau The length of the current timestep.
//     */
//    void moveGeometry(double tau); TODO

///DEC for PETSc usage
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     */
//    virtual void assembleMatrix() = 0;

///DEC for div-corr
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     */
//    virtual void computeDivFreeVelocityField() = 0;
    /**
     * Computes F.
     */
    virtual void calculateF();
    /**
     * Computes right hand side for PPE.
     */
    virtual void calculatePPERHS();
    /**
     * Compute pressure solution.
     */
    virtual void solveSystem();
    /**
     * Calculate pressure gradient and forces.
     */
    virtual Vector calculatePressureGradientAndForces(
      const bool forceDesired,
      const int globalForceDirichletBoundaryPartNumber
    );
    /**
     * Updates the velocity data.
     */
    virtual void updateVelocities();

///TODO noetig?
//    /**
//     * Calls plotOutput() overload with argument internalTrigger = true.
//     */
//    void plotOutput(
//      const double      simulationTime,
//      const bool        forceDesired,
//      const Vector&     forces,
//      const std::string timestepNumberWithZeros
//    );
    /**
     * Determines the plotting filepath and name and performs plotting.
     *
     * @param internalTrigger If true, leads to a normal plot. If false, only
     *                        preCICE triggered plotting is done.
     */
    void plotOutput(
      const bool        forceDesired,
      const Vector&     forces,
      const std::string timestepNumberWithZeros,
      const bool        internalTrigger
    );
//    /**
//     * Abstract method. Updates time dependent velocities on the boundaries.
//     */
//    virtual void implementUpdateBoundaryVelocities(
//      fluidscenario::TimeDependentBoundaryData& timeDependentBoundaryData
//    );

///DEC for checkpointing
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     *
//     * @param timestep Time step number (where restart writing was called; read
//     *                 in from restart data).
//     * @param tau      Time step size (where restart writing was called; read
//     *                 in from restart data; enlarged return).
//     * @param readPath Path for reading the restart file.
//     * @param restartAtTimeZero flag if restart shall be done to time zero.
//     *
//     * @return time Value of time (where restart writing was called; read in
//     *              from restart data).
//     */
//    virtual double readRestartData(
//      int&              timestep,
//      double&           tau,
//      const std::string readPath,
//      const bool        restartAtTimeZero
//    ) = 0;
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     *
//     * @param timeStepNumber Number of current time step.
//     * @param time           Current time value.
//     * @param tau            Current time step size (both fixed and adaptive).
//     * @param writePath      Path to write file to; now comes from ODESolver.
//     */
//    virtual void writeRestartData(
//      const int         timeStepNumber,
//      const double      time,
//      const double      tau,
//      const std::string writePath
//    ) = 0;

///TODO noetig?
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     */
//    virtual Vector getMinimumMeshSize() const = 0;
//    /**
//     * Abstract Method. Has to be implemented in derived classes.
//     */
//    virtual int getMaximumGridDepth() const = 0;


///DEC for PETSc usage non-linear
//    /**
//     * Has to be implemented in derived class (non-linear).
//     *
//     * This method sets the dimensions in the corresponding adapters. It is
//     * called/needed in solveNonLinearSystem().
//     */
//    virtual void setDimensionsInAdapters(
//      const int numberOfFluidDofNodes,
//      const int numberOfFluidCells
//    );
//    /**
//     * Has to be implemented in derived class (non-linear).
//     *
//     * This method sets the numbers of the cells and the vertices in the
//     * corresponding adapters. It is called/needed in solveNonLinearSystem().
//     */
//    virtual void setNumbersOfCellsAndVertices();
//    /**
//     * Has to be implemented in derived class (non-linear).
//     *
//     * This method is called/needed in computeNavierStokesFunction().
//     */
//    virtual void uploadUP(double* pUP);
//    /**
//     * Has to be implemented in derived class (non-linear).
//     *
//     * This method is called/needed in solveNonLinearSystem().
//     */
//    virtual void downloadUP(double* pUP);
//    /**
//     * Method for computation of the Jacobian in matrix-free.
//     */
//    virtual void calculateJacobianMF(double* pUP, double* pB);


  public:
    /**
     * Constructor for integration test cases only.
     *
     * Currently, we don't support variable time step size computations. That is
     * why we just set _eta and _rho (which would be necessary) to 1.0.
     *
     * No force data writing currently supported here.
     *
     * @param useDivergenceCorrection Bool to decide whether or not to use the
     *                                additional divergence correction.
     * @param rTol   L2-Norm eps (PETSc). Reasonable value 1e-7. Only used for
     *               tests, when no solver config available.
     *
     */
    FluidSimulation(
      const bool                          useDivergenceCorrection,
      const double                        rTol,
      const bool                          plotToVTK,
      repositories::PrototypeRepositoryForRegularGrid&  repository
    );

    /**
     * Standard virtual destructor.
     */
    virtual ~FluidSimulation();

    /**
     * This method returns the validity of the whole fluid simulation setting.
     * It returns the flag _isValid that is set up using the method
     * checkFluidSetting() and the validity of the adapter in the constructor.
     */
    virtual bool isValid() const;
    void runCartesianGridAdapter();
    /**
     * Getter for _globalForce. Useful for tests etc.
     */
    Vector getGlobalForce() const;

/// TODO noetig?
//    /**
//     * Abstract method.
//     *
//     * @param cellNumber Desired cell for pressure result.
//     */
//    virtual double getLastPressureSolution(int cellNumber) = 0;

    /**
     * Getter for _numberOfFluidCells.
     *
     * Has been introduced to avoid a large number of friend declarations for
     * integration tests just due to that attribute getting.
     */
    int getNumberOfFluidCells() const;
    /**
     * Getter for number of fluid dofs (on vertices). Has to be implemented by
     * derived class.
     */
    int getNumberOfFluidDofNodes() const;


    /**
     * Method for setting the initial value and setting the vertex/cell dof
     * numbers.
     *
     * The setup of the grid (creation of dofs) via prepareGrid() takes place
     * here, as well as the initialisation of the force boundary part number.
     * The matrix is constructed for explicit computations with petsc.
     *
     * This is the first "usual" iteration apart from the scenario setup, so
     * that is why we plot the header of the time step information here.
     *
     * Finally, the initial values on the grid are plotted.
     *
     * This method can't be const, as an iteration of the grid never is const.
     *
     * The non-linear child overwrites this method to do additional stuff for
     * init!
     *
     * @param hasVariableTimeStepSize Flag if variable or fixed step size used.
     * @param startTime               Start time for init stuff.
     * @param noPseudoTimeSteps       Number of pseudo time step (for implicit
     *                                use only).
     * @param pseudoTimeStepSize      Size of pseudo time steps (zero for adap).
     */
    virtual void implementSetInitialValue(
      const bool              hasVariableTimeStepSize,
      const double            startTime,
      const int               noPseudoTimeSteps,
      const double            pseudoTimeStepSize
    );

    virtual void implementFinalizeTimestepping ();

    virtual bool implementExternalContinue();

    /**
     * Todo Docu!
     */
    virtual void implementUpdateGrid();

///DEC for time-implicit/multistep
//    /**
//     * Method for callculating start steps, as we need them in multi-step
//     * methods.
//     * No Operation, is overwritten in derived classes.
//     *
//     * @param startTime               Start time for init stuff.
//     * @param       tau               Default timestep size (in case of const.
//     *                                timestep size)
//     * @param hasVariableTimeStepSize Flag whether time integration with
//     *                                adaptive or const. timestep size
//     */
//    virtual double implementCalculateStartSteps(
//      const double             startTime,
//      const double                   tau,
//      const bool hasVariableTimeStepSize
//    );


///DEC for checkpointing
//    /**
//     * Method for reading restart data.
//     *
//     * @param timestep Time step number (where restart writing was called; read
//     *                 in from restart data).
//     * @param time     Time Value of time (where restart writing was called; read in
//     *                 from restart data).
//     * @param tau      Time step size (where restart writing was called; read
//     *                 in from restart data; enlarged return).
//     * @param readPath Path for reading restart data file from.
//     * @param restartAtTimeZero Flag if restart shall be done to time zero.
//     * @param internallyTriggered Flag if writing is triggered by ode component.
//     *
//     * @return Flag whether restart data has been actually read.
//     */
//    virtual bool implementReadRestartData(
//      int&              timestep,
//      double&           time,
//      double&           tau,
//      const std::string readPath,
//      const bool        restartAtTimeZero,
//      const bool        internallyTriggered
//    );
//    /**
//     * Method for writing restart data.
//     *
//     * @param timeStepNumber Number of current time step.
//     * @param time           Current time value.
//     * @param tau            Current time step size (both fixed and adaptive).
//     * @param writePath      Path for writing restart data file to.
//     * @param internallyTriggered Flag if writing is triggered by ode component.
//     */
//    virtual void implementWriteRestartData(
//      const int         timeStepNumber,
//      const double      time,
//      const double      tau,
//      const std::string writePath,
//      const bool        internallyTriggered
//    );

    /**
     * Method for computing an adaptive time step size. This method is the
     * implementation counterpart of CalculateTimeStepSize() ODESolver in the
     * bridge pattern.
     *
     * We just export the evaluation of the criterion.
     *
     * Note that for the first call to this method (i.e. before something has
     * been computed on the grid), the init value 1.0 (constructor) is used for
     * _uMaxPerDimension.
     *
     * So we don't perform an extra grid iteration to get the maximum velocity,
     * but compute that in the update phase. So only the very first step is a
     * bit different.
     *
     * @param timeStepNumber Number of the time step to begin.
     * @param tau            Current timestep size
     *
     * @return time step size for adaptive time step simulations.
     */
    virtual double implementCalculateTimeStepSize(
      const int timeStepNumber,
      const double tau
    );

    /**
     * Method for starting a time step. This method is the implementation
     * counterpart of beginTimeStep() ODESolver in the bridge pattern.
     *
     * This method triggers the setting of the time dependent boundary data and
     * the divergence correction, if desired.
     */
    virtual void implementBeginTimeStep();
    /**
     * Method for finishing a time step. This method is the implementation
     * counterpart of endTimeStep() ODESolver in the bridge pattern.
     *
     * The following actions are performed:
     * - in Debug mode: compare current time step size with the one of the
     *                  explicit criterion.
     * - write out global forces (if in use),
     * - write out global number of iterations (if in use),
     * - plot output,
     * - for steering: update steering input,
     * - for moving geometry: perform geometry move (via moveGeometry()),
     * - plot command line info.
     *
     * Note that the adaptive child class PeanoFluidSimulation has its own
     * implementation of implementEndTimeStep() that uses this method and adds
     * the dynamical adaptivity.
     *
     * @param hasVariableTimeStepSize        Bool for usage of var. time step size.
     * @param elapsedCPUTimePerStep          Elapsed CPU time in complete solver
     *                                       step.
     * @param shallOutputBePlotted           Bool if output shall be plotted.
     * @param timeStepNumberWithLeadingZeros String holding the time step number
     *                                       with leading zeros.
     */
    virtual void implementEndTimeStep(
      const bool                    hasVariableTimeStepSize,
      const double&                 elapsedCPUTimePerStep,
      const bool                    shallOutputBePlotted,
      const std::string             timeStepNumberWithLeadingZeros
    );

    /**
     * \brief Method for computing the derivative and update of the
     *        corresponding equation.
     *
     * This method can't be const, as an iteration of the grid (which usually is
     * needed to compute the) never is const.
     */
    virtual void implementDerivativeAndUpdate();



///DEC for PETSc non-linear
//    /**
//     * This method performs the initialisation of solveNonLinearSystem.
//     * The encapsulation from solveNonLinearSystem was necessary, because
//     * in implcit time-integration InitSolveNonLinearSystem is only called once,
//     * by contrast to solveNonLinearSystem, which is called every timestep.
//     * In the steady-state callculation both function are only called once.
//     * @see solveNonLinearSystem
//     *
//     */
//    void initSolveNonLinearSystem();
//
//    /**
//     * \brief This method induces the setup and solution of the non-linear
//     *        system of equations (time-implicit.
//     *
//     * The complete setup algorithm is encapsulated. Using sth. like the
//     * template method pattern, we call abstract functions that are implemented
//     * by the concrete derived classes (and pass the corresponding calls to
//     * the right adapters which only they know).
//     *
//     * This function is called in performImplicitTimestep().
//     *
//     * Cause for different arguments for function/Jacobian setting vs. monitor
//     * setting: see petsc::PETScNonLinearSolver.
//     *
//     * The final call on _PETScNonLinearSolver->solve() is now done with
//     * additional arguments in order to keep the number of non-linear iterations.
//     *
//     */
//    void solveNonLinearSystem();
//    /**
//    * This method calculatates a numerical estimate of the navier stokes equation LHS.
//    * Intended for a steady state simulation with a fixed geometry.
//    * It is not to be used directly, as it's a callback function.
//    *
//    * The method computes B(u,p).
//    *
//    * @param pUP An array that contains the values for u and p in the grid.
//    * @param pB  An array where the result of the navier stokes lhs
//    *            discretization from u and p is written into.
//    *
//    */
//    virtual void computeNavierStokesFunction(double* pUP, double* pB);
//    /**
//     * This method calculatates a numerical estimate of the Jacobian of the
//     * Navier-Stokes equations LHS for u and p.
//     * Intended for a steady state simulation with a fixed geometry.
//     * It is not to be used directly, as it's a callback function used.
//     */
//    virtual void computeNavierStokesJacobian();
//    /**
//     * This method directly calculatates a numerical estimate of the
//     * Jacobian-vector-product and is used in PETSc matrixfree context.
//     *
//     * Intended for a steady state simulation with a fixed geometry.
//     * It is not to be used directly, as it's a callback function.
//     *
//     * @param pUP An array that contains the values for u and p in the grid.
//     * @param pB  An array where the result of the navier stokes lhs
//     *            discretization from u and p is written into.
//     *
//     */
//    virtual void computeNavierStokesJacobianMF(double* pUP, double* pB);
//    /*
//     * Returns the nonlinear solver pointer.
//     */
//    #if defined(ComponentPETSc)
//    petsc::PETScNonLinearSolver* getNLS();
//    /*
//     * Saves all grid data for later update. (matrixfree mode)
//     */
//    void saveInputVector(Vec x);
//    #endif
//
//    /**
//     * Getter for number of non-linear iterations performed by the nl solver.
//     *
//     * @return _numberOfPerformedNonLinearIterations
//     */
//    int getNumberOfPerformedNonLinearIterations() const;
//    /**
//     * \brief Method for output of non-linear iteration solution.
//     *
//     * plotOutput() on base class is called.
//     *
//     * The output of force data is done here since this is the
//     * place where this is known. This means that we have to implement this
//     * method twice (for peano grid once again), but it is not so complicated
//     * and we avoid a lot of handling forces stuff ;-)
//     * Note that we had to introduce another force writer
//     * (_nonLinearIterationForceWriter) since we have to distinguish the force
//     * data coming from possible pseudo time steps and those coming from the
//     * steady-state non-linear iterations.
//     *
//     * @param iteration         Number of current iteration for force output.
//     */
//    virtual void plotNonLinearIterationOutput(
//      const int iteration
//    );

};

#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDSIMULATION_H_
