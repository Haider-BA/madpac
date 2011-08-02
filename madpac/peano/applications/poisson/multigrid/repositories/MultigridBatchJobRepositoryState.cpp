#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryState.h"

peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Action peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::MultigridBatchJobRepositoryState() {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::MultigridBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::MultigridBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::~MultigridBatchJobRepositoryState() { }


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Action peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupExperiment: return "UseAdapterSetupExperiment";
      case UseAdapterSetupExperimentAndPlotGrid: return "UseAdapterSetupExperimentAndPlotGrid";
      case UseAdapterSetupExperimentAndPlotStartSolution: return "UseAdapterSetupExperimentAndPlotStartSolution";
      case UseAdapterSmoothAndComputeGalerkinCoarseGridOperator: return "UseAdapterSmoothAndComputeGalerkinCoarseGridOperator";
      case UseAdapterPlotSolution: return "UseAdapterPlotSolution";
   }
   return "undefined";
}

std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupExperiment=3,UseAdapterSetupExperimentAndPlotGrid=4,UseAdapterSetupExperimentAndPlotStartSolution=5,UseAdapterSmoothAndComputeGalerkinCoarseGridOperator=6,UseAdapterPlotSolution=7)";
}


std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::PersistentRecords peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::convert() const{
   return MultigridBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::_log( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::initDatatype() {
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
      MultigridBatchJobRepositoryState dummyMultigridBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &MultigridBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &MultigridBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &MultigridBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState "
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
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState",
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
   
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState failed: "
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
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Action peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::MultigridBatchJobRepositoryStatePacked() {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::MultigridBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::MultigridBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::~MultigridBatchJobRepositoryStatePacked() { }


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Action peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::toString(param);
}

std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::PersistentRecords peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::convert() const{
   return MultigridBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::_log( "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::initDatatype() {
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
      MultigridBatchJobRepositoryStatePacked dummyMultigridBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyMultigridBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &MultigridBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &MultigridBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &MultigridBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked "
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
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



