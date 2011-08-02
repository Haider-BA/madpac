#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryState.h"

peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Action peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::ForwardBatchJobRepositoryState() {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::ForwardBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::ForwardBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::~ForwardBatchJobRepositoryState() { }


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Action peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupExperiment: return "UseAdapterSetupExperiment";
      case UseAdapterSetupExperimentAndPlot: return "UseAdapterSetupExperimentAndPlot";
      case UseAdapterPerformExplitEulerTimeStep: return "UseAdapterPerformExplitEulerTimeStep";
      case UseAdapterPerformExplitEulerTimeStepAndPlot: return "UseAdapterPerformExplitEulerTimeStepAndPlot";
      case UseAdapterPlotSolution: return "UseAdapterPlotSolution";
      case UseAdapterApplyRefineDeleteCriterion: return "UseAdapterApplyRefineDeleteCriterion";
   }
   return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupExperiment=3,UseAdapterSetupExperimentAndPlot=4,UseAdapterPerformExplitEulerTimeStep=5,UseAdapterPerformExplitEulerTimeStepAndPlot=6,UseAdapterPlotSolution=7,UseAdapterApplyRefineDeleteCriterion=8)";
}


std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::PersistentRecords peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::convert() const{
   return ForwardBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::_log( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::initDatatype() {
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
      ForwardBatchJobRepositoryState dummyForwardBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForwardBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &ForwardBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &ForwardBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState "
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
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState",
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
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState failed: "
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
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Action peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::ForwardBatchJobRepositoryStatePacked() {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::ForwardBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::ForwardBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::~ForwardBatchJobRepositoryStatePacked() { }


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Action peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::convert() const{
   return ForwardBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::_log( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::initDatatype() {
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
      ForwardBatchJobRepositoryStatePacked dummyForwardBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForwardBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForwardBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &ForwardBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &ForwardBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked "
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
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



