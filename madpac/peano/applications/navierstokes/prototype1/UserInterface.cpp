#include "peano/applications/navierstokes/prototype1/UserInterface.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::UserInterface::_log("peano::applications::navierstokes::prototype1::UserInterface");


peano::applications::navierstokes::prototype1::UserInterface::UserInterface() {
}


peano::applications::navierstokes::prototype1::UserInterface::~UserInterface() {
}


void peano::applications::navierstokes::prototype1::UserInterface::writeFluidTimeStepInfoHeader(
  const bool variableTimeStepSize,
  const bool forceDesired,
  const int  dirichletBoundaryPart
  ) {
  std::ostringstream msg;
  msg << "|| time step ";
  if (variableTimeStepSize) {
    msg << "|| tau           ";
  }
  msg << "|| T_sim total   ";
  msg << "|| norm(du/u)_2h || norm(du/u)_max";
  #ifdef Debug
    msg << "|| norm(du)_2h   || norm(du)_max  ";
  #endif
  msg << "|| norm(dp/p)_2h || norm(dp/p)_max";
  #ifdef Debug
    msg << "|| norm(dp)_2h   || norm(dp)_max  ";
  #endif
  msg << "|| resdiuum      ";
  msg << "|| depth || \\#cells || \\#dofNodes || cpu sec./step || \\#its/LGS-sol.  || cpu sec./LGS-sol. || mem usage MB || \\#non-idle";

  if (forceDesired) {
    msg << "|| f_glob on nr. " << dirichletBoundaryPart;
  }

  _log.info( "writeFluidTimeStepInfoHeader()", msg.str());
}


void peano::applications::navierstokes::prototype1::UserInterface::writeFluidTimeStepInfo(
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
) {
  std::ostringstream msg;

  msg.setf( std::ios_base::scientific, std::ios_base::floatfield ); \
  msg.precision(5); \

  msg <<  "|    " << timeStep << "     ";
  if (variableTimeSteps) {
    msg <<  "|    " << timeStepSize;
  }
  msg << "  |    " << totalSimulationTime;
  msg << "  |   " << epsU2hDependent
      << "  |   " << epsUMax
    #ifdef Debug
      << "  |   " << deltaU2hDependent
      << "  |   " << deltaUMax
    #endif
      << "  |   " << epsP2hDependent
      << "  |   " << epsPMax
    #ifdef Debug
      << "  |   " << deltaP2hDependent
      << "  |   " << deltaPMax
    #endif
      << "  |   " << pResidual
      << "  |   " << maxTreeDepth
      << "    |   " << numberOfFluidCells
      << "   |   " << numberOfFluidDoFNodes
      << "     |  " << cpuSecondsPerTimeStep
      << "     |  " << numberOfIterationsPerLGSSolution
      << "     |  " << cpuSecondsPerLGSSolution;
  long u = getMemoryUsage();
  int mega = 1024 * 1024;
  int usageMB ((u + (mega/2)) / mega );
  msg << "     |  " << usageMB;
  if (forceDesired) {
    msg << "  |   ";
    for(int i=0; i<DIMENSIONS; i++){
       msg << globalForces(i) << ", " ;
    }
  }
  msg << "  |   " << numberNonIdleNodes;

  _log.info( "writeFluidTimeStepInfo(...)", msg.str() );
}

