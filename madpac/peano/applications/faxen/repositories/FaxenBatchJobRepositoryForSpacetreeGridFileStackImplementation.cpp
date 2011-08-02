#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::_log( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation" );


peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  int                                          blockSize,
  int                                          numberOfBlocks,
  int                                          minFillThreshold,
  int                                          maxFillThreshold,
  const std::string&                           tempFilePrefix    
):
  _geometry(geometry),
  _cellStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _vertexStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _solverState(),
  _gridWithInitialize(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithInitializeAndSetBoundary(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithPlotGrid(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithControlTimeStep(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithSetVelocitiesBoundary(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithSetScenarioBoundary(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithComputeVelocitiesDerivatives(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithComputeRightHandSide(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithSetZeroPressureBoundary(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithSetPressureBoundary(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithSORStep(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithComputeResidualNorm(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithComputeVelocities(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),

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

  _repositoryState() {
  logTraceIn( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
  
  _repositoryState.setAction( FaxenBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(14);
  
  logTraceOut( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
}



peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(
  peano::geometry::Geometry&                   geometry,
  int                                          blockSize,
  int                                          numberOfBlocks,
  int                                          minFillThreshold,
  int                                          maxFillThreshold,
  const std::string&                           tempFilePrefix    
):
  _geometry(geometry),
  _cellStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _vertexStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _solverState(),
  _gridWithInitialize(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithInitializeAndSetBoundary(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotGrid(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithControlTimeStep(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetVelocitiesBoundary(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetScenarioBoundary(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithComputeVelocitiesDerivatives(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithComputeRightHandSide(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetZeroPressureBoundary(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetPressureBoundary(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSORStep(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithComputeResidualNorm(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithComputeVelocities(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState),

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

  _repositoryState() {
  logTraceIn( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );

  _repositoryState.setAction( FaxenBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(14);

  logTraceOut( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );
}
    
   
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::~FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation() {
  assertion( _repositoryState.getAction() == FaxenBatchJobRepositoryState::Terminate );
}


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
  const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  int                                          domainLevel
) {
  logTraceInWith2Arguments( "restart(...)", evenFlags, traversalOrderOfNeighbours );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == FaxenBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithInitialize.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithInitializeAndSetBoundary.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotGrid.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithControlTimeStep.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetVelocitiesBoundary.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetScenarioBoundary.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithComputeVelocitiesDerivatives.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithComputeRightHandSide.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetZeroPressureBoundary.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetPressureBoundary.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSORStep.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithComputeResidualNorm.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithComputeVelocities.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotSolution.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::terminate() {
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


peano::applications::faxen::SpacetreeGridState& peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::getState() {
  return _solverState;
}

    
void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation", "iterate()", false);
  
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
    case FaxenBatchJobRepositoryState::UseAdapterInitialize: watch.startTimer(); _gridWithInitialize.iterate(_solverState); watch.stopTimer(); _countInitializeRuns++; _measureInitializeCPUTime += watch.getCPUTime(); _measureInitializeCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary: watch.startTimer(); _gridWithInitializeAndSetBoundary.iterate(_solverState); watch.stopTimer(); _countInitializeAndSetBoundaryRuns++; _measureInitializeAndSetBoundaryCPUTime += watch.getCPUTime(); _measureInitializeAndSetBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterPlotGrid: watch.startTimer(); _gridWithPlotGrid.iterate(_solverState); watch.stopTimer(); _countPlotGridRuns++; _measurePlotGridCPUTime += watch.getCPUTime(); _measurePlotGridCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterControlTimeStep: watch.startTimer(); _gridWithControlTimeStep.iterate(_solverState); watch.stopTimer(); _countControlTimeStepRuns++; _measureControlTimeStepCPUTime += watch.getCPUTime(); _measureControlTimeStepCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary: watch.startTimer(); _gridWithSetVelocitiesBoundary.iterate(_solverState); watch.stopTimer(); _countSetVelocitiesBoundaryRuns++; _measureSetVelocitiesBoundaryCPUTime += watch.getCPUTime(); _measureSetVelocitiesBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary: watch.startTimer(); _gridWithSetScenarioBoundary.iterate(_solverState); watch.stopTimer(); _countSetScenarioBoundaryRuns++; _measureSetScenarioBoundaryCPUTime += watch.getCPUTime(); _measureSetScenarioBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives: watch.startTimer(); _gridWithComputeVelocitiesDerivatives.iterate(_solverState); watch.stopTimer(); _countComputeVelocitiesDerivativesRuns++; _measureComputeVelocitiesDerivativesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesDerivativesCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide: watch.startTimer(); _gridWithComputeRightHandSide.iterate(_solverState); watch.stopTimer(); _countComputeRightHandSideRuns++; _measureComputeRightHandSideCPUTime += watch.getCPUTime(); _measureComputeRightHandSideCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary: watch.startTimer(); _gridWithSetZeroPressureBoundary.iterate(_solverState); watch.stopTimer(); _countSetZeroPressureBoundaryRuns++; _measureSetZeroPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetZeroPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary: watch.startTimer(); _gridWithSetPressureBoundary.iterate(_solverState); watch.stopTimer(); _countSetPressureBoundaryRuns++; _measureSetPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterSORStep: watch.startTimer(); _gridWithSORStep.iterate(_solverState); watch.stopTimer(); _countSORStepRuns++; _measureSORStepCPUTime += watch.getCPUTime(); _measureSORStepCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm: watch.startTimer(); _gridWithComputeResidualNorm.iterate(_solverState); watch.stopTimer(); _countComputeResidualNormRuns++; _measureComputeResidualNormCPUTime += watch.getCPUTime(); _measureComputeResidualNormCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterComputeVelocities: watch.startTimer(); _gridWithComputeVelocities.iterate(_solverState); watch.stopTimer(); _countComputeVelocitiesRuns++; _measureComputeVelocitiesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesCalendarTime += watch.getCalendarTime(); break;
    case FaxenBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(_solverState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;

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


 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToInitialize() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterInitialize); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToInitializeAndSetBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToPlotGrid() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterPlotGrid); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToControlTimeStep() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterControlTimeStep); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSetVelocitiesBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSetScenarioBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToComputeVelocitiesDerivatives() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToComputeRightHandSide() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSetZeroPressureBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSetPressureBoundary() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSORStep() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterSORStep); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToComputeResidualNorm() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToComputeVelocities() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterComputeVelocities); }
 void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToPlotSolution() { _repositoryState.setAction(FaxenBatchJobRepositoryState::UseAdapterPlotSolution); }



 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterInitialize() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterInitialize; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterInitializeAndSetBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterPlotGrid() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterPlotGrid; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterControlTimeStep() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterControlTimeStep; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSetVelocitiesBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSetScenarioBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetScenarioBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterComputeVelocitiesDerivatives() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterComputeRightHandSide() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeRightHandSide; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSetZeroPressureBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSetPressureBoundary() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSetPressureBoundary; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSORStep() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterSORStep; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterComputeResidualNorm() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeResidualNorm; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterComputeVelocities() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterComputeVelocities; }
 bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == FaxenBatchJobRepositoryState::UseAdapterPlotSolution; }



#ifdef CCA
void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
   logInfo( "logIterationStatistics()", "| Initialize \t |  " << _countInitializeRuns << " \t |  " << _measureInitializeCPUTime << " \t |  " << _measureInitializeCPUTime / static_cast<double>(_countInitializeRuns)  << " \t |  " << _measureInitializeCalendarTime << " \t |  " << (_countInitializeRuns==0 ? 0 : _measureInitializeCalendarTime / static_cast<double>(_countInitializeRuns))  );  
   logInfo( "logIterationStatistics()", "| InitializeAndSetBoundary \t |  " << _countInitializeAndSetBoundaryRuns << " \t |  " << _measureInitializeAndSetBoundaryCPUTime << " \t |  " << _measureInitializeAndSetBoundaryCPUTime / static_cast<double>(_countInitializeAndSetBoundaryRuns)  << " \t |  " << _measureInitializeAndSetBoundaryCalendarTime << " \t |  " << (_countInitializeAndSetBoundaryRuns==0 ? 0 : _measureInitializeAndSetBoundaryCalendarTime / static_cast<double>(_countInitializeAndSetBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotGrid \t |  " << _countPlotGridRuns << " \t |  " << _measurePlotGridCPUTime << " \t |  " << _measurePlotGridCPUTime / static_cast<double>(_countPlotGridRuns)  << " \t |  " << _measurePlotGridCalendarTime << " \t |  " << (_countPlotGridRuns==0 ? 0 : _measurePlotGridCalendarTime / static_cast<double>(_countPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| ControlTimeStep \t |  " << _countControlTimeStepRuns << " \t |  " << _measureControlTimeStepCPUTime << " \t |  " << _measureControlTimeStepCPUTime / static_cast<double>(_countControlTimeStepRuns)  << " \t |  " << _measureControlTimeStepCalendarTime << " \t |  " << (_countControlTimeStepRuns==0 ? 0 : _measureControlTimeStepCalendarTime / static_cast<double>(_countControlTimeStepRuns))  );  
   logInfo( "logIterationStatistics()", "| SetVelocitiesBoundary \t |  " << _countSetVelocitiesBoundaryRuns << " \t |  " << _measureSetVelocitiesBoundaryCPUTime << " \t |  " << _measureSetVelocitiesBoundaryCPUTime / static_cast<double>(_countSetVelocitiesBoundaryRuns)  << " \t |  " << _measureSetVelocitiesBoundaryCalendarTime << " \t |  " << (_countSetVelocitiesBoundaryRuns==0 ? 0 : _measureSetVelocitiesBoundaryCalendarTime / static_cast<double>(_countSetVelocitiesBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SetScenarioBoundary \t |  " << _countSetScenarioBoundaryRuns << " \t |  " << _measureSetScenarioBoundaryCPUTime << " \t |  " << _measureSetScenarioBoundaryCPUTime / static_cast<double>(_countSetScenarioBoundaryRuns)  << " \t |  " << _measureSetScenarioBoundaryCalendarTime << " \t |  " << (_countSetScenarioBoundaryRuns==0 ? 0 : _measureSetScenarioBoundaryCalendarTime / static_cast<double>(_countSetScenarioBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeVelocitiesDerivatives \t |  " << _countComputeVelocitiesDerivativesRuns << " \t |  " << _measureComputeVelocitiesDerivativesCPUTime << " \t |  " << _measureComputeVelocitiesDerivativesCPUTime / static_cast<double>(_countComputeVelocitiesDerivativesRuns)  << " \t |  " << _measureComputeVelocitiesDerivativesCalendarTime << " \t |  " << (_countComputeVelocitiesDerivativesRuns==0 ? 0 : _measureComputeVelocitiesDerivativesCalendarTime / static_cast<double>(_countComputeVelocitiesDerivativesRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeRightHandSide \t |  " << _countComputeRightHandSideRuns << " \t |  " << _measureComputeRightHandSideCPUTime << " \t |  " << _measureComputeRightHandSideCPUTime / static_cast<double>(_countComputeRightHandSideRuns)  << " \t |  " << _measureComputeRightHandSideCalendarTime << " \t |  " << (_countComputeRightHandSideRuns==0 ? 0 : _measureComputeRightHandSideCalendarTime / static_cast<double>(_countComputeRightHandSideRuns))  );  
   logInfo( "logIterationStatistics()", "| SetZeroPressureBoundary \t |  " << _countSetZeroPressureBoundaryRuns << " \t |  " << _measureSetZeroPressureBoundaryCPUTime << " \t |  " << _measureSetZeroPressureBoundaryCPUTime / static_cast<double>(_countSetZeroPressureBoundaryRuns)  << " \t |  " << _measureSetZeroPressureBoundaryCalendarTime << " \t |  " << (_countSetZeroPressureBoundaryRuns==0 ? 0 : _measureSetZeroPressureBoundaryCalendarTime / static_cast<double>(_countSetZeroPressureBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SetPressureBoundary \t |  " << _countSetPressureBoundaryRuns << " \t |  " << _measureSetPressureBoundaryCPUTime << " \t |  " << _measureSetPressureBoundaryCPUTime / static_cast<double>(_countSetPressureBoundaryRuns)  << " \t |  " << _measureSetPressureBoundaryCalendarTime << " \t |  " << (_countSetPressureBoundaryRuns==0 ? 0 : _measureSetPressureBoundaryCalendarTime / static_cast<double>(_countSetPressureBoundaryRuns))  );  
   logInfo( "logIterationStatistics()", "| SORStep \t |  " << _countSORStepRuns << " \t |  " << _measureSORStepCPUTime << " \t |  " << _measureSORStepCPUTime / static_cast<double>(_countSORStepRuns)  << " \t |  " << _measureSORStepCalendarTime << " \t |  " << (_countSORStepRuns==0 ? 0 : _measureSORStepCalendarTime / static_cast<double>(_countSORStepRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeResidualNorm \t |  " << _countComputeResidualNormRuns << " \t |  " << _measureComputeResidualNormCPUTime << " \t |  " << _measureComputeResidualNormCPUTime / static_cast<double>(_countComputeResidualNormRuns)  << " \t |  " << _measureComputeResidualNormCalendarTime << " \t |  " << (_countComputeResidualNormRuns==0 ? 0 : _measureComputeResidualNormCalendarTime / static_cast<double>(_countComputeResidualNormRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeVelocities \t |  " << _countComputeVelocitiesRuns << " \t |  " << _measureComputeVelocitiesCPUTime << " \t |  " << _measureComputeVelocitiesCPUTime / static_cast<double>(_countComputeVelocitiesRuns)  << " \t |  " << _measureComputeVelocitiesCalendarTime << " \t |  " << (_countComputeVelocitiesRuns==0 ? 0 : _measureComputeVelocitiesCalendarTime / static_cast<double>(_countComputeVelocitiesRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns)  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  

}
#endif


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics() const {
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


peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell>* peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell>();
} 


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation::continueToIterate() {
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
