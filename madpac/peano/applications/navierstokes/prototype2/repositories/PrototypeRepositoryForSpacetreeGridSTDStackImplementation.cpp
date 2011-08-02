#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryForSpacetreeGridSTDStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::_log( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation" );


peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),




  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(...)" );
  _repositoryState.setAction( PrototypeRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(0);
  
  logTraceOut( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(...)" );
}



peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),




  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(Geometry&)" );

  _repositoryState.setAction( PrototypeRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(0);
  
  logTraceOut( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(Geometry&)" );
}
    
   
peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::~PrototypeRepositoryForSpacetreeGridSTDStackImplementation() {
  assertion( _repositoryState.getAction() == PrototypeRepositoryState::Terminate );
}


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::restart(
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


  logTraceOut( "restart(...)" );
}


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::terminate() {
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
  

  logTraceOut( "terminate()" );
}


peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit& peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::getState() {
  return _solverState;
}

    
void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation", "iterate()", false);
  
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








void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>* peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>();
} 


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation::continueToIterate() {
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
