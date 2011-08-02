#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::_log( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation" );


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  _gridWithSetupGrid(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),

  _countSetupGridRuns(0),

  _measureSetupGridCPUTime(0.0),

  _measureSetupGridCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
  
  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(1 +3);
  
  logTraceOut( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
}



peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  _gridWithSetupGrid(_vertexStack,_cellStack,_geometry,_solverState),

  _countSetupGridRuns(0),

  _measureSetupGridCPUTime(0.0),

  _measureSetupGridCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );

  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(1 +3);

  logTraceOut( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );
}
    
   
peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::~PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation() {
  assertion( _repositoryState.getAction() == PuregridBatchJobRepositoryState::Terminate );
}


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::restart(
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
  
  assertion( _repositoryState.getAction() == PuregridBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithSetupGrid.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridWithSetupGrid.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::puregrid::State& peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::getState() {
  return _solverState;
}


peano::applications::puregrid::SpacetreeGridState&  peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::getSpacetreeGridState() {
  return _solverState;
}
   

    
void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation", "iterate()", false);
  
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
    case PuregridBatchJobRepositoryState::UseAdapterSetupGrid: watch.startTimer(); _gridWithSetupGrid.iterate(_solverState); watch.stopTimer(); _countSetupGridRuns++; _measureSetupGridCPUTime += watch.getCPUTime(); _measureSetupGridCalendarTime += watch.getCalendarTime(); break;

    case PuregridBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case PuregridBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case PuregridBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}

void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::iterate(bool reduceState) {

}

 void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToSetupGrid() { _repositoryState.setAction(PuregridBatchJobRepositoryState::UseAdapterSetupGrid); }



 bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterSetupGrid() const { return _repositoryState.getAction() == PuregridBatchJobRepositoryState::UseAdapterSetupGrid; }



#ifdef CCA
void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
   logInfo( "logIterationStatistics()", "| SetupGrid \t |  " << _countSetupGridRuns << " \t |  " << _measureSetupGridCPUTime << " \t |  " << _measureSetupGridCPUTime / static_cast<double>(_countSetupGridRuns)  << " \t |  " << _measureSetupGridCalendarTime << " \t |  " << (_countSetupGridRuns==0 ? 0 : _measureSetupGridCalendarTime / static_cast<double>(_countSetupGridRuns))  );  

}
#endif


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupGrid \t |  " << _countSetupGridRuns << " \t |  " << _measureSetupGridCPUTime << " \t |  " << (_countSetupGridRuns==0 ? 0 : _measureSetupGridCPUTime / static_cast<double>(_countSetupGridRuns))  << " \t |  " << _measureSetupGridCalendarTime << " \t |  " << (_countSetupGridRuns==0 ? 0 : _measureSetupGridCalendarTime / static_cast<double>(_countSetupGridRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>* peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>();
} 


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridFileStackImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != PuregridBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=PuregridBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
