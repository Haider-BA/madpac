#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryState.h"

peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Action peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::GridConstructionMovieBatchJobRepositoryState() {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::GridConstructionMovieBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::GridConstructionMovieBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::~GridConstructionMovieBatchJobRepositoryState() { }


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Action peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterPerformOneRefinement: return "UseAdapterPerformOneRefinement";
      case UseAdapterPerformOneRefinementWithoutGridSnapshot: return "UseAdapterPerformOneRefinementWithoutGridSnapshot";
   }
   return "undefined";
}

std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterPerformOneRefinement=3,UseAdapterPerformOneRefinementWithoutGridSnapshot=4)";
}


std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::PersistentRecords peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::convert() const{
   return GridConstructionMovieBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::_log( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::initDatatype() {
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
      GridConstructionMovieBatchJobRepositoryState dummyGridConstructionMovieBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &GridConstructionMovieBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &GridConstructionMovieBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &GridConstructionMovieBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState "
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
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState",
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
   
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState failed: "
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
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Action peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::GridConstructionMovieBatchJobRepositoryStatePacked() {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::GridConstructionMovieBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::GridConstructionMovieBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::~GridConstructionMovieBatchJobRepositoryStatePacked() { }


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Action peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::toString(param);
}

std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::PersistentRecords peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::convert() const{
   return GridConstructionMovieBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::_log( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::initDatatype() {
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
      GridConstructionMovieBatchJobRepositoryStatePacked dummyGridConstructionMovieBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyGridConstructionMovieBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &GridConstructionMovieBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &GridConstructionMovieBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &GridConstructionMovieBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked "
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
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



