#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryState.h"

peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Action peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PICBatchJobRepositoryState() {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PICBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PICBatchJobRepositoryState(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::~PICBatchJobRepositoryState() { }


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Action peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupExperiment: return "UseAdapterSetupExperiment";
      case UseAdapterSetupExperimentAndPlot: return "UseAdapterSetupExperimentAndPlot";
   }
   return "undefined";
}

std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupExperiment=3,UseAdapterSetupExperimentAndPlot=4)";
}


std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::PersistentRecords peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::convert() const{
   return PICBatchJobRepositoryStatePacked(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::_log( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //action
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //action
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      PICBatchJobRepositoryState dummyPICBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PICBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &PICBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &PICBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState "
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
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState",
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
   
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState failed: "
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
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Action peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PICBatchJobRepositoryStatePacked() {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PICBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PICBatchJobRepositoryStatePacked(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::~PICBatchJobRepositoryStatePacked() { }


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Action peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::toString(param);
}

std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::PersistentRecords peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::convert() const{
   return PICBatchJobRepositoryState(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::_log( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //action
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //action
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      PICBatchJobRepositoryStatePacked dummyPICBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPICBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PICBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &PICBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &PICBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked "
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
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::repositories::PICBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



