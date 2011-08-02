#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::_log( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation" );


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithSetupExperiment(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSetupExperimentAndPlotGrid(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSetupExperimentAndPlotStartSolution(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSmoothAndComputeGalerkinCoarseGridOperator(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countSmoothAndComputeGalerkinCoarseGridOperatorRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(...)" );
  _repositoryState.setAction( MultigridBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(5 +3);
  
  logTraceOut( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(...)" );
}



peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithSetupExperiment(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetupExperimentAndPlotGrid(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetupExperimentAndPlotStartSolution(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSmoothAndComputeGalerkinCoarseGridOperator(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countSmoothAndComputeGalerkinCoarseGridOperatorRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(Geometry&)" );

  _repositoryState.setAction( MultigridBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(5 +3);
  
  logTraceOut( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(Geometry&)" );
}
    
   
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::~MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation() {
  assertion( _repositoryState.getAction() == MultigridBatchJobRepositoryState::Terminate );
}


void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::restart(
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
  
  assertion( _repositoryState.getAction() == MultigridBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithSetupExperiment.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetupExperimentAndPlotGrid.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetupExperimentAndPlotStartSolution.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSmoothAndComputeGalerkinCoarseGridOperator.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotSolution.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( MultigridBatchJobRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridWithSetupExperiment.terminate();
  _gridWithSetupExperimentAndPlotGrid.terminate();
  _gridWithSetupExperimentAndPlotStartSolution.terminate();
  _gridWithSmoothAndComputeGalerkinCoarseGridOperator.terminate();
  _gridWithPlotSolution.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::poisson::multigrid::State& peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::getState() {
  return _solverState;
}


peano::applications::poisson::multigrid::SpacetreeGridState&  peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::getSpacetreeGridState() {
  return _solverState;
}

    
void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation", "iterate()", false);
  
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
    case MultigridBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(_solverState); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid: watch.startTimer(); _gridWithSetupExperimentAndPlotGrid.iterate(_solverState); watch.stopTimer(); _countSetupExperimentAndPlotGridRuns++; _measureSetupExperimentAndPlotGridCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotGridCalendarTime += watch.getCalendarTime(); break;
    case MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution: watch.startTimer(); _gridWithSetupExperimentAndPlotStartSolution.iterate(_solverState); watch.stopTimer(); _countSetupExperimentAndPlotStartSolutionRuns++; _measureSetupExperimentAndPlotStartSolutionCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotStartSolutionCalendarTime += watch.getCalendarTime(); break;
    case MultigridBatchJobRepositoryState::UseAdapterSmoothAndComputeGalerkinCoarseGridOperator: watch.startTimer(); _gridWithSmoothAndComputeGalerkinCoarseGridOperator.iterate(_solverState); watch.stopTimer(); _countSmoothAndComputeGalerkinCoarseGridOperatorRuns++; _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime += watch.getCPUTime(); _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime += watch.getCalendarTime(); break;
    case MultigridBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(_solverState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;

    case MultigridBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case MultigridBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case MultigridBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}

void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::iterate(bool reduceState) {

}

 void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::switchToSetupExperiment() { _repositoryState.setAction(MultigridBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::switchToSetupExperimentAndPlotGrid() { _repositoryState.setAction(MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid); }
 void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::switchToSetupExperimentAndPlotStartSolution() { _repositoryState.setAction(MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution); }
 void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::switchToSmoothAndComputeGalerkinCoarseGridOperator() { _repositoryState.setAction(MultigridBatchJobRepositoryState::UseAdapterSmoothAndComputeGalerkinCoarseGridOperator); }
 void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::switchToPlotSolution() { _repositoryState.setAction(MultigridBatchJobRepositoryState::UseAdapterPlotSolution); }



 bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == MultigridBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::isActiveAdapterSetupExperimentAndPlotGrid() const { return _repositoryState.getAction() == MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid; }
 bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::isActiveAdapterSetupExperimentAndPlotStartSolution() const { return _repositoryState.getAction() == MultigridBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution; }
 bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::isActiveAdapterSmoothAndComputeGalerkinCoarseGridOperator() const { return _repositoryState.getAction() == MultigridBatchJobRepositoryState::UseAdapterSmoothAndComputeGalerkinCoarseGridOperator; }
 bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == MultigridBatchJobRepositoryState::UseAdapterPlotSolution; }



#ifdef CCA
void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupExperiment", _countSetupExperimentRuns, _measureSetupExperimentCPUTime, _measureSetupExperimentCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotGrid", _countSetupExperimentAndPlotGridRuns, _measureSetupExperimentAndPlotGridCPUTime, _measureSetupExperimentAndPlotGridCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotStartSolution", _countSetupExperimentAndPlotStartSolutionRuns, _measureSetupExperimentAndPlotStartSolutionCPUTime, _measureSetupExperimentAndPlotStartSolutionCPUTime );
  writeToPort.addAdapterRuntime( "SmoothAndComputeGalerkinCoarseGridOperator", _countSmoothAndComputeGalerkinCoarseGridOperatorRuns, _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime, _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolution", _countPlotSolutionRuns, _measurePlotSolutionCPUTime, _measurePlotSolutionCPUTime );

}
#endif

void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotGrid \t |  " << _countSetupExperimentAndPlotGridRuns << " \t |  " << _measureSetupExperimentAndPlotGridCPUTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCPUTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  << " \t |  " << _measureSetupExperimentAndPlotGridCalendarTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCalendarTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotStartSolution \t |  " << _countSetupExperimentAndPlotStartSolutionRuns << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCPUTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCPUTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCalendarTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCalendarTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| SmoothAndComputeGalerkinCoarseGridOperator \t |  " << _countSmoothAndComputeGalerkinCoarseGridOperatorRuns << " \t |  " << _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime << " \t |  " << (_countSmoothAndComputeGalerkinCoarseGridOperatorRuns==0 ? 0 : _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime / static_cast<double>(_countSmoothAndComputeGalerkinCoarseGridOperatorRuns))  << " \t |  " << _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime << " \t |  " << (_countSmoothAndComputeGalerkinCoarseGridOperatorRuns==0 ? 0 : _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime / static_cast<double>(_countSmoothAndComputeGalerkinCoarseGridOperatorRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell>* peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell>();
} 


void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != MultigridBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=MultigridBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
