#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryState.h"

peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Action peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PuregridBatchJobRepositoryState() {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PuregridBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PuregridBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::~PuregridBatchJobRepositoryState() { }


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Action peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupGrid: return "UseAdapterSetupGrid";
   }
   return "undefined";
}

std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupGrid=3)";
}


std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::PersistentRecords peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::convert() const{
   return PuregridBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::_log( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //action
         MPI_CHAR,		 //reduceState
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //action
         1,		 //reduceState
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      PuregridBatchJobRepositoryState dummyPuregridBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PuregridBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &PuregridBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &PuregridBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState "
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
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState",
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
   
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState failed: "
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
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Action peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PuregridBatchJobRepositoryStatePacked() {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PuregridBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PuregridBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::~PuregridBatchJobRepositoryStatePacked() { }


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Action peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::toString(param);
}

std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::PersistentRecords peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::convert() const{
   return PuregridBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::_log( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //action
         MPI_CHAR,		 //reduceState
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //action
         1,		 //reduceState
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      PuregridBatchJobRepositoryStatePacked dummyPuregridBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPuregridBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PuregridBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &PuregridBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &PuregridBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked "
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
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



