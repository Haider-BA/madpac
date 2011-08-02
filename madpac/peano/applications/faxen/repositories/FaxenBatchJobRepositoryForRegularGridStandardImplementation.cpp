#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::FaxenBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::FaxenBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),
  _gridWithInitialize(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithInitializeAndSetBoundary(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotGrid(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithControlTimeStep(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetVelocitiesBoundary(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetScenarioBoundary(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithComputeVelocitiesDerivatives(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithComputeRightHandSide(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetZeroPressureBoundary(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetPressureBoundary(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSORStep(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithComputeResidualNorm(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithComputeVelocities(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countInitializeRuns(0),
  _countInitializeAndSetBoundaryRuns(0),
  _countPlotGridRuns(0),
  _countControlTimeStepRuns(0),
  _countSetVelocitiesBoundaryRuns(0),
  _countSetScenarioBoundaryRuns(0),
  _countComputeVelocitiesDerivativesRuns(0),
  _countComputeRightHandSideRuns(0),
  _countSetZeroPressureBoundaryRuns(0),
  _countSetPressureBoundaryRuns(0),
  _countSORStepRuns(0),
  _countComputeResidualNormRuns(0),
  _countComputeVelocitiesRuns(0),
  _countPlotSolutionRuns(0),

  _measureInitializeCPUTime(0.0),
  _measureInitializeAndSetBoundaryCPUTime(0.0),
  _measurePlotGridCPUTime(0.0),
  _measureControlTimeStepCPUTime(0.0),
  _measureSetVelocitiesBoundaryCPUTime(0.0),
  _measureSetScenarioBoundaryCPUTime(0.0),
  _measureComputeVelocitiesDerivativesCPUTime(0.0),
  _measureComputeRightHandSideCPUTime(0.0),
  _measureSetZeroPressureBoundaryCPUTime(0.0),
  _measureSetPressureBoundaryCPUTime(0.0),
  _measureSORStepCPUTime(0.0),
  _measureComputeResidualNormCPUTime(0.0),
  _measureComputeVelocitiesCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureInitializeCalendarTime(0.0),
  _measureInitializeAndSetBoundaryCalendarTime(0.0),
  _measurePlotGridCalendarTime(0.0),
  _measureControlTimeStepCalendarTime(0.0),
  _measureSetVelocitiesBoundaryCalendarTime(0.0),
  _measureSetScenarioBoundaryCalendarTime(0.0),
  _measureComputeVelocitiesDerivativesCalendarTime(0.0),
  _measureComputeRightHandSideCalendarTime(0.0),
  _measureSetZeroPressureBoundaryCalendarTime(0.0),
  _measureSetPressureBoundaryCalendarTime(0.0),
  _measureSORStepCalendarTime(0.0),
  _measureComputeResidualNormCalendarTime(0.0),
  _measureComputeVelocitiesCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( FaxenBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(14);
  
  logTraceOut( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::FaxenBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithInitialize(_gridContainer,_geometry, _solverState),
  _gridWithInitializeAndSetBoundary(_gridContainer,_geometry, _solverState),
  _gridWithPlotGrid(_gridContainer,_geometry, _solverState),
  _gridWithControlTimeStep(_gridContainer,_geometry, _solverState),
  _gridWithSetVelocitiesBoundary(_gridContainer,_geometry, _solverState),
  _gridWithSetScenarioBoundary(_gridContainer,_geometry, _solverState),
  _gridWithComputeVelocitiesDerivatives(_gridContainer,_geometry, _solverState),
  _gridWithComputeRightHandSide(_gridContainer,_geometry, _solverState),
  _gridWithSetZeroPressureBoundary(_gridContainer,_geometry, _solverState),
  _gridWithSetPressureBoundary(_gridContainer,_geometry, _solverState),
  _gridWithSORStep(_gridContainer,_geometry, _solverState),
  _gridWithComputeResidualNorm(_gridContainer,_geometry, _solverState),
  _gridWithComputeVelocities(_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(_gridContainer,_geometry, _solverState),

  _countInitializeRuns(0),
  _countInitializeAndSetBoundaryRuns(0),
  _countPlotGridRuns(0),
  _countControlTimeStepRuns(0),
  _countSetVelocitiesBoundaryRuns(0),
  _countSetScenarioBoundaryRuns(0),
  _countComputeVelocitiesDerivativesRuns(0),
  _countComputeRightHandSideRuns(0),
  _countSetZeroPressureBoundaryRuns(0),
  _countSetPressureBoundaryRuns(0),
  _countSORStepRuns(0),
  _countComputeResidualNormRuns(0),
  _countComputeVelocitiesRuns(0),
  _countPlotSolutionRuns(0),

  _measureInitializeCPUTime(0.0),
  _measureInitializeAndSetBoundaryCPUTime(0.0),
  _measurePlotGridCPUTime(0.0),
  _measureControlTimeStepCPUTime(0.0),
  _measureSetVelocitiesBoundaryCPUTime(0.0),
  _measureSetScenarioBoundaryCPUTime(0.0),
  _measureComputeVelocitiesDerivativesCPUTime(0.0),
  _measureComputeRightHandSideCPUTime(0.0),
  _measureSetZeroPressureBoundaryCPUTime(0.0),
  _measureSetPressureBoundaryCPUTime(0.0),
  _measureSORStepCPUTime(0.0),
  _measureComputeResidualNormCPUTime(0.0),
  _measureComputeVelocitiesCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureInitializeCalendarTime(0.0),
  _measureInitializeAndSetBoundaryCalendarTime(0.0),
  _measurePlotGridCalendarTime(0.0),
  _measureControlTimeStepCalendarTime(0.0),
  _measureSetVelocitiesBoundaryCalendarTime(0.0),
  _measureSetScenarioBoundaryCalendarTime(0.0),
  _measureComputeVelocitiesDerivativesCalendarTime(0.0),
  _measureComputeRightHandSideCalendarTime(0.0),
  _measureSetZeroPressureBoundaryCalendarTime(0.0),
  _measureSetPressureBoundaryCalendarTime(0.0),
  _measureSORStepCalendarTime(0.0),
  _measureComputeResidualNormCalendarTime(0.0),
  _measureComputeVelocitiesCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( FaxenBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(14);
  
  logTraceOut( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::~FaxenBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == FaxenBatchJobRepositoryState::Terminate );
}


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == FaxenBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithInitialize.restart(domainSize,computationalDomainOffset);
  _gridWithInitializeAndSetBoundary.restart(domainSize,computationalDomainOffset);
  _gridWithPlotGrid.restart(domainSize,computationalDomainOffset);
  _gridWithControlTimeStep.restart(domainSize,computationalDomainOffset);
  _gridWithSetVelocitiesBoundary.restart(domainSize,computationalDomainOffset);
  _gridWithSetScenarioBoundary.restart(domainSize,computationalDomainOffset);
  _gridWithComputeVelocitiesDerivatives.restart(domainSize,computationalDomainOffset);
  _gridWithComputeRightHandSide.restart(domainSize,computationalDomainOffset);
  _gridWithSetZeroPressureBoundary.restart(domainSize,computationalDomainOffset);
  _gridWithSetPressureBoundary.restart(domainSize,computationalDomainOffset);
  _gridWithSORStep.restart(domainSize,computationalDomainOffset);
  _gridWithComputeResidualNorm.restart(domainSize,computationalDomainOffset);
  _gridWithComputeVelocities.restart(domainSize,computationalDomainOffset);
  _gridWithPlotSolution.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( FaxenBatchJobRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridContainer.terminate();
  _gridWithInitialize.terminate();
  _gridWithInitializeAndSetBoundary.terminate();
  _gridWithPlotGrid.terminate();
  _gridWithControlTimeStep.terminate();
  _gridWithSetVelocitiesBoundary.terminate();
  _gridWithSetScenarioBoundary.terminate();
  _gridWithComputeVelocitiesDerivatives.terminate();
  _gridWithComputeRightHandSide.terminate();
  _gridWithSetZeroPressureBoundary.terminate();
  _gridWithSetPressureBoundary.terminate();
  _gridWithSORStep.terminate();
  _gridWithComputeResidualNorm.terminate();
  _gridWithComputeVelocities.terminate();
  _gridWithPlotSolution.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::faxen::RegularGridState& peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  #endif

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().switchToOracle(_repositoryState.getAction());
  
  switch ( _repositoryState.getAction()) {
    case FaxenBatchJobRepositoryState::UseAdapterInitialize: watch.startTimer(); _gridWithInitialize.iterate(); watch.stopTimer(); _countInitializeRuns++; _measureInitializeCPUTime += watch.getCPUTime(); _measureInitializeCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary: watch.startTimer(); _gridWithInitializeAndSetBoundary.iterate(); watch.stopTimer(); _countInitializeAndSetBoundaryRuns++; _measureInitializeAndSetBoundaryCPUTime += watch.getCPUTime(); _measureInitializeAndSetBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterPlotGrid: watch.startTimer(); _gridWithPlotGrid.iterate(); watch.stopTimer(); _countPlotGridRuns++; _measurePlotGridCPUTime += watch.getCPUTime(); _measurePlotGridCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterControlTimeStep: watch.startTimer(); _gridWithControlTimeStep.iterate(); watch.stopTimer(); _countControlTimeStepRuns++; _measureControlTimeStepCPUTime += watch.getCPUTime(); _measureControlTimeStepCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary: watch.startTimer(); _gridWithSetVelocitiesBoundary.iterate(); watch.stopTimer(); _countSetVelocitiesBoundaryRuns++; _measureSetVelocitiesBoundaryCPUTime += watch.getCPUTime(); _measureSetVelocitiesBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary: watch.startTimer(); _gridWithSetScenarioBoundary.iterate(); watch.stopTimer(); _countSetScenarioBoundaryRuns++; _measureSetScenarioBoundaryCPUTime += watch.getCPUTime(); _measureSetScenarioBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives: watch.startTimer(); _gridWithComputeVelocitiesDerivatives.iterate(); watch.stopTimer(); _countComputeVelocitiesDerivativesRuns++; _measureComputeVelocitiesDerivativesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesDerivativesCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide: watch.startTimer(); _gridWithComputeRightHandSide.iterate(); watch.stopTimer(); _countComputeRightHandSideRuns++; _measureComputeRightHandSideCPUTime += watch.getCPUTime(); _measureComputeRightHandSideCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary: watch.startTimer(); _gridWithSetZeroPressureBoundary.iterate(); watch.stopTimer(); _countSetZeroPressureBoundaryRuns++; _measureSetZeroPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetZeroPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary: watch.startTimer(); _gridWithSetPressureBoundary.iterate(); watch.stopTimer(); _countSetPressureBoundaryRuns++; _measureSetPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSORStep: watch.startTimer(); _gridWithSORStep.iterate(); watch.stopTimer(); _countSORStepRuns++; _measureSORStepCPUTime += watch.getCPUTime(); _measureSORStepCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm: watch.startTimer(); _gridWithComputeResidualNorm.iterate(); watch.stopTimer(); _countComputeResidualNormRuns++; _measureComputeResidualNormCPUTime += watch.getCPUTime(); _measureComputeResidualNormCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeVelocities: watch.startTimer(); _gridWithComputeVelocities.iterate(); watch.stopTimer(); _countComputeVelocitiesRuns++; _measureComputeVelocitiesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;

    case FaxenBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case FaxenBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case FaxenBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToInitialize() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterInitialize); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToInitializeAndSetBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotGrid() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterPlotGrid); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToControlTimeStep() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterControlTimeStep); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToSetVelocitiesBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToSetScenarioBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeVelocitiesDerivatives() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeRightHandSide() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToSetZeroPressureBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToSetPressureBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToSORStep() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSORStep); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeResidualNorm() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeVelocities() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeVelocities); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterPlotSolution); }



 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitialize() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterInitialize; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitializeAndSetBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotGrid() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterPlotGrid; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterControlTimeStep() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterControlTimeStep; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetVelocitiesBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetScenarioBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeVelocitiesDerivatives() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeRightHandSide() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetZeroPressureBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetPressureBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSORStep() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSORStep; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeResidualNorm() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeVelocities() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeVelocities; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterPlotSolution; }



#ifdef CCA
void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "Initialize", _countInitializeRuns, _measureInitializeCPUTime, _measureInitializeCPUTime );
  writeToPort.addAdapterRuntime( "InitializeAndSetBoundary", _countInitializeAndSetBoundaryRuns, _measureInitializeAndSetBoundaryCPUTime, _measureInitializeAndSetBoundaryCPUTime );
  writeToPort.addAdapterRuntime( "PlotGrid", _countPlotGridRuns, _measurePlotGridCPUTime, _measurePlotGridCPUTime );
  writeToPort.addAdapterRuntime( "ControlTimeStep", _countControlTimeStepRuns, _measureControlTimeStepCPUTime, _measureControlTimeStepCPUTime );
  writeToPort.addAdapterRuntime( "SetVelocitiesBoundary", _countSetVelocitiesBoundaryRuns, _measureSetVelocitiesBoundaryCPUTime, _measureSetVelocitiesBoundaryCPUTime );
  writeToPort.addAdapterRuntime( "SetScenarioBoundary", _countSetScenarioBoundaryRuns, _measureSetScenarioBoundaryCPUTime, _measureSetScenarioBoundaryCPUTime );
  writeToPort.addAdapterRuntime( "ComputeVelocitiesDerivatives", _countComputeVelocitiesDerivativesRuns, _measureComputeVelocitiesDerivativesCPUTime, _measureComputeVelocitiesDerivativesCPUTime );
  writeToPort.addAdapterRuntime( "ComputeRightHandSide", _countComputeRightHandSideRuns, _measureComputeRightHandSideCPUTime, _measureComputeRightHandSideCPUTime );
  writeToPort.addAdapterRuntime( "SetZeroPressureBoundary", _countSetZeroPressureBoundaryRuns, _measureSetZeroPressureBoundaryCPUTime, _measureSetZeroPressureBoundaryCPUTime );
  writeToPort.addAdapterRuntime( "SetPressureBoundary", _countSetPressureBoundaryRuns, _measureSetPressureBoundaryCPUTime, _measureSetPressureBoundaryCPUTime );
  writeToPort.addAdapterRuntime( "SORStep", _countSORStepRuns, _measureSORStepCPUTime, _measureSORStepCPUTime );
  writeToPort.addAdapterRuntime( "ComputeResidualNorm", _countComputeResidualNormRuns, _measureComputeResidualNormCPUTime, _measureComputeResidualNormCPUTime );
  writeToPort.addAdapterRuntime( "ComputeVelocities", _countComputeVelocitiesRuns, _measureComputeVelocitiesCPUTime, _measureComputeVelocitiesCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolution", _countPlotSolutionRuns, _measurePlotSolutionCPUTime, _measurePlotSolutionCPUTime );

}
#endif


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| Initialize \t |  " << _countInitializeRuns << " \t |  " << _measureInitializeCPUTime << " \t |  " << (_countInitializeRuns==0 ? 0 : _measureInitializeCPUTime / static_cast<double>(_countInitializeRuns))  << " \t |  " << _measureInitializeCalendarTime << " \t |  " << (_countInitializeRuns==0 ? 0 : _measureInitializeCalendarTime / static_cast<double>(_countInitializeRuns))  );  
   logInfo( "logIterationStatistics()", "| InitializeAndSetBoundary \t |  " << _countInitializeAndSetBoundaryRuns << " \t |  " << _measureInitializeAndSetBoundaryCPUTime << " \t |  " << (_countInitializeAndSetBoundaryRuns==0 ? 0 : _measureInitializeAndSetBoundaryCPUTime / static_cast<double>(_countInitializeAndSetBoundaryRuns))  << " \t |  " << _measureInitializeAndSetBoundaryCalendarTime << " \t |  " << (_countInitializeAndSetBoundaryRuns==0 ? 0 : _measureInitializeAndSetBoundaryCalendarTime / static_cast<double>(_countInitializeAndSetBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotGrid \t |  " << _countPlotGridRuns << " \t |  " << _measurePlotGridCPUTime << " \t |  " << (_countPlotGridRuns==0 ? 0 : _measurePlotGridCPUTime / static_cast<double>(_countPlotGridRuns))  << " \t |  " << _measurePlotGridCalendarTime << " \t |  " << (_countPlotGridRuns==0 ? 0 : _measurePlotGridCalendarTime / static_cast<double>(_countPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| ControlTimeStep \t |  " << _countControlTimeStepRuns << " \t |  " << _measureControlTimeStepCPUTime << " \t |  " << (_countControlTimeStepRuns==0 ? 0 : _measureControlTimeStepCPUTime / static_cast<double>(_countControlTimeStepRuns))  << " \t |  " << _measureControlTimeStepCalendarTime << " \t |  " << (_countControlTimeStepRuns==0 ? 0 : _measureControlTimeStepCalendarTime / static_cast<double>(_countControlTimeStepRuns))  );  
   logInfo( "logIterationStatistics()", "| SetVelocitiesBoundary \t |  " << _countSetVelocitiesBoundaryRuns << " \t |  " << _measureSetVelocitiesBoundaryCPUTime << " \t |  " << (_countSetVelocitiesBoundaryRuns==0 ? 0 : _measureSetVelocitiesBoundaryCPUTime / static_cast<double>(_countSetVelocitiesBoundaryRuns))  << " \t |  " << _measureSetVelocitiesBoundaryCalendarTime << " \t |  " << (_countSetVelocitiesBoundaryRuns==0 ? 0 : _measureSetVelocitiesBoundaryCalendarTime / static_cast<double>(_countSetVelocitiesBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SetScenarioBoundary \t |  " << _countSetScenarioBoundaryRuns << " \t |  " << _measureSetScenarioBoundaryCPUTime << " \t |  " << (_countSetScenarioBoundaryRuns==0 ? 0 : _measureSetScenarioBoundaryCPUTime / static_cast<double>(_countSetScenarioBoundaryRuns))  << " \t |  " << _measureSetScenarioBoundaryCalendarTime << " \t |  " << (_countSetScenarioBoundaryRuns==0 ? 0 : _measureSetScenarioBoundaryCalendarTime / static_cast<double>(_countSetScenarioBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeVelocitiesDerivatives \t |  " << _countComputeVelocitiesDerivativesRuns << " \t |  " << _measureComputeVelocitiesDerivativesCPUTime << " \t |  " << (_countComputeVelocitiesDerivativesRuns==0 ? 0 : _measureComputeVelocitiesDerivativesCPUTime / static_cast<double>(_countComputeVelocitiesDerivativesRuns))  << " \t |  " << _measureComputeVelocitiesDerivativesCalendarTime << " \t |  " << (_countComputeVelocitiesDerivativesRuns==0 ? 0 : _measureComputeVelocitiesDerivativesCalendarTime / static_cast<double>(_countComputeVelocitiesDerivativesRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeRightHandSide \t |  " << _countComputeRightHandSideRuns << " \t |  " << _measureComputeRightHandSideCPUTime << " \t |  " << (_countComputeRightHandSideRuns==0 ? 0 : _measureComputeRightHandSideCPUTime / static_cast<double>(_countComputeRightHandSideRuns))  << " \t |  " << _measureComputeRightHandSideCalendarTime << " \t |  " << (_countComputeRightHandSideRuns==0 ? 0 : _measureComputeRightHandSideCalendarTime / static_cast<double>(_countComputeRightHandSideRuns))  );  
   logInfo( "logIterationStatistics()", "| SetZeroPressureBoundary \t |  " << _countSetZeroPressureBoundaryRuns << " \t |  " << _measureSetZeroPressureBoundaryCPUTime << " \t |  " << (_countSetZeroPressureBoundaryRuns==0 ? 0 : _measureSetZeroPressureBoundaryCPUTime / static_cast<double>(_countSetZeroPressureBoundaryRuns))  << " \t |  " << _measureSetZeroPressureBoundaryCalendarTime << " \t |  " << (_countSetZeroPressureBoundaryRuns==0 ? 0 : _measureSetZeroPressureBoundaryCalendarTime / static_cast<double>(_countSetZeroPressureBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SetPressureBoundary \t |  " << _countSetPressureBoundaryRuns << " \t |  " << _measureSetPressureBoundaryCPUTime << " \t |  " << (_countSetPressureBoundaryRuns==0 ? 0 : _measureSetPressureBoundaryCPUTime / static_cast<double>(_countSetPressureBoundaryRuns))  << " \t |  " << _measureSetPressureBoundaryCalendarTime << " \t |  " << (_countSetPressureBoundaryRuns==0 ? 0 : _measureSetPressureBoundaryCalendarTime / static_cast<double>(_countSetPressureBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SORStep \t |  " << _countSORStepRuns << " \t |  " << _measureSORStepCPUTime << " \t |  " << (_countSORStepRuns==0 ? 0 : _measureSORStepCPUTime / static_cast<double>(_countSORStepRuns))  << " \t |  " << _measureSORStepCalendarTime << " \t |  " << (_countSORStepRuns==0 ? 0 : _measureSORStepCalendarTime / static_cast<double>(_countSORStepRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeResidualNorm \t |  " << _countComputeResidualNormRuns << " \t |  " << _measureComputeResidualNormCPUTime << " \t |  " << (_countComputeResidualNormRuns==0 ? 0 : _measureComputeResidualNormCPUTime / static_cast<double>(_countComputeResidualNormRuns))  << " \t |  " << _measureComputeResidualNormCalendarTime << " \t |  " << (_countComputeResidualNormRuns==0 ? 0 : _measureComputeResidualNormCalendarTime / static_cast<double>(_countComputeResidualNormRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeVelocities \t |  " << _countComputeVelocitiesRuns << " \t |  " << _measureComputeVelocitiesCPUTime << " \t |  " << (_countComputeVelocitiesRuns==0 ? 0 : _measureComputeVelocitiesCPUTime / static_cast<double>(_countComputeVelocitiesRuns))  << " \t |  " << _measureComputeVelocitiesCalendarTime << " \t |  " << (_countComputeVelocitiesRuns==0 ? 0 : _measureComputeVelocitiesCalendarTime / static_cast<double>(_countComputeVelocitiesRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>* peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>();
} 


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != FaxenBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=FaxenBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
