#include "peano/kernel/parallel/SendReceiveBufferPool.h"


#include "tarch/parallel/Node.h"
#include "tarch/Assertions.h"


tarch::logging::Log peano::kernel::parallel::SendReceiveBufferPool::_log( "peano::kernel::parallel::SendReceiveBufferPool" );


peano::kernel::parallel::SendReceiveBufferPool::SendReceiveBufferPool():
  _iterationManagementTag(0),
  _iterationDataTag(0),
  _joinDataTag(0),
  _bufferSize(1) {
  _iterationManagementTag = tarch::parallel::Node::getInstance().reserveFreeTag("SendReceiveBufferPool[it-mgmt]");
  _iterationDataTag       = tarch::parallel::Node::getInstance().reserveFreeTag("SendReceiveBufferPool[it-data]");
  _joinDataTag            = tarch::parallel::Node::getInstance().reserveFreeTag("SendReceiveBufferPool[join-data]");;

}

peano::kernel::parallel::SendReceiveBufferPool& peano::kernel::parallel::SendReceiveBufferPool::getInstance() {
  static peano::kernel::parallel::SendReceiveBufferPool singleton;
  return singleton;
}



int peano::kernel::parallel::SendReceiveBufferPool::getIterationManagementTag() const {
  return _iterationManagementTag;
}


int peano::kernel::parallel::SendReceiveBufferPool::getIterationDataTag() const {
  return _iterationDataTag;
}


int peano::kernel::parallel::SendReceiveBufferPool::getJoinDataTag() const {
  return _joinDataTag;
}


void peano::kernel::parallel::SendReceiveBufferPool::receiveDanglingMessages() {
  for (std::map<int,SendReceiveBuffer*>::iterator p = _map.begin(); p!=_map.end(); p++ ) {
    p->second->receivePageIfAvailable();
  }
}


void peano::kernel::parallel::SendReceiveBufferPool::terminate() {
  for (std::map<int,SendReceiveBuffer*>::iterator p = _map.begin(); p!=_map.end(); p++ ) {
    assertion1(  p->first >= 0, tarch::parallel::Node::getInstance().getRank() );
    assertion1( _map.count(p->first) == 1, tarch::parallel::Node::getInstance().getRank() );
    assertionEquals2( p->second->getNumberOfReceivedMessages(), 0, p->first, tarch::parallel::Node::getInstance().getRank() );
    delete p->second;
  }

  _map.clear();
}


void peano::kernel::parallel::SendReceiveBufferPool::restart() {
  assertion1( _map.empty(), tarch::parallel::Node::getInstance().getRank() );
  _bufferSize = 1;
}


void peano::kernel::parallel::SendReceiveBufferPool::releaseMessages() {
  logTraceIn( "releaseMessages()" );
  for ( std::map<int,SendReceiveBuffer*>::const_iterator p = _map.begin(); p != _map.end(); p++ ) {
    p->second->releaseSentMessages();
  }
  for ( std::map<int,SendReceiveBuffer*>::const_iterator p = _map.begin(); p != _map.end(); p++ ) {
    p->second->releaseReceivedMessages(true);
  }
  logTraceOut( "releaseMessages()" );
}


void peano::kernel::parallel::SendReceiveBufferPool::setBufferSize( int bufferSize ) {
  assertion1( _map.empty(), tarch::parallel::Node::getInstance().getRank() );

  _bufferSize = bufferSize;
}
