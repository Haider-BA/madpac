#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/forcerecords/SendForce.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::PersistentRecords::PersistentRecords(const short int& sendForce):
_sendForce(sendForce) {
   
}


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::PersistentRecords::getSendForce() const {
   return _sendForce;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::PersistentRecords::setSendForce(const short int& sendForce) {
   _sendForce = sendForce;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::SendForce() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::SendForce(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._sendForce) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::SendForce(const short int& sendForce):
_persistentRecords(sendForce) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::~SendForce() { }


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::getSendForce() const {
   return _persistentRecords._sendForce;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::setSendForce(const short int& sendForce) {
   _persistentRecords._sendForce = sendForce;
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::toString (std::ostream& out) const {
   out << "("; 
   out << "_sendForce:" << getSendForce();
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::convert() const{
   return SendForcePacked(
      getSendForce()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_SHORT,		 //_sendForce
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //_sendForce
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SendForce dummySendForce[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForce[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForce[0]._persistentRecords._sendForce))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForce[1]._persistentRecords._sendForce))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SendForce::Datatype );
      MPI_Type_commit( &SendForce::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::shutdownDatatype() {
      MPI_Type_free( &SendForce::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::PersistentRecords::PersistentRecords(const short int& sendForce):
_sendForce(sendForce) {
   
}


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::PersistentRecords::getSendForce() const {
   return _sendForce;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::PersistentRecords::setSendForce(const short int& sendForce) {
   _sendForce = sendForce;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::SendForcePacked() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::SendForcePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._sendForce) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::SendForcePacked(const short int& sendForce):
_persistentRecords(sendForce) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::~SendForcePacked() { }


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::getSendForce() const {
   return _persistentRecords._sendForce;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::setSendForce(const short int& sendForce) {
   _persistentRecords._sendForce = sendForce;
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "_sendForce:" << getSendForce();
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::convert() const{
   return SendForce(
      getSendForce()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_SHORT,		 //_sendForce
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //_sendForce
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SendForcePacked dummySendForcePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForcePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForcePacked[0]._persistentRecords._sendForce))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySendForcePacked[1]._persistentRecords._sendForce))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SendForcePacked::Datatype );
      MPI_Type_commit( &SendForcePacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::shutdownDatatype() {
      MPI_Type_free( &SendForcePacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForcePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



