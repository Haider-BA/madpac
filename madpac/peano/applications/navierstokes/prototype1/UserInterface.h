// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_USERINTERFACE_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_USERINTERFACE_H_

#include "peano/UserInterface.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        class UserInterface;
      }
    }
  }
}


/**
 * This class represents the user interface for detailed command line output.
 *
 * @todo
 */
class peano::applications::navierstokes::prototype1::UserInterface: public peano::UserInterface {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

  public:
    /**
     * Standard constructor.
     */
	  UserInterface();

    /**
     * Standard destructor.
     */
    ~UserInterface();

    /**
     * Writes the information after one iteration.
     * @param iterationNumber   iteration number.
     * @param u2                solution u in the Eukledian norm
     * @param deltaU2           change of solution vector in Eukledian norm
     * @param epsU2hDependent   termination value in h-dependent Eukledian norm
     * @param u2hDependent      solution u in h-dependent Eukledian norm
     * @param deltaU2hDependent change of solution in h-dependent Eukledian norm
     * @param epsMax            termination value in max norm
     * @param max               solution u in max norm
     * @param deltaMax          change of solution in max norm
     * @param maxTreeDepth      maximal tree depth.
     * @param numberOfDegreesOfFreedom number of degrees of freedom.
     */
    /// @todo Is pde-specific, i.e. should not be here
//    void writeSolverIterationInfo(
//      int           iterationNumber,
//      double        u2,
//      double        deltaU2,
//      double        u2hDependent,
//      double        deltaU2hDependent,
//      double        max,
//      double        deltaMax,
//      double        residual2,
//      double        residualMax,
//      double        convergenceRateEukledian,
//      double        convergenceRateMax,
//      int           maxTreeDepth,
//      double        numberOfPersistentVertices,
//      double        numberOfEvents,
//      double        numberOfDoFs,
//      int           numberOfIdleNodes = -1,
//      int           numberOfJoins = -1,
//      const std::string& comment = ""
//    );


    /// @todo Is pde-specific, i.e. should not be here
//    void writeGridIterationInfo(
//      int           iterationNumber,
//      int           maxTreeDepth,
//      long int localNumberOfPersistentVertices,
//      long int localNumberOfEvents,
//      double        globalNumberOfPersistentVertices = 0,
//      double        globalNumberOfEvents = 0,
//      int           numberOfIdleNodes = -1,
//      int           numberOfJoins = -1,
//      const std::string& comment = ""
//    );

    /**
     * This method writes the header for the fluid time step information.
     *
     * It decides, depending on the two flags variableTimeSteps and forceDesired,
     * if the corresponding header information shall be printed or not. The
     * order of the output data (headers) is the same as the order of the
     * parameters in writeFluidTimeStepInfo().
     *
     * Please note that only the relative differences are printed for Release
     * mode since they represent the most significant measurement data. The
     * absolute differences are currently printed only in Debug mode.
     *
     * @param variableTimeStepSize Bool deciding whether or not to print
     *                             additional time step size info.
     * @param forceDesired  Bool deciding whether or not to plot last field for
     *                      global forces.
     * @param dirichletBoundaryPart Number of the Dirichlet boundary part used
     *                      for computation of global forces.
     */
    /// @todo Is pde-specific, i.e. should not be here
    void writeFluidTimeStepInfoHeader(
      const bool variableTimeStepSize,
      const bool forceDesired,
      const int  dirichletBoundaryPart
    );


    /**
     *
     * This method writes all relevant time step information of a fluid
     * simulation.
     *
     * For decision if additional time step information shall be printed (for
     * adaptive time step control), the bool parameter variableTimeSteps exists.
     * For decision if additional force information shall be printed, the bool
     * parameter forceDesired exists.
     *
     * Please note that only the relative differences are printed for Release
     * mode since they represent the most significant measurement data. The
     * absolute differences are currently printed only in Debug mode.
     *
     * @param timeStep            Current time step number.
     * @param variableTimeSteps   Bool deciding whether or not to print time step
     *                            size and total simulation time.
     * @param timeStepSize        Value of the current time step size.
     * @param totalSimulationTime Value of the current total simulation time.
     * @param epsU2hDependent     Rel. difference of u of two time steps in L2h-norm.
     * @param epsUMax             Rel. difference of u of two time steps in maximum-norm.
     * @param deltaU2hDependent   Abs. difference of u of two time steps in L2h-norm.
     * @param deltaUMax           Abs. difference of u of two time steps in maximum-norm.
     * @param epsP2hDependent     Rel. difference of p of two time steps in L2h-norm.
     * @param epsPMax             Rel. difference of p of two time steps in maximum-norm.
     * @param deltaP2hDependent   Abs. difference of p of two time steps in L2h-norm.
     * @param deltaPMax           Abs. difference of p of two time steps in maximum-norm.
     * @param pResidual           Pressure residual.
     * @param maxTreeDepth        Maximum tree depth of grid (-1 for trivialgrid).
     * @param numberOfFluidCells  Number of fluid cells.
     * @param numberOfFluidDoFNodes Number of fluid degrees of freedom nodes.
     * @param cpuSecondsPerTimeStep Cpu time (sec.) spend for one time step computation.
     * @param numberOfIterationsPerLGSSolution Number of iterations needed for LGS solution.
     * @param cpuSecondsPerLGSSolution Cpu time (sec.) spend for the complete
     *                                 LGS solution (of a time step).
     * @param forceDesired  Bool deciding whether or not to plot last field for
     *                      global forces.
     * @param globalForces  Vector of global forces to plot data.
     */
    /// @todo Is pde-specific, i.e. should not be here
    void writeFluidTimeStepInfo(
      const int           timeStep,
      const bool          variableTimeSteps,
      const double        timeStepSize,
      const double        totalSimulationTime,
      const double        epsU2hDependent,
      const double        epsUMax,
      const double        deltaU2hDependent,
      const double        deltaUMax,
      const double        epsP2hDependent,
      const double        epsPMax,
      const double        deltaP2hDependent,
      const double        deltaPMax,
      const double        pResidual,
      const int           maxTreeDepth,
      const int           numberOfFluidCells,
      const int           numberOfFluidDoFNodes,
      const double        cpuSecondsPerTimeStep,
      const int           numberOfIterationsPerLGSSolution,
      const double        cpuSecondsPerLGSSolution,
      const bool          forceDesired,
      const tarch::la::Vector<DIMENSIONS,double>&       globalForces,
      const int           numberNonIdleNodes
    );

    /**
     * This method writes the header for the fluid time step information.
     *
     * It decides, depending on the flag variableTimeSteps,
     * if the corresponding header information shall be printed or not. The
     * order of the output data (headers) is the same as the order of the
     * parameters in writeContiTimeStepInfo().
     *
     * @param variableTimeStepSize Bool deciding whether or not to print
     *                             additional time step size info.
     */
    // @todo Is pde-specific, i.e. should not be here
//    void writeContiTimeStepInfoHeader(
//      const bool variableTimeStepSize
//    );


    /**
     *
     * This method writes all relevant time step information of a conti-equation
     * simulation.
     *
     * For decision if additional time step information shall be printed (for
     * adaptive time step control), the bool parameter variableTimeSteps exists.
     *
     * @param timeStep              Current time step number.
     * @param variableTimeSteps     Bool deciding whether or not to print time
     *                              step size and total simulation time.
     * @param timeStepSize          Value of the current time step size.
     * @param totalSimulationTime   Value of the current total simulation time.
     * @param L2AbsErrorToAnalyticSolution Absolute error (L2h) to analytic solution.
     * @param maxTreeDepth          Maximum tree depth of grid (-1 for trivialgrid).
     * @param numberOfContiDoFCells Number of fluid cells.
     * @param numberOfContiDoFNodes Number of fluid degrees of freedom nodes.
     * @param cpuSecondsPerTimeStep Cpu time (sec.) spend for one time step computation.
     */
    // @todo Is pde-specific, i.e. should not be here
//    void writeContiTimeStepInfo(
//      const int           timeStep,
//      const bool          variableTimeSteps,
//      const double        timeStepSize,
//      const double        totalSimulationTime,
//      const double        L2AbsErrorToAnalyticSolution,
//      const int           maxTreeDepth,
//      const long int numberOfContiDoFCells,
//      const long int numberOfContiDoFNodes,
//      const double        cpuSecondsPerTimeStep
//    );
};


#endif
