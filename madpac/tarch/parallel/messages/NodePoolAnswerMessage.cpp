#include "tarch/parallel/messages/NodePoolAnswerMessage.h"

tarch::parallel::messages::NodePoolAnswerMessage::PersistentRecords::PersistentRecords() {
   
}


tarch::parallel::messages::NodePoolAnswerMessage::PersistentRecords::PersistentRecords(const int& newWorker):
_newWorker(newWorker) {
   
}


int tarch::parallel::messages::NodePoolAnswerMessage::PersistentRecords::getNewWorker() const {
   return _newWorker;
}



void tarch::parallel::messages::NodePoolAnswerMessage::PersistentRecords::setNewWorker(const int& newWorker) {
   _newWorker = newWorker;
}


tarch::parallel::messages::NodePoolAnswerMessage::NodePoolAnswerMessage() {
   
}


tarch::parallel::messages::NodePoolAnswerMessage::NodePoolAnswerMessage(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._newWorker) {
   
}


tarch::parallel::messages::NodePoolAnswerMessage::NodePoolAnswerMessage(const int& newWorker):
_persistentRecords(newWorker) {
   
}


tarch::parallel::messages::NodePoolAnswerMessage::~NodePoolAnswerMessage() { }


int tarch::parallel::messages::NodePoolAnswerMessage::getNewWorker() const {
   return _persistentRecords._newWorker;
}



void tarch::parallel::messages::NodePoolAnswerMessage::setNewWorker(const int& newWorker) {
   _persistentRecords._newWorker = newWorker;
}




std::string tarch::parallel::messages::NodePoolAnswerMessage::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void tarch::parallel::messages::NodePoolAnswerMessage::toString (std::ostream& out) const {
   out << "("; 
   out << "newWorker:" << getNewWorker();
   out <<  ")";
}


tarch::parallel::messages::NodePoolAnswerMessage::PersistentRecords tarch::parallel::messages::NodePoolAnswerMessage::getPersistentRecords() const {
   return _persistentRecords;
}

tarch::parallel::messages::NodePoolAnswerMessagePacked tarch::parallel::messages::NodePoolAnswerMessage::convert() const{
   return NodePoolAnswerMessagePacked(
      getNewWorker()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log tarch::parallel::messages::NodePoolAnswerMessage::_log( "tarch::parallel::messages::NodePoolAnswerMessage" );
   
   MPI_Datatype tarch::parallel::messages::NodePoolAnswerMessage::Datatype = 0;
   
   
   void tarch::parallel::messages::NodePoolAnswerMessage::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //newWorker
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //newWorker
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      NodePoolAnswerMessage dummyNodePoolAnswerMessage[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessage[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessage[0]._persistentRecords._newWorker))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessage[1]._persistentRecords._newWorker))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &NodePoolAnswerMessage::Datatype );
      MPI_Type_commit( &NodePoolAnswerMessage::Datatype );
      
   }
   
   
   void tarch::parallel::messages::NodePoolAnswerMessage::shutdownDatatype() {
      MPI_Type_free( &NodePoolAnswerMessage::Datatype );
      
   }
   
   void tarch::parallel::messages::NodePoolAnswerMessage::send(int destination, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      #ifdef Asserts
      _senderRank = -1;
      #endif
      
      result = MPI_Isend(
         this, 1, Datatype, destination,
         tag, tarch::parallel::Node::getInstance().getCommunicator(),
         sendRequestHandle
      );
      if  (result!=MPI_SUCCESS) {
         std::ostringstream msg;
         msg << "was not able to send message tarch::parallel::messages::NodePoolAnswerMessage "
         << toString()
         << " to node " << destination
         << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "send(int)",msg.str() );
      }
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished send task for tarch::parallel::messages::NodePoolAnswerMessage "
            << toString()
            << " sent to node " << destination
            << " failed: " << tarch::parallel::MPIReturnValueToString(result);
            _log.error("send(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "tarch::parallel::messages::NodePoolAnswerMessage",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "tarch::parallel::messages::NodePoolAnswerMessage",
            "send(int)", destination
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      #ifdef Debug
      _log.debug("send(int,int)", "sent " + toString() );
      #endif
      
   }
   
   
   
   void tarch::parallel::messages::NodePoolAnswerMessage::receive(int source, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      result = MPI_Irecv(
         this, 1, Datatype, source, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), sendRequestHandle
      );
      if ( result != MPI_SUCCESS ) {
         std::ostringstream msg;
         msg << "failed to start to receive tarch::parallel::messages::NodePoolAnswerMessage from node "
         << source << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "receive(int)", msg.str() );
      }
      
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished receive task for tarch::parallel::messages::NodePoolAnswerMessage failed: "
            << tarch::parallel::MPIReturnValueToString(result);
            _log.error("receive(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "tarch::parallel::messages::NodePoolAnswerMessage",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "tarch::parallel::messages::NodePoolAnswerMessage",
            "receive(int)", source
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      
      _senderRank = status.MPI_SOURCE;
      #ifdef Debug
      _log.debug("receive(int,int)", "received " + toString() ); 
      #endif
      
   }
   
   
   
   bool tarch::parallel::messages::NodePoolAnswerMessage::isMessageInQueue(int tag) {
      MPI_Status status;
      int  flag        = 0;
      MPI_Iprobe(
         MPI_ANY_SOURCE, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), &flag, &status
      );
      if (flag) {
         int  messageCounter;
         MPI_Get_count(&status, Datatype, &messageCounter);
         return messageCounter > 0;
      }
      else return false;
      
   }
   
   int tarch::parallel::messages::NodePoolAnswerMessage::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


tarch::parallel::messages::NodePoolAnswerMessagePacked::PersistentRecords::PersistentRecords() {
   
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::PersistentRecords::PersistentRecords(const int& newWorker):
_newWorker(newWorker) {
   
}


int tarch::parallel::messages::NodePoolAnswerMessagePacked::PersistentRecords::getNewWorker() const {
   return _newWorker;
}



void tarch::parallel::messages::NodePoolAnswerMessagePacked::PersistentRecords::setNewWorker(const int& newWorker) {
   _newWorker = newWorker;
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::NodePoolAnswerMessagePacked() {
   
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::NodePoolAnswerMessagePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._newWorker) {
   
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::NodePoolAnswerMessagePacked(const int& newWorker):
_persistentRecords(newWorker) {
   
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::~NodePoolAnswerMessagePacked() { }


int tarch::parallel::messages::NodePoolAnswerMessagePacked::getNewWorker() const {
   return _persistentRecords._newWorker;
}



void tarch::parallel::messages::NodePoolAnswerMessagePacked::setNewWorker(const int& newWorker) {
   _persistentRecords._newWorker = newWorker;
}




std::string tarch::parallel::messages::NodePoolAnswerMessagePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void tarch::parallel::messages::NodePoolAnswerMessagePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "newWorker:" << getNewWorker();
   out <<  ")";
}


tarch::parallel::messages::NodePoolAnswerMessagePacked::PersistentRecords tarch::parallel::messages::NodePoolAnswerMessagePacked::getPersistentRecords() const {
   return _persistentRecords;
}

tarch::parallel::messages::NodePoolAnswerMessage tarch::parallel::messages::NodePoolAnswerMessagePacked::convert() const{
   return NodePoolAnswerMessage(
      getNewWorker()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log tarch::parallel::messages::NodePoolAnswerMessagePacked::_log( "tarch::parallel::messages::NodePoolAnswerMessagePacked" );
   
   MPI_Datatype tarch::parallel::messages::NodePoolAnswerMessagePacked::Datatype = 0;
   
   
   void tarch::parallel::messages::NodePoolAnswerMessagePacked::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //newWorker
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //newWorker
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      NodePoolAnswerMessagePacked dummyNodePoolAnswerMessagePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessagePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessagePacked[0]._persistentRecords._newWorker))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyNodePoolAnswerMessagePacked[1]._persistentRecords._newWorker))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &NodePoolAnswerMessagePacked::Datatype );
      MPI_Type_commit( &NodePoolAnswerMessagePacked::Datatype );
      
   }
   
   
   void tarch::parallel::messages::NodePoolAnswerMessagePacked::shutdownDatatype() {
      MPI_Type_free( &NodePoolAnswerMessagePacked::Datatype );
      
   }
   
   void tarch::parallel::messages::NodePoolAnswerMessagePacked::send(int destination, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      #ifdef Asserts
      _senderRank = -1;
      #endif
      
      result = MPI_Isend(
         this, 1, Datatype, destination,
         tag, tarch::parallel::Node::getInstance().getCommunicator(),
         sendRequestHandle
      );
      if  (result!=MPI_SUCCESS) {
         std::ostringstream msg;
         msg << "was not able to send message tarch::parallel::messages::NodePoolAnswerMessagePacked "
         << toString()
         << " to node " << destination
         << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "send(int)",msg.str() );
      }
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished send task for tarch::parallel::messages::NodePoolAnswerMessagePacked "
            << toString()
            << " sent to node " << destination
            << " failed: " << tarch::parallel::MPIReturnValueToString(result);
            _log.error("send(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "tarch::parallel::messages::NodePoolAnswerMessagePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "tarch::parallel::messages::NodePoolAnswerMessagePacked",
            "send(int)", destination
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      #ifdef Debug
      _log.debug("send(int,int)", "sent " + toString() );
      #endif
      
   }
   
   
   
   void tarch::parallel::messages::NodePoolAnswerMessagePacked::receive(int source, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      result = MPI_Irecv(
         this, 1, Datatype, source, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), sendRequestHandle
      );
      if ( result != MPI_SUCCESS ) {
         std::ostringstream msg;
         msg << "failed to start to receive tarch::parallel::messages::NodePoolAnswerMessagePacked from node "
         << source << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "receive(int)", msg.str() );
      }
      
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished receive task for tarch::parallel::messages::NodePoolAnswerMessagePacked failed: "
            << tarch::parallel::MPIReturnValueToString(result);
            _log.error("receive(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "tarch::parallel::messages::NodePoolAnswerMessagePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "tarch::parallel::messages::NodePoolAnswerMessagePacked",
            "receive(int)", source
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      
      _senderRank = status.MPI_SOURCE;
      #ifdef Debug
      _log.debug("receive(int,int)", "received " + toString() ); 
      #endif
      
   }
   
   
   
   bool tarch::parallel::messages::NodePoolAnswerMessagePacked::isMessageInQueue(int tag) {
      MPI_Status status;
      int  flag        = 0;
      MPI_Iprobe(
         MPI_ANY_SOURCE, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), &flag, &status
      );
      if (flag) {
         int  messageCounter;
         MPI_Get_count(&status, Datatype, &messageCounter);
         return messageCounter > 0;
      }
      else return false;
      
   }
   
   int tarch::parallel::messages::NodePoolAnswerMessagePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



