#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridDynamicStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::_log( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation" );


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithInitialiseScenario(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithMergeA(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithCalculateF(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithCalculatePPERHS(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithGaussSeidelForEnhancedDivFree(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithUpdateVelocity(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPlotSolutionVTK(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPlotRegularSolutionVTK(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithUpdateScenario(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),

  _countInitialiseScenarioRuns(0),
  _countMergeARuns(0),
  _countCalculateFRuns(0),
  _countCalculatePPERHSRuns(0),
  _countGaussSeidelForEnhancedDivFreeRuns(0),
  _countUpdateVelocityRuns(0),
  _countPlotSolutionVTKRuns(0),
  _countPlotRegularSolutionVTKRuns(0),
  _countUpdateScenarioRuns(0),

  _measureInitialiseScenarioCPUTime(0.0),
  _measureMergeACPUTime(0.0),
  _measureCalculateFCPUTime(0.0),
  _measureCalculatePPERHSCPUTime(0.0),
  _measureGaussSeidelForEnhancedDivFreeCPUTime(0.0),
  _measureUpdateVelocityCPUTime(0.0),
  _measurePlotSolutionVTKCPUTime(0.0),
  _measurePlotRegularSolutionVTKCPUTime(0.0),
  _measureUpdateScenarioCPUTime(0.0),

  _measureInitialiseScenarioCalendarTime(0.0),
  _measureMergeACalendarTime(0.0),
  _measureCalculateFCalendarTime(0.0),
  _measureCalculatePPERHSCalendarTime(0.0),
  _measureGaussSeidelForEnhancedDivFreeCalendarTime(0.0),
  _measureUpdateVelocityCalendarTime(0.0),
  _measurePlotSolutionVTKCalendarTime(0.0),
  _measurePlotRegularSolutionVTKCalendarTime(0.0),
  _measureUpdateScenarioCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(...)" );
  _repositoryState.setAction( PrototypeRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(9 +3);
  
  logTraceOut( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(...)" );
}



peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithInitialiseScenario(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithMergeA(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithCalculateF(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithCalculatePPERHS(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithGaussSeidelForEnhancedDivFree(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithUpdateVelocity(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotSolutionVTK(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotRegularSolutionVTK(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithUpdateScenario(_vertexStack,_cellStack,_geometry,_solverState),

  _countInitialiseScenarioRuns(0),
  _countMergeARuns(0),
  _countCalculateFRuns(0),
  _countCalculatePPERHSRuns(0),
  _countGaussSeidelForEnhancedDivFreeRuns(0),
  _countUpdateVelocityRuns(0),
  _countPlotSolutionVTKRuns(0),
  _countPlotRegularSolutionVTKRuns(0),
  _countUpdateScenarioRuns(0),

  _measureInitialiseScenarioCPUTime(0.0),
  _measureMergeACPUTime(0.0),
  _measureCalculateFCPUTime(0.0),
  _measureCalculatePPERHSCPUTime(0.0),
  _measureGaussSeidelForEnhancedDivFreeCPUTime(0.0),
  _measureUpdateVelocityCPUTime(0.0),
  _measurePlotSolutionVTKCPUTime(0.0),
  _measurePlotRegularSolutionVTKCPUTime(0.0),
  _measureUpdateScenarioCPUTime(0.0),

  _measureInitialiseScenarioCalendarTime(0.0),
  _measureMergeACalendarTime(0.0),
  _measureCalculateFCalendarTime(0.0),
  _measureCalculatePPERHSCalendarTime(0.0),
  _measureGaussSeidelForEnhancedDivFreeCalendarTime(0.0),
  _measureUpdateVelocityCalendarTime(0.0),
  _measurePlotSolutionVTKCalendarTime(0.0),
  _measurePlotRegularSolutionVTKCalendarTime(0.0),
  _measureUpdateScenarioCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(Geometry&)" );

  _repositoryState.setAction( PrototypeRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(9 +3);
  
  logTraceOut( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(Geometry&)" );
}
    
   
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::~PrototypeRepositoryForSpacetreeGridDynamicStackImplementation() {
  assertion( _repositoryState.getAction() == PrototypeRepositoryState::Terminate );
}


void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::restart(
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
  
  assertion( _repositoryState.getAction() == PrototypeRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithInitialiseScenario.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithMergeA.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithCalculateF.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithCalculatePPERHS.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithGaussSeidelForEnhancedDivFree.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithUpdateVelocity.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotSolutionVTK.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotRegularSolutionVTK.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithUpdateScenario.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( PrototypeRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridWithInitialiseScenario.terminate();
  _gridWithMergeA.terminate();
  _gridWithCalculateF.terminate();
  _gridWithCalculatePPERHS.terminate();
  _gridWithGaussSeidelForEnhancedDivFree.terminate();
  _gridWithUpdateVelocity.terminate();
  _gridWithPlotSolutionVTK.terminate();
  _gridWithPlotRegularSolutionVTK.terminate();
  _gridWithUpdateScenario.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit& peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::getState() {
  return _solverState;
}


peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit&  peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::getSpacetreeGridState() {
  return _solverState;
}

    
void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation", "iterate(bool)", false);
  
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
    case PrototypeRepositoryState::UseAdapterInitialiseScenario: watch.startTimer(); _gridWithInitialiseScenario.iterate(_solverState); watch.stopTimer(); _countInitialiseScenarioRuns++; _measureInitialiseScenarioCPUTime += watch.getCPUTime(); _measureInitialiseScenarioCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterMergeA: watch.startTimer(); _gridWithMergeA.iterate(_solverState); watch.stopTimer(); _countMergeARuns++; _measureMergeACPUTime += watch.getCPUTime(); _measureMergeACalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterCalculateF: watch.startTimer(); _gridWithCalculateF.iterate(_solverState); watch.stopTimer(); _countCalculateFRuns++; _measureCalculateFCPUTime += watch.getCPUTime(); _measureCalculateFCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterCalculatePPERHS: watch.startTimer(); _gridWithCalculatePPERHS.iterate(_solverState); watch.stopTimer(); _countCalculatePPERHSRuns++; _measureCalculatePPERHSCPUTime += watch.getCPUTime(); _measureCalculatePPERHSCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterGaussSeidelForEnhancedDivFree: watch.startTimer(); _gridWithGaussSeidelForEnhancedDivFree.iterate(_solverState); watch.stopTimer(); _countGaussSeidelForEnhancedDivFreeRuns++; _measureGaussSeidelForEnhancedDivFreeCPUTime += watch.getCPUTime(); _measureGaussSeidelForEnhancedDivFreeCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterUpdateVelocity: watch.startTimer(); _gridWithUpdateVelocity.iterate(_solverState); watch.stopTimer(); _countUpdateVelocityRuns++; _measureUpdateVelocityCPUTime += watch.getCPUTime(); _measureUpdateVelocityCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterPlotSolutionVTK: watch.startTimer(); _gridWithPlotSolutionVTK.iterate(_solverState); watch.stopTimer(); _countPlotSolutionVTKRuns++; _measurePlotSolutionVTKCPUTime += watch.getCPUTime(); _measurePlotSolutionVTKCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterPlotRegularSolutionVTK: watch.startTimer(); _gridWithPlotRegularSolutionVTK.iterate(_solverState); watch.stopTimer(); _countPlotRegularSolutionVTKRuns++; _measurePlotRegularSolutionVTKCPUTime += watch.getCPUTime(); _measurePlotRegularSolutionVTKCalendarTime += watch.getCalendarTime(); break;
    case PrototypeRepositoryState::UseAdapterUpdateScenario: watch.startTimer(); _gridWithUpdateScenario.iterate(_solverState); watch.stopTimer(); _countUpdateScenarioRuns++; _measureUpdateScenarioCPUTime += watch.getCPUTime(); _measureUpdateScenarioCalendarTime += watch.getCalendarTime(); break;

    case PrototypeRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case PrototypeRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case PrototypeRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}

 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToInitialiseScenario() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterInitialiseScenario); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToMergeA() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterMergeA); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToCalculateF() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterCalculateF); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToCalculatePPERHS() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterCalculatePPERHS); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToGaussSeidelForEnhancedDivFree() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterGaussSeidelForEnhancedDivFree); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToUpdateVelocity() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterUpdateVelocity); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToPlotSolutionVTK() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterPlotSolutionVTK); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToPlotRegularSolutionVTK() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterPlotRegularSolutionVTK); }
 void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::switchToUpdateScenario() { _repositoryState.setAction(PrototypeRepositoryState::UseAdapterUpdateScenario); }



 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterInitialiseScenario() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterInitialiseScenario; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterMergeA() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterMergeA; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterCalculateF() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterCalculateF; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterCalculatePPERHS() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterCalculatePPERHS; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterGaussSeidelForEnhancedDivFree() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterGaussSeidelForEnhancedDivFree; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterUpdateVelocity() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterUpdateVelocity; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPlotSolutionVTK() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterPlotSolutionVTK; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPlotRegularSolutionVTK() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterPlotRegularSolutionVTK; }
 bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterUpdateScenario() const { return _repositoryState.getAction() == PrototypeRepositoryState::UseAdapterUpdateScenario; }



#ifdef CCA
void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "InitialiseScenario", _countInitialiseScenarioRuns, _measureInitialiseScenarioCPUTime, _measureInitialiseScenarioCPUTime );
  writeToPort.addAdapterRuntime( "MergeA", _countMergeARuns, _measureMergeACPUTime, _measureMergeACPUTime );
  writeToPort.addAdapterRuntime( "CalculateF", _countCalculateFRuns, _measureCalculateFCPUTime, _measureCalculateFCPUTime );
  writeToPort.addAdapterRuntime( "CalculatePPERHS", _countCalculatePPERHSRuns, _measureCalculatePPERHSCPUTime, _measureCalculatePPERHSCPUTime );
  writeToPort.addAdapterRuntime( "GaussSeidelForEnhancedDivFree", _countGaussSeidelForEnhancedDivFreeRuns, _measureGaussSeidelForEnhancedDivFreeCPUTime, _measureGaussSeidelForEnhancedDivFreeCPUTime );
  writeToPort.addAdapterRuntime( "UpdateVelocity", _countUpdateVelocityRuns, _measureUpdateVelocityCPUTime, _measureUpdateVelocityCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolutionVTK", _countPlotSolutionVTKRuns, _measurePlotSolutionVTKCPUTime, _measurePlotSolutionVTKCPUTime );
  writeToPort.addAdapterRuntime( "PlotRegularSolutionVTK", _countPlotRegularSolutionVTKRuns, _measurePlotRegularSolutionVTKCPUTime, _measurePlotRegularSolutionVTKCPUTime );
  writeToPort.addAdapterRuntime( "UpdateScenario", _countUpdateScenarioRuns, _measureUpdateScenarioCPUTime, _measureUpdateScenarioCPUTime );

}
#endif

void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| InitialiseScenario \t |  " << _countInitialiseScenarioRuns << " \t |  " << _measureInitialiseScenarioCPUTime << " \t |  " << (_countInitialiseScenarioRuns==0 ? 0 : _measureInitialiseScenarioCPUTime / static_cast<double>(_countInitialiseScenarioRuns))  << " \t |  " << _measureInitialiseScenarioCalendarTime << " \t |  " << (_countInitialiseScenarioRuns==0 ? 0 : _measureInitialiseScenarioCalendarTime / static_cast<double>(_countInitialiseScenarioRuns))  );  
   logInfo( "logIterationStatistics()", "| MergeA \t |  " << _countMergeARuns << " \t |  " << _measureMergeACPUTime << " \t |  " << (_countMergeARuns==0 ? 0 : _measureMergeACPUTime / static_cast<double>(_countMergeARuns))  << " \t |  " << _measureMergeACalendarTime << " \t |  " << (_countMergeARuns==0 ? 0 : _measureMergeACalendarTime / static_cast<double>(_countMergeARuns))  );  
   logInfo( "logIterationStatistics()", "| CalculateF \t |  " << _countCalculateFRuns << " \t |  " << _measureCalculateFCPUTime << " \t |  " << (_countCalculateFRuns==0 ? 0 : _measureCalculateFCPUTime / static_cast<double>(_countCalculateFRuns))  << " \t |  " << _measureCalculateFCalendarTime << " \t |  " << (_countCalculateFRuns==0 ? 0 : _measureCalculateFCalendarTime / static_cast<double>(_countCalculateFRuns))  );  
   logInfo( "logIterationStatistics()", "| CalculatePPERHS \t |  " << _countCalculatePPERHSRuns << " \t |  " << _measureCalculatePPERHSCPUTime << " \t |  " << (_countCalculatePPERHSRuns==0 ? 0 : _measureCalculatePPERHSCPUTime / static_cast<double>(_countCalculatePPERHSRuns))  << " \t |  " << _measureCalculatePPERHSCalendarTime << " \t |  " << (_countCalculatePPERHSRuns==0 ? 0 : _measureCalculatePPERHSCalendarTime / static_cast<double>(_countCalculatePPERHSRuns))  );  
   logInfo( "logIterationStatistics()", "| GaussSeidelForEnhancedDivFree \t |  " << _countGaussSeidelForEnhancedDivFreeRuns << " \t |  " << _measureGaussSeidelForEnhancedDivFreeCPUTime << " \t |  " << (_countGaussSeidelForEnhancedDivFreeRuns==0 ? 0 : _measureGaussSeidelForEnhancedDivFreeCPUTime / static_cast<double>(_countGaussSeidelForEnhancedDivFreeRuns))  << " \t |  " << _measureGaussSeidelForEnhancedDivFreeCalendarTime << " \t |  " << (_countGaussSeidelForEnhancedDivFreeRuns==0 ? 0 : _measureGaussSeidelForEnhancedDivFreeCalendarTime / static_cast<double>(_countGaussSeidelForEnhancedDivFreeRuns))  );  
   logInfo( "logIterationStatistics()", "| UpdateVelocity \t |  " << _countUpdateVelocityRuns << " \t |  " << _measureUpdateVelocityCPUTime << " \t |  " << (_countUpdateVelocityRuns==0 ? 0 : _measureUpdateVelocityCPUTime / static_cast<double>(_countUpdateVelocityRuns))  << " \t |  " << _measureUpdateVelocityCalendarTime << " \t |  " << (_countUpdateVelocityRuns==0 ? 0 : _measureUpdateVelocityCalendarTime / static_cast<double>(_countUpdateVelocityRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolutionVTK \t |  " << _countPlotSolutionVTKRuns << " \t |  " << _measurePlotSolutionVTKCPUTime << " \t |  " << (_countPlotSolutionVTKRuns==0 ? 0 : _measurePlotSolutionVTKCPUTime / static_cast<double>(_countPlotSolutionVTKRuns))  << " \t |  " << _measurePlotSolutionVTKCalendarTime << " \t |  " << (_countPlotSolutionVTKRuns==0 ? 0 : _measurePlotSolutionVTKCalendarTime / static_cast<double>(_countPlotSolutionVTKRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotRegularSolutionVTK \t |  " << _countPlotRegularSolutionVTKRuns << " \t |  " << _measurePlotRegularSolutionVTKCPUTime << " \t |  " << (_countPlotRegularSolutionVTKRuns==0 ? 0 : _measurePlotRegularSolutionVTKCPUTime / static_cast<double>(_countPlotRegularSolutionVTKRuns))  << " \t |  " << _measurePlotRegularSolutionVTKCalendarTime << " \t |  " << (_countPlotRegularSolutionVTKRuns==0 ? 0 : _measurePlotRegularSolutionVTKCalendarTime / static_cast<double>(_countPlotRegularSolutionVTKRuns))  );  
   logInfo( "logIterationStatistics()", "| UpdateScenario \t |  " << _countUpdateScenarioRuns << " \t |  " << _measureUpdateScenarioCPUTime << " \t |  " << (_countUpdateScenarioRuns==0 ? 0 : _measureUpdateScenarioCPUTime / static_cast<double>(_countUpdateScenarioRuns))  << " \t |  " << _measureUpdateScenarioCalendarTime << " \t |  " << (_countUpdateScenarioRuns==0 ? 0 : _measureUpdateScenarioCalendarTime / static_cast<double>(_countUpdateScenarioRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>* peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>();
} 


void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != PrototypeRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=PrototypeRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif