#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/Node.h"


#include "tarch/parallel/messages/ActivationMessage.h"
#include "tarch/parallel/messages/JobRequestMessage.h"
#include "tarch/parallel/messages/NodePoolAnswerMessage.h"


#include <mpi.h>
#include <sstream>


#include "tarch/services/ServiceFactory.h"
registerService(tarch::parallel::NodePool)


tarch::logging::Log tarch::parallel::NodePool::_log("tarch::parallel::NodePool");


const int tarch::parallel::NodePool::NoFreeNodesMessage = -1;
const int tarch::parallel::NodePool::Terminate          = -1;


tarch::parallel::NodePool::NodePool():
  _masterNode(-1),
  _registrationTag(-1),
  _jobManagementTag(-1),
  _jobServicesTag(-1),
  _isAlive(false),
  _strategy(0) {
  #ifdef Asserts
  _isInitialised = false;
  #endif
}


void tarch::parallel::NodePool::restart() {
  assertion1( !_isAlive, Node::getInstance().getRank() );
  assertion1( !Node::getInstance().isMasterProcess() || _strategy!=0 , Node::getInstance().getRank() );
  assertion1( !Node::getInstance().isMasterProcess() || _strategy->getNumberOfRegisteredNodes()==0, Node::getInstance().getRank() );

  logTraceIn( "restart()" );

  _isAlive = true;

  MPI_Barrier(Node::getInstance().getCommunicator());

  if ( !Node::getInstance().isMasterProcess() ) {
    logDebug( "restart()", "start to register at node pool" );
    tarch::parallel::messages::RegisterAtNodePoolMessage registerMessage(
      tarch::parallel::StringTools::convert(_log.getMachineInformation())
    );
    registerMessage.send( Node::getMasterProcessRank(), _registrationTag);
    logDebug( "restart()", "register message sent: " << registerMessage.toString() << " on tag " << _registrationTag );
  }
  logTraceOut( "restart()" );
}


int tarch::parallel::NodePool::getNumberOfWorkingNodes() const {
  assertion1( Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );
  assertion1( _strategy!=0, Node::getInstance().getRank() );

  return _strategy->getNumberOfRegisteredNodes() - _strategy->getNumberOfIdleNodes();
}


void tarch::parallel::NodePool::init() {
  logTraceIn( "init()" );

  _registrationTag  = Node::getInstance().reserveFreeTag( "tarch::parallel::NodePool[registration]" );
  _jobManagementTag = Node::getInstance().reserveFreeTag( "tarch::parallel::NodePool[job-management]" );
  _jobServicesTag   = Node::getInstance().reserveFreeTag( "tarch::parallel::NodePool[job-services]" );

  logDebug( "NodePool()", "start to initialise node pool messages as MPI data types" );
  tarch::parallel::messages::ActivationMessage::initDatatype();
  tarch::parallel::messages::JobRequestMessage::initDatatype();
  tarch::parallel::messages::NodePoolAnswerMessage::initDatatype();
  tarch::parallel::messages::RegisterAtNodePoolMessage::initDatatype();
  tarch::parallel::messages::WorkerRequestMessage::initDatatype();
  logDebug( "NodePool()", "data types are initialised" );

  logTraceOut( "init()" );
}


tarch::parallel::NodePool& tarch::parallel::NodePool::getInstance() {
  static tarch::parallel::NodePool pool;
  return pool;
}


int tarch::parallel::NodePool::getTagForForkMessages() const {
  return _jobManagementTag;
}


void tarch::parallel::NodePool::setStrategy(NodePoolStrategy* strategy) {
  assertion1( Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );

  logTraceIn( "setStrategy(...)" );

  if (_strategy!=0) {
    assertion1( _strategy->getNumberOfRegisteredNodes()==0, Node::getInstance().getRank() );

    delete _strategy;
  }

  _strategy = strategy;
  _strategy->setNodePoolTag(_jobServicesTag);

  logTraceOut( "setStrategy(...)" );
}



void tarch::parallel::NodePool::waitForAllNodesToBecomeIdle() {
  assertion1( Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );
  assertion1( _strategy!=0, Node::getInstance().getRank() );

  while ( _strategy->getNumberOfIdleNodes() < Node::getInstance().getNumberOfNodes()-1) {
    replyToJobRequestMessages();
  }
}


void tarch::parallel::NodePool::shutdown() {
  emptyReceiveBuffers();

  if ( _isAlive ) {
    _log.error("shutdown()", "called destructor for alive node" );
  }

  if (_strategy!=0) {
    delete _strategy;
    _strategy = 0;
  }

  tarch::parallel::messages::ActivationMessage::shutdownDatatype();
  tarch::parallel::messages::JobRequestMessage::shutdownDatatype();
  tarch::parallel::messages::NodePoolAnswerMessage::shutdownDatatype();
  tarch::parallel::messages::RegisterAtNodePoolMessage::shutdownDatatype();
  tarch::parallel::messages::WorkerRequestMessage::shutdownDatatype();
}


tarch::parallel::NodePool::~NodePool() {
  if (_strategy != 0) {
    logError( "~NodePool()", "forgot to call shutdown() on node " << Node::getInstance().getRank() );
  }
}


bool tarch::parallel::NodePool::waitForJob() {
  logTraceIn( "waitForJob()" );

  assertion1( _isAlive, Node::getInstance().getRank() );
  assertion( !Node::getInstance().isMasterProcess() );

  _masterNode = -1;

  tarch::parallel::messages::JobRequestMessage message;
  message.send(Node::getInstance().getMasterProcessRank(),_jobManagementTag);

  MPI_Status   status;
  tarch::parallel::messages::ActivationMessage answer;
  int result = MPI_Recv(
    &answer, 1,
    tarch::parallel::messages::ActivationMessage::Datatype,
    Node::getInstance().getMasterProcessRank(), _jobManagementTag,
    tarch::parallel::Node::getInstance().getCommunicator(),
    &status
  );
  if ( result != MPI_SUCCESS ) {
    logError(
      "waitForJob()",
      "failed to start to receive tarch::parallel::messages::ActivationMessage from master node: "
      << tarch::parallel::MPIReturnValueToString(result)
    );
  }

  if ( answer.getNewMaster() == NoFreeNodesMessage ) {
  	logDebug("waitForJob()", "node received termination signal");
  	_isAlive = false;
    logTraceInWith1Argument( "waitForJob()", false );
  	return false;
  }
  else {
    _masterNode = answer.getNewMaster();
    logTraceOutWith2Arguments( "waitForJob()", true, _masterNode );
    return true;
  }
}


void tarch::parallel::NodePool::terminate() {
  assertion1( Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );
  assertion1( _strategy!=0, Node::getInstance().getRank() );
  assertion1( _isAlive, Node::getInstance().getRank() );

  logTraceIn("terminate()" );

  _isAlive = false;

  while ( _strategy->hasIdleNode() ) {
	  int rank = _strategy->removeNextIdleNode();
	  tarch::parallel::messages::ActivationMessage answerMessage( Terminate );
    answerMessage.send( rank, _jobManagementTag );
  }

  logDebug( "terminate()", "still working: " << _strategy->getNumberOfRegisteredNodes() << " node(s)" );

  clock_t      timeOutWarning   = Node::getInstance().getDeadlockWarningTimeStamp();
  clock_t      timeOutShutdown  = Node::getInstance().getDeadlockTimeOutTimeStamp();
  bool         triggeredTimeoutWarning = false;

  assertion1( _strategy!=0, Node::getInstance().getRank() );
  while ( _strategy->getNumberOfRegisteredNodes()>0 ) {
    Node::getInstance().receiveDanglingMessages();

    // deadlock aspect
    if ( Node::getInstance().isTimeOutWarningEnabled() && (clock()>timeOutWarning) && (!triggeredTimeoutWarning)) {
      Node::getInstance().writeTimeOutWarning( "tarch::parallel::NodePool", "terminate()", -1);
      triggeredTimeoutWarning = true;
    }
    if ( Node::getInstance().isTimeOutDeadlockEnabled() && (clock()>timeOutShutdown)) {
      Node::getInstance().triggerDeadlockTimeOut( "tarch::parallel::NodePool", "terminate()", -1 );
    }
  }

  logTraceOut( "terminate()" );
}


int tarch::parallel::NodePool::getFreeNode(int forMaster) {
  assertion1( _isAlive, Node::getInstance().getRank() );
  assertion1( _strategy!=0, Node::getInstance().getRank() );

  logTraceInWith1Argument( "getFreeNode(int)", forMaster );

  int result;
  if ( _strategy->hasIdleNode() ) {
    result = _strategy->reserveNode(forMaster);
  }
  else {
    result = NoFreeNodesMessage;
  }

  logTraceOutWith1Argument( "getFreeNode(int)", result );
  return result;
}


int tarch::parallel::NodePool::reserveFreeNodeForServer() {
  assertion1( _isAlive, Node::getInstance().getRank() );

  logTraceIn( "reserveFreeNodeForServer()");

  int activatedNode = getFreeNode( Node::getInstance().getMasterProcessRank());

  if (activatedNode!=NoFreeNodesMessage) {
    tarch::parallel::messages::ActivationMessage message( Node::getInstance().getMasterProcessRank() );
    message.send( activatedNode, _jobManagementTag );
  }

  logTraceOutWith1Argument( "reserveFreeNodeForServer()", activatedNode);

  return activatedNode;
}


int tarch::parallel::NodePool::reserveFreeNode() {
  if ( Node::getInstance().isMasterProcess() ) {
    assertion2( _masterNode == -1, _masterNode, Node::getInstance().getRank() );
  	assertion1( _isAlive, Node::getInstance().getRank() );
  	receiveDanglingMessages();
  	return reserveFreeNodeForServer();
  }
  else {
    assertion1( _isAlive, Node::getInstance().getRank() );
    return reserveFreeNodeForClient();
  }
}


int tarch::parallel::NodePool::reserveFreeNodeForClient() {
  assertion1( _isAlive, Node::getInstance().getRank() );
  assertion1( !Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );

  logTraceIn( "reserveFreeNodeForClient()" );

  tarch::parallel::messages::WorkerRequestMessage queryMessage;
  queryMessage.send(Node::getInstance().getMasterProcessRank(),_jobServicesTag);

  tarch::parallel::messages::NodePoolAnswerMessage answer;
  answer.receive(Node::getInstance().getMasterProcessRank(),_jobServicesTag);

  logTraceOutWith1Argument( "reserveFreeNodeForClient()", answer.getNewWorker() );

  return answer.getNewWorker();
}


tarch::parallel::NodePool::NodePool( const NodePool& pool ) {
  assertionMsg( false, "copy not allowed" );
}


tarch::parallel::NodePool& tarch::parallel::NodePool::operator=( const tarch::parallel::NodePool& pool ) {
  assertionMsg( false, "copy not allowed" );
  return *this;
}


void tarch::parallel::NodePool::receiveDanglingMessages() {
  if ( Node::getInstance().isMasterProcess() ) {
    replyToRegistrationMessages();
    replyToJobRequestMessages();
    replyToWorkerRequestMessages();
  }
}


int tarch::parallel::NodePool::getMasterNodeNumber() const {
  assertion1( !Node::getInstance().isMasterProcess(), Node::getInstance().getRank() );
  return _masterNode;
}


void tarch::parallel::NodePool::emptyReceiveBuffers() {
  emptyRegisterMessageReceiveBuffer();
  emptyJobRequestMessageBuffer();
  emptyWorkerRequestMessageBuffer();
}


void tarch::parallel::NodePool::replyToRegistrationMessages() {
  assertion1( _strategy!=0, Node::getInstance().getRank() );

  logTraceInWith1Argument( "replyToRegistrationMessages()", tarch::parallel::messages::RegisterAtNodePoolMessage::isMessageInQueue(_registrationTag) );

  while ( tarch::parallel::messages::RegisterAtNodePoolMessage::isMessageInQueue(_registrationTag) ) {
    tarch::parallel::messages::RegisterAtNodePoolMessage message;
    message.receive( MPI_ANY_SOURCE, _registrationTag );
    logDebug(  "replyToRegistrationMessages()", "got registration from rank " << message.getSenderRank() );
    _strategy->addNode( message );
  }

  logTraceOut( "replyToRegistrationMessages()" );
}


void tarch::parallel::NodePool::replyToJobRequestMessages() {
  assertion1( _strategy!=0, Node::getInstance().getRank() );

  while ( tarch::parallel::messages::JobRequestMessage::isMessageInQueue(_jobManagementTag) ) {
    tarch::parallel::messages::JobRequestMessage queryMessage;
    queryMessage.receive( MPI_ANY_SOURCE, _jobManagementTag );

    assertion1( queryMessage.getSenderRank() !=Node::getInstance().getMasterProcessRank(), Node::getInstance().getRank() );

    if ( !_strategy->isRegisteredNode(queryMessage.getSenderRank()) ) {
      logDebug(
        "replyToJobRequestMessages()",
        "node pool does not contain entry for rank " << queryMessage.getSenderRank()
         << ". Message from rank " << queryMessage.getSenderRank()
         << " might have overtaken registration message. Waiting for registration"
      );

      while ( !_strategy->isRegisteredNode(queryMessage.getSenderRank()) ) {
        replyToRegistrationMessages();
      }

      logDebug( "replyToJobRequestMessages()", "registration from " << queryMessage.getSenderRank() << " finally arrived" );
    }

    _strategy->setNodeIdle( queryMessage.getSenderRank() );

    if ( !_isAlive ) {
      int rank = _strategy->removeNextIdleNode();
      assertionEquals1( rank, queryMessage.getSenderRank(), Node::getInstance().getRank() );
      tarch::parallel::messages::ActivationMessage answerMessage( Terminate );
      answerMessage.send( rank, _jobManagementTag );
    }
  }
}


void tarch::parallel::NodePool::replyToWorkerRequestMessages() {
  assertion1( _strategy!=0 , Node::getInstance().getRank() );

  logTraceInWith1Argument( "replyToWorkerRequestMessages()", tarch::parallel::messages::WorkerRequestMessage::isMessageInQueue(_jobServicesTag) );

  static NodePoolStrategy::RequestQueue queue;

  if (tarch::parallel::messages::WorkerRequestMessage::isMessageInQueue(_jobServicesTag)) {
    //NOTE: Take care of recursive calls.
    _strategy->fillWorkerRequestQueue(queue);

    while ( !queue.empty() ) {
      tarch::parallel::messages::WorkerRequestMessage nextRequestToAnswer = _strategy->extractElementFromRequestQueue(queue);
      if ( _isAlive &&  _strategy->hasIdleNode() ) {
        int activatedNode = _strategy->reserveNode(nextRequestToAnswer.getSenderRank());

        tarch::parallel::messages::NodePoolAnswerMessage answerMessage( activatedNode );
        answerMessage.send( nextRequestToAnswer.getSenderRank(), _jobServicesTag );

        tarch::parallel::messages::ActivationMessage activationMessage( nextRequestToAnswer.getSenderRank() );
        activationMessage.send( activatedNode, _jobManagementTag );
      }
      else {
        tarch::parallel::messages::NodePoolAnswerMessage answerMessage( NoFreeNodesMessage );
        answerMessage.send( nextRequestToAnswer.getSenderRank(), _jobServicesTag );
      }
    }
  }

  logTraceOut( "replyToWorkerRequestMessages()" );
}


void tarch::parallel::NodePool::emptyRegisterMessageReceiveBuffer() {
  while ( tarch::parallel::messages::RegisterAtNodePoolMessage::isMessageInQueue(_registrationTag) ) {
    tarch::parallel::messages::RegisterAtNodePoolMessage message;
    message.receive( MPI_ANY_SOURCE, _registrationTag );
  }
}


void tarch::parallel::NodePool::emptyJobRequestMessageBuffer() {
  while ( tarch::parallel::messages::JobRequestMessage::isMessageInQueue(_jobManagementTag) ) {
    tarch::parallel::messages::JobRequestMessage message;
    message.receive( MPI_ANY_SOURCE, _jobManagementTag );
  }
}


void tarch::parallel::NodePool::emptyWorkerRequestMessageBuffer() {
  while ( tarch::parallel::messages::WorkerRequestMessage::isMessageInQueue(_jobServicesTag) ) {
    tarch::parallel::messages::WorkerRequestMessage message;
    message.receive( MPI_ANY_SOURCE, _jobServicesTag );
  }
}
