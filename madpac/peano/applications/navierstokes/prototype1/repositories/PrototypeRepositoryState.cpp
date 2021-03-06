#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryState.h"

peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Action peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PrototypeRepositoryState() {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PrototypeRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PrototypeRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::~PrototypeRepositoryState() { }


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Action peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterInitialiseScenario: return "UseAdapterInitialiseScenario";
      case UseAdapterMergeA: return "UseAdapterMergeA";
      case UseAdapterCalculateF: return "UseAdapterCalculateF";
      case UseAdapterCalculatePPERHS: return "UseAdapterCalculatePPERHS";
      case UseAdapterGaussSeidelForEnhancedDivFree: return "UseAdapterGaussSeidelForEnhancedDivFree";
      case UseAdapterUpdateVelocity: return "UseAdapterUpdateVelocity";
      case UseAdapterPlotSolutionVTK: return "UseAdapterPlotSolutionVTK";
      case UseAdapterPlotRegularSolutionVTK: return "UseAdapterPlotRegularSolutionVTK";
      case UseAdapterUpdateScenario: return "UseAdapterUpdateScenario";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterInitialiseScenario=3,UseAdapterMergeA=4,UseAdapterCalculateF=5,UseAdapterCalculatePPERHS=6,UseAdapterGaussSeidelForEnhancedDivFree=7,UseAdapterUpdateVelocity=8,UseAdapterPlotSolutionVTK=9,UseAdapterPlotRegularSolutionVTK=10,UseAdapterUpdateScenario=11)";
}


std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::PersistentRecords peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::convert() const{
   return PrototypeRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::_log( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::initDatatype() {
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
      PrototypeRepositoryState dummyPrototypeRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PrototypeRepositoryState::Datatype );
      MPI_Type_commit( &PrototypeRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::shutdownDatatype() {
      MPI_Type_free( &PrototypeRepositoryState::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState "
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
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState",
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
   
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState failed: "
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
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Action peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PrototypeRepositoryStatePacked() {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PrototypeRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PrototypeRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::~PrototypeRepositoryStatePacked() { }


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Action peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::toString(param);
}

std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::getActionMapping() {
   return peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::getActionMapping();
}



std::string peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::PersistentRecords peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::convert() const{
   return PrototypeRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::_log( "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::initDatatype() {
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
      PrototypeRepositoryStatePacked dummyPrototypeRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyPrototypeRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &PrototypeRepositoryStatePacked::Datatype );
      MPI_Type_commit( &PrototypeRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &PrototypeRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked "
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
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked failed: "
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
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



