#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::LBFBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::LBFBatchJobRepositoryForRegularGridStandardImplementation(
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
  _gridWithMoveParticles(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSwitchFromLB2NSE(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithExtractDataNSE2LB(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithCorrectDensityAndComputeEqPDF4LB(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithInitialiseSpacetreeGridAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithBlockCCAOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithBlockVTKOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithTraceNSEData(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithTraceLBData(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

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
  _countMoveParticlesRuns(0),
  _countSwitchFromLB2NSERuns(0),
  _countExtractDataNSE2LBRuns(0),
  _countCorrectDensityAndComputeEqPDF4LBRuns(0),
  _countRegularBlockSolverAdapterRuns(0),
  _countInitialiseSpacetreeGridAdapterRuns(0),
  _countBlockCCAOutputAdapterRuns(0),
  _countDynamicRefinementForSpacetreeGridAdapterRuns(0),
  _countBlockVTKOutputAdapterRuns(0),
  _countRegularBlockSolverAndVTKOutputAdapterRuns(0),
  _countTraceNSEDataRuns(0),
  _countTraceLBDataRuns(0),

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
  _measureMoveParticlesCPUTime(0.0),
  _measureSwitchFromLB2NSECPUTime(0.0),
  _measureExtractDataNSE2LBCPUTime(0.0),
  _measureCorrectDensityAndComputeEqPDF4LBCPUTime(0.0),
  _measureRegularBlockSolverAdapterCPUTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockCCAOutputAdapterCPUTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockVTKOutputAdapterCPUTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCPUTime(0.0),
  _measureTraceNSEDataCPUTime(0.0),
  _measureTraceLBDataCPUTime(0.0),

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
  _measureMoveParticlesCalendarTime(0.0),
  _measureSwitchFromLB2NSECalendarTime(0.0),
  _measureExtractDataNSE2LBCalendarTime(0.0),
  _measureCorrectDensityAndComputeEqPDF4LBCalendarTime(0.0),
  _measureRegularBlockSolverAdapterCalendarTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockCCAOutputAdapterCalendarTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockVTKOutputAdapterCalendarTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime(0.0),
  _measureTraceNSEDataCalendarTime(0.0),
  _measureTraceLBDataCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( LBFBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(26 +3 );
  
  logTraceOut( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::LBFBatchJobRepositoryForRegularGridStandardImplementation(
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
  _gridWithMoveParticles(_gridContainer,_geometry, _solverState),
  _gridWithSwitchFromLB2NSE(_gridContainer,_geometry, _solverState),
  _gridWithExtractDataNSE2LB(_gridContainer,_geometry, _solverState),
  _gridWithCorrectDensityAndComputeEqPDF4LB(_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAdapter(_gridContainer,_geometry, _solverState),
  _gridWithInitialiseSpacetreeGridAdapter(_gridContainer,_geometry, _solverState),
  _gridWithBlockCCAOutputAdapter(_gridContainer,_geometry, _solverState),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(_gridContainer,_geometry, _solverState),
  _gridWithBlockVTKOutputAdapter(_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(_gridContainer,_geometry, _solverState),
  _gridWithTraceNSEData(_gridContainer,_geometry, _solverState),
  _gridWithTraceLBData(_gridContainer,_geometry, _solverState),

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
  _countMoveParticlesRuns(0),
  _countSwitchFromLB2NSERuns(0),
  _countExtractDataNSE2LBRuns(0),
  _countCorrectDensityAndComputeEqPDF4LBRuns(0),
  _countRegularBlockSolverAdapterRuns(0),
  _countInitialiseSpacetreeGridAdapterRuns(0),
  _countBlockCCAOutputAdapterRuns(0),
  _countDynamicRefinementForSpacetreeGridAdapterRuns(0),
  _countBlockVTKOutputAdapterRuns(0),
  _countRegularBlockSolverAndVTKOutputAdapterRuns(0),
  _countTraceNSEDataRuns(0),
  _countTraceLBDataRuns(0),

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
  _measureMoveParticlesCPUTime(0.0),
  _measureSwitchFromLB2NSECPUTime(0.0),
  _measureExtractDataNSE2LBCPUTime(0.0),
  _measureCorrectDensityAndComputeEqPDF4LBCPUTime(0.0),
  _measureRegularBlockSolverAdapterCPUTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockCCAOutputAdapterCPUTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockVTKOutputAdapterCPUTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCPUTime(0.0),
  _measureTraceNSEDataCPUTime(0.0),
  _measureTraceLBDataCPUTime(0.0),

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
  _measureMoveParticlesCalendarTime(0.0),
  _measureSwitchFromLB2NSECalendarTime(0.0),
  _measureExtractDataNSE2LBCalendarTime(0.0),
  _measureCorrectDensityAndComputeEqPDF4LBCalendarTime(0.0),
  _measureRegularBlockSolverAdapterCalendarTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockCCAOutputAdapterCalendarTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockVTKOutputAdapterCalendarTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime(0.0),
  _measureTraceNSEDataCalendarTime(0.0),
  _measureTraceLBDataCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( LBFBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(26 +3 );
  
  logTraceOut( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::~LBFBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == LBFBatchJobRepositoryState::Terminate );
}


void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == LBFBatchJobRepositoryState::Terminate );

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
  _gridWithMoveParticles.restart(domainSize,computationalDomainOffset);
  _gridWithSwitchFromLB2NSE.restart(domainSize,computationalDomainOffset);
  _gridWithExtractDataNSE2LB.restart(domainSize,computationalDomainOffset);
  _gridWithCorrectDensityAndComputeEqPDF4LB.restart(domainSize,computationalDomainOffset);
  _gridWithRegularBlockSolverAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithInitialiseSpacetreeGridAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithBlockCCAOutputAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithDynamicRefinementForSpacetreeGridAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithBlockVTKOutputAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithRegularBlockSolverAndVTKOutputAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithTraceNSEData.restart(domainSize,computationalDomainOffset);
  _gridWithTraceLBData.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( LBFBatchJobRepositoryState::Terminate );
  
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
  _gridWithMoveParticles.terminate();
  _gridWithSwitchFromLB2NSE.terminate();
  _gridWithExtractDataNSE2LB.terminate();
  _gridWithCorrectDensityAndComputeEqPDF4LB.terminate();
  _gridWithRegularBlockSolverAdapter.terminate();
  _gridWithInitialiseSpacetreeGridAdapter.terminate();
  _gridWithBlockCCAOutputAdapter.terminate();
  _gridWithDynamicRefinementForSpacetreeGridAdapter.terminate();
  _gridWithBlockVTKOutputAdapter.terminate();
  _gridWithRegularBlockSolverAndVTKOutputAdapter.terminate();
  _gridWithTraceNSEData.terminate();
  _gridWithTraceLBData.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::faxen::lbf::BlockState& peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::faxen::lbf::RegularGridBlockState& peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}

void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
  _repositoryState.setReduceState(reduceState);
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
    case LBFBatchJobRepositoryState::UseAdapterInitialize: watch.startTimer(); _gridWithInitialize.iterate(reduceState); watch.stopTimer(); _countInitializeRuns++; _measureInitializeCPUTime += watch.getCPUTime(); _measureInitializeCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary: watch.startTimer(); _gridWithInitializeAndSetBoundary.iterate(reduceState); watch.stopTimer(); _countInitializeAndSetBoundaryRuns++; _measureInitializeAndSetBoundaryCPUTime += watch.getCPUTime(); _measureInitializeAndSetBoundaryCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterPlotGrid: watch.startTimer(); _gridWithPlotGrid.iterate(reduceState); watch.stopTimer(); _countPlotGridRuns++; _measurePlotGridCPUTime += watch.getCPUTime(); _measurePlotGridCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterControlTimeStep: watch.startTimer(); _gridWithControlTimeStep.iterate(reduceState); watch.stopTimer(); _countControlTimeStepRuns++; _measureControlTimeStepCPUTime += watch.getCPUTime(); _measureControlTimeStepCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary: watch.startTimer(); _gridWithSetVelocitiesBoundary.iterate(reduceState); watch.stopTimer(); _countSetVelocitiesBoundaryRuns++; _measureSetVelocitiesBoundaryCPUTime += watch.getCPUTime(); _measureSetVelocitiesBoundaryCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSetScenarioBoundary: watch.startTimer(); _gridWithSetScenarioBoundary.iterate(reduceState); watch.stopTimer(); _countSetScenarioBoundaryRuns++; _measureSetScenarioBoundaryCPUTime += watch.getCPUTime(); _measureSetScenarioBoundaryCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives: watch.startTimer(); _gridWithComputeVelocitiesDerivatives.iterate(reduceState); watch.stopTimer(); _countComputeVelocitiesDerivativesRuns++; _measureComputeVelocitiesDerivativesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesDerivativesCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterComputeRightHandSide: watch.startTimer(); _gridWithComputeRightHandSide.iterate(reduceState); watch.stopTimer(); _countComputeRightHandSideRuns++; _measureComputeRightHandSideCPUTime += watch.getCPUTime(); _measureComputeRightHandSideCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary: watch.startTimer(); _gridWithSetZeroPressureBoundary.iterate(reduceState); watch.stopTimer(); _countSetZeroPressureBoundaryRuns++; _measureSetZeroPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetZeroPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSetPressureBoundary: watch.startTimer(); _gridWithSetPressureBoundary.iterate(reduceState); watch.stopTimer(); _countSetPressureBoundaryRuns++; _measureSetPressureBoundaryCPUTime += watch.getCPUTime(); _measureSetPressureBoundaryCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSORStep: watch.startTimer(); _gridWithSORStep.iterate(reduceState); watch.stopTimer(); _countSORStepRuns++; _measureSORStepCPUTime += watch.getCPUTime(); _measureSORStepCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterComputeResidualNorm: watch.startTimer(); _gridWithComputeResidualNorm.iterate(reduceState); watch.stopTimer(); _countComputeResidualNormRuns++; _measureComputeResidualNormCPUTime += watch.getCPUTime(); _measureComputeResidualNormCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterComputeVelocities: watch.startTimer(); _gridWithComputeVelocities.iterate(reduceState); watch.stopTimer(); _countComputeVelocitiesRuns++; _measureComputeVelocitiesCPUTime += watch.getCPUTime(); _measureComputeVelocitiesCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(reduceState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterMoveParticles: watch.startTimer(); _gridWithMoveParticles.iterate(reduceState); watch.stopTimer(); _countMoveParticlesRuns++; _measureMoveParticlesCPUTime += watch.getCPUTime(); _measureMoveParticlesCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterSwitchFromLB2NSE: watch.startTimer(); _gridWithSwitchFromLB2NSE.iterate(reduceState); watch.stopTimer(); _countSwitchFromLB2NSERuns++; _measureSwitchFromLB2NSECPUTime += watch.getCPUTime(); _measureSwitchFromLB2NSECalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterExtractDataNSE2LB: watch.startTimer(); _gridWithExtractDataNSE2LB.iterate(reduceState); watch.stopTimer(); _countExtractDataNSE2LBRuns++; _measureExtractDataNSE2LBCPUTime += watch.getCPUTime(); _measureExtractDataNSE2LBCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterCorrectDensityAndComputeEqPDF4LB: watch.startTimer(); _gridWithCorrectDensityAndComputeEqPDF4LB.iterate(reduceState); watch.stopTimer(); _countCorrectDensityAndComputeEqPDF4LBRuns++; _measureCorrectDensityAndComputeEqPDF4LBCPUTime += watch.getCPUTime(); _measureCorrectDensityAndComputeEqPDF4LBCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter: watch.startTimer(); _gridWithRegularBlockSolverAdapter.iterate(reduceState); watch.stopTimer(); _countRegularBlockSolverAdapterRuns++; _measureRegularBlockSolverAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter: watch.startTimer(); _gridWithInitialiseSpacetreeGridAdapter.iterate(reduceState); watch.stopTimer(); _countInitialiseSpacetreeGridAdapterRuns++; _measureInitialiseSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureInitialiseSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter: watch.startTimer(); _gridWithBlockCCAOutputAdapter.iterate(reduceState); watch.stopTimer(); _countBlockCCAOutputAdapterRuns++; _measureBlockCCAOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockCCAOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter: watch.startTimer(); _gridWithDynamicRefinementForSpacetreeGridAdapter.iterate(reduceState); watch.stopTimer(); _countDynamicRefinementForSpacetreeGridAdapterRuns++; _measureDynamicRefinementForSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter: watch.startTimer(); _gridWithBlockVTKOutputAdapter.iterate(reduceState); watch.stopTimer(); _countBlockVTKOutputAdapterRuns++; _measureBlockVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter: watch.startTimer(); _gridWithRegularBlockSolverAndVTKOutputAdapter.iterate(reduceState); watch.stopTimer(); _countRegularBlockSolverAndVTKOutputAdapterRuns++; _measureRegularBlockSolverAndVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterTraceNSEData: watch.startTimer(); _gridWithTraceNSEData.iterate(reduceState); watch.stopTimer(); _countTraceNSEDataRuns++; _measureTraceNSEDataCPUTime += watch.getCPUTime(); _measureTraceNSEDataCalendarTime += watch.getCalendarTime(); break;
    case LBFBatchJobRepositoryState::UseAdapterTraceLBData: watch.startTimer(); _gridWithTraceLBData.iterate(reduceState); watch.stopTimer(); _countTraceLBDataRuns++; _measureTraceLBDataCPUTime += watch.getCPUTime(); _measureTraceLBDataCalendarTime += watch.getCalendarTime(); break;

    case LBFBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case LBFBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case LBFBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToInitialize() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterInitialize); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToInitializeAndSetBoundary() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotGrid() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterPlotGrid); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToControlTimeStep() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterControlTimeStep); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSetVelocitiesBoundary() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSetScenarioBoundary() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSetScenarioBoundary); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeVelocitiesDerivatives() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeRightHandSide() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterComputeRightHandSide); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSetZeroPressureBoundary() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSetPressureBoundary() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSetPressureBoundary); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSORStep() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSORStep); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeResidualNorm() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterComputeResidualNorm); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeVelocities() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterComputeVelocities); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterPlotSolution); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToMoveParticles() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterMoveParticles); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToSwitchFromLB2NSE() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterSwitchFromLB2NSE); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToExtractDataNSE2LB() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterExtractDataNSE2LB); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToCorrectDensityAndComputeEqPDF4LB() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterCorrectDensityAndComputeEqPDF4LB); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToRegularBlockSolverAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToInitialiseSpacetreeGridAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToBlockCCAOutputAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToDynamicRefinementForSpacetreeGridAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToBlockVTKOutputAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToRegularBlockSolverAndVTKOutputAdapter() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToTraceNSEData() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterTraceNSEData); }
 void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::switchToTraceLBData() { _repositoryState.setAction(LBFBatchJobRepositoryState::UseAdapterTraceLBData); }



 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitialize() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterInitialize; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitializeAndSetBoundary() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterInitializeAndSetBoundary; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotGrid() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterPlotGrid; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterControlTimeStep() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterControlTimeStep; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetVelocitiesBoundary() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSetVelocitiesBoundary; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetScenarioBoundary() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSetScenarioBoundary; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeVelocitiesDerivatives() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterComputeVelocitiesDerivatives; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeRightHandSide() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterComputeRightHandSide; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetZeroPressureBoundary() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSetZeroPressureBoundary; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetPressureBoundary() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSetPressureBoundary; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSORStep() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSORStep; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeResidualNorm() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterComputeResidualNorm; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeVelocities() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterComputeVelocities; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterPlotSolution; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterMoveParticles() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterMoveParticles; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSwitchFromLB2NSE() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterSwitchFromLB2NSE; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterExtractDataNSE2LB() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterExtractDataNSE2LB; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterCorrectDensityAndComputeEqPDF4LB() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterCorrectDensityAndComputeEqPDF4LB; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterRegularBlockSolverAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitialiseSpacetreeGridAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterBlockCCAOutputAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterBlockVTKOutputAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterTraceNSEData() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterTraceNSEData; }
 bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterTraceLBData() const { return _repositoryState.getAction() == LBFBatchJobRepositoryState::UseAdapterTraceLBData; }



#ifdef CCA
void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
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
  writeToPort.addAdapterRuntime( "MoveParticles", _countMoveParticlesRuns, _measureMoveParticlesCPUTime, _measureMoveParticlesCPUTime );
  writeToPort.addAdapterRuntime( "SwitchFromLB2NSE", _countSwitchFromLB2NSERuns, _measureSwitchFromLB2NSECPUTime, _measureSwitchFromLB2NSECPUTime );
  writeToPort.addAdapterRuntime( "ExtractDataNSE2LB", _countExtractDataNSE2LBRuns, _measureExtractDataNSE2LBCPUTime, _measureExtractDataNSE2LBCPUTime );
  writeToPort.addAdapterRuntime( "CorrectDensityAndComputeEqPDF4LB", _countCorrectDensityAndComputeEqPDF4LBRuns, _measureCorrectDensityAndComputeEqPDF4LBCPUTime, _measureCorrectDensityAndComputeEqPDF4LBCPUTime );
  writeToPort.addAdapterRuntime( "RegularBlockSolverAdapter", _countRegularBlockSolverAdapterRuns, _measureRegularBlockSolverAdapterCPUTime, _measureRegularBlockSolverAdapterCPUTime );
  writeToPort.addAdapterRuntime( "InitialiseSpacetreeGridAdapter", _countInitialiseSpacetreeGridAdapterRuns, _measureInitialiseSpacetreeGridAdapterCPUTime, _measureInitialiseSpacetreeGridAdapterCPUTime );
  writeToPort.addAdapterRuntime( "BlockCCAOutputAdapter", _countBlockCCAOutputAdapterRuns, _measureBlockCCAOutputAdapterCPUTime, _measureBlockCCAOutputAdapterCPUTime );
  writeToPort.addAdapterRuntime( "DynamicRefinementForSpacetreeGridAdapter", _countDynamicRefinementForSpacetreeGridAdapterRuns, _measureDynamicRefinementForSpacetreeGridAdapterCPUTime, _measureDynamicRefinementForSpacetreeGridAdapterCPUTime );
  writeToPort.addAdapterRuntime( "BlockVTKOutputAdapter", _countBlockVTKOutputAdapterRuns, _measureBlockVTKOutputAdapterCPUTime, _measureBlockVTKOutputAdapterCPUTime );
  writeToPort.addAdapterRuntime( "RegularBlockSolverAndVTKOutputAdapter", _countRegularBlockSolverAndVTKOutputAdapterRuns, _measureRegularBlockSolverAndVTKOutputAdapterCPUTime, _measureRegularBlockSolverAndVTKOutputAdapterCPUTime );
  writeToPort.addAdapterRuntime( "TraceNSEData", _countTraceNSEDataRuns, _measureTraceNSEDataCPUTime, _measureTraceNSEDataCPUTime );
  writeToPort.addAdapterRuntime( "TraceLBData", _countTraceLBDataRuns, _measureTraceLBDataCPUTime, _measureTraceLBDataCPUTime );

}
#endif


void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
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
   logInfo( "logIterationStatistics()", "| MoveParticles \t |  " << _countMoveParticlesRuns << " \t |  " << _measureMoveParticlesCPUTime << " \t |  " << (_countMoveParticlesRuns==0 ? 0 : _measureMoveParticlesCPUTime / static_cast<double>(_countMoveParticlesRuns))  << " \t |  " << _measureMoveParticlesCalendarTime << " \t |  " << (_countMoveParticlesRuns==0 ? 0 : _measureMoveParticlesCalendarTime / static_cast<double>(_countMoveParticlesRuns))  );  
   logInfo( "logIterationStatistics()", "| SwitchFromLB2NSE \t |  " << _countSwitchFromLB2NSERuns << " \t |  " << _measureSwitchFromLB2NSECPUTime << " \t |  " << (_countSwitchFromLB2NSERuns==0 ? 0 : _measureSwitchFromLB2NSECPUTime / static_cast<double>(_countSwitchFromLB2NSERuns))  << " \t |  " << _measureSwitchFromLB2NSECalendarTime << " \t |  " << (_countSwitchFromLB2NSERuns==0 ? 0 : _measureSwitchFromLB2NSECalendarTime / static_cast<double>(_countSwitchFromLB2NSERuns))  );  
   logInfo( "logIterationStatistics()", "| ExtractDataNSE2LB \t |  " << _countExtractDataNSE2LBRuns << " \t |  " << _measureExtractDataNSE2LBCPUTime << " \t |  " << (_countExtractDataNSE2LBRuns==0 ? 0 : _measureExtractDataNSE2LBCPUTime / static_cast<double>(_countExtractDataNSE2LBRuns))  << " \t |  " << _measureExtractDataNSE2LBCalendarTime << " \t |  " << (_countExtractDataNSE2LBRuns==0 ? 0 : _measureExtractDataNSE2LBCalendarTime / static_cast<double>(_countExtractDataNSE2LBRuns))  );  
   logInfo( "logIterationStatistics()", "| CorrectDensityAndComputeEqPDF4LB \t |  " << _countCorrectDensityAndComputeEqPDF4LBRuns << " \t |  " << _measureCorrectDensityAndComputeEqPDF4LBCPUTime << " \t |  " << (_countCorrectDensityAndComputeEqPDF4LBRuns==0 ? 0 : _measureCorrectDensityAndComputeEqPDF4LBCPUTime / static_cast<double>(_countCorrectDensityAndComputeEqPDF4LBRuns))  << " \t |  " << _measureCorrectDensityAndComputeEqPDF4LBCalendarTime << " \t |  " << (_countCorrectDensityAndComputeEqPDF4LBRuns==0 ? 0 : _measureCorrectDensityAndComputeEqPDF4LBCalendarTime / static_cast<double>(_countCorrectDensityAndComputeEqPDF4LBRuns))  );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAdapter \t |  " << _countRegularBlockSolverAdapterRuns << " \t |  " << _measureRegularBlockSolverAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| InitialiseSpacetreeGridAdapter \t |  " << _countInitialiseSpacetreeGridAdapterRuns << " \t |  " << _measureInitialiseSpacetreeGridAdapterCPUTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCPUTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  << " \t |  " << _measureInitialiseSpacetreeGridAdapterCalendarTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCalendarTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockCCAOutputAdapter \t |  " << _countBlockCCAOutputAdapterRuns << " \t |  " << _measureBlockCCAOutputAdapterCPUTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCPUTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  << " \t |  " << _measureBlockCCAOutputAdapterCalendarTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCalendarTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| DynamicRefinementForSpacetreeGridAdapter \t |  " << _countDynamicRefinementForSpacetreeGridAdapterRuns << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCPUTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCPUTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockVTKOutputAdapter \t |  " << _countBlockVTKOutputAdapterRuns << " \t |  " << _measureBlockVTKOutputAdapterCPUTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCPUTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  << " \t |  " << _measureBlockVTKOutputAdapterCalendarTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCalendarTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAndVTKOutputAdapter \t |  " << _countRegularBlockSolverAndVTKOutputAdapterRuns << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| TraceNSEData \t |  " << _countTraceNSEDataRuns << " \t |  " << _measureTraceNSEDataCPUTime << " \t |  " << (_countTraceNSEDataRuns==0 ? 0 : _measureTraceNSEDataCPUTime / static_cast<double>(_countTraceNSEDataRuns))  << " \t |  " << _measureTraceNSEDataCalendarTime << " \t |  " << (_countTraceNSEDataRuns==0 ? 0 : _measureTraceNSEDataCalendarTime / static_cast<double>(_countTraceNSEDataRuns))  );  
   logInfo( "logIterationStatistics()", "| TraceLBData \t |  " << _countTraceLBDataRuns << " \t |  " << _measureTraceLBDataCPUTime << " \t |  " << (_countTraceLBDataRuns==0 ? 0 : _measureTraceLBDataCPUTime / static_cast<double>(_countTraceLBDataRuns))  << " \t |  " << _measureTraceLBDataCalendarTime << " \t |  " << (_countTraceLBDataRuns==0 ? 0 : _measureTraceLBDataCalendarTime / static_cast<double>(_countTraceLBDataRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>* peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>();
} 


void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != LBFBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=LBFBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
