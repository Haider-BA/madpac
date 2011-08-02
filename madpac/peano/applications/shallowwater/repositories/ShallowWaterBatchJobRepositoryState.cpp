#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryState.h"

peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Action peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::ShallowWaterBatchJobRepositoryState() {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::ShallowWaterBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::ShallowWaterBatchJobRepositoryState(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::~ShallowWaterBatchJobRepositoryState() { }


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Action peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupExperiment: return "UseAdapterSetupExperiment";
      case UseAdapterSetupExperimentAndPlotGrid: return "UseAdapterSetupExperimentAndPlotGrid";
      case UseAdapterSetupExperimentAndPlotStartSolution: return "UseAdapterSetupExperimentAndPlotStartSolution";
      case UseAdapterGodunovMethod: return "UseAdapterGodunovMethod";
      case UseAdapterGodunovMethodAndPlotSolution: return "UseAdapterGodunovMethodAndPlotSolution";
      case UseAdapterPlotSolution: return "UseAdapterPlotSolution";
   }
   return "undefined";
}

std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupExperiment=3,UseAdapterSetupExperimentAndPlotGrid=4,UseAdapterSetupExperimentAndPlotStartSolution=5,UseAdapterGodunovMethod=6,UseAdapterGodunovMethodAndPlotSolution=7,UseAdapterPlotSolution=8)";
}


std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::PersistentRecords peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::convert() const{
   return ShallowWaterBatchJobRepositoryStatePacked(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::_log( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::initDatatype() {
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
      ShallowWaterBatchJobRepositoryState dummyShallowWaterBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ShallowWaterBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &ShallowWaterBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &ShallowWaterBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState "
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
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState",
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
   
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState failed: "
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
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Action peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::ShallowWaterBatchJobRepositoryStatePacked() {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::ShallowWaterBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::ShallowWaterBatchJobRepositoryStatePacked(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::~ShallowWaterBatchJobRepositoryStatePacked() { }


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Action peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::toString(param);
}

std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::PersistentRecords peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::convert() const{
   return ShallowWaterBatchJobRepositoryState(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::_log( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::initDatatype() {
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
      ShallowWaterBatchJobRepositoryStatePacked dummyShallowWaterBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyShallowWaterBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ShallowWaterBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &ShallowWaterBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &ShallowWaterBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked "
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
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



