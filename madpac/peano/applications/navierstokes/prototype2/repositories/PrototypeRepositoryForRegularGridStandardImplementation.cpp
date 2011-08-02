#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::_log( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::PrototypeRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::PrototypeRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),




  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( PrototypeRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(0);
  
  logTraceOut( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::PrototypeRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),




  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( PrototypeRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(0);
  
  logTraceOut( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::~PrototypeRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == PrototypeRepositoryState::Terminate );
}


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == PrototypeRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif


  logTraceOut( "restart(...)" );
}


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::terminate() {
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
  
  _gridContainer.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit& peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation", "iterate()", false);
  
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








void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>* peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>();
} 


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation::continueToIterate() {
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
