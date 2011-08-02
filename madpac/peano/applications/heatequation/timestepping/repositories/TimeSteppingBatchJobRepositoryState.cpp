#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryState.h"

peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Action peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::TimeSteppingBatchJobRepositoryState() {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::TimeSteppingBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::TimeSteppingBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::~TimeSteppingBatchJobRepositoryState() { }


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Action peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterSetupExperiment: return "UseAdapterSetupExperiment";
      case UseAdapterSetupExperimentAndPlot: return "UseAdapterSetupExperimentAndPlot";
      case UseAdapterPerformExplitEulerTimeStep: return "UseAdapterPerformExplitEulerTimeStep";
      case UseAdapterPerformImplicitTimeStep: return "UseAdapterPerformImplicitTimeStep";
      case UseAdapterPerformImplicitTimeStepAndPlot: return "UseAdapterPerformImplicitTimeStepAndPlot";
      case UseAdapterComputeImplicitSolutionWithJacobi: return "UseAdapterComputeImplicitSolutionWithJacobi";
      case UseAdapterPerformExplitEulerTimeStepAndPlot: return "UseAdapterPerformExplitEulerTimeStepAndPlot";
      case UseAdapterPlotSolution: return "UseAdapterPlotSolution";
      case UseAdapterPlotGrid: return "UseAdapterPlotGrid";
      case UseAdapterSmooth: return "UseAdapterSmooth";
      case UseAdapterCoarse: return "UseAdapterCoarse";
      case UseAdapterProlong: return "UseAdapterProlong";
      case UseAdapterApplyRefineDeleteCriterion: return "UseAdapterApplyRefineDeleteCriterion";
      case UseAdapterSetupOneLevelOfExperiment: return "UseAdapterSetupOneLevelOfExperiment";
      case UseAdapterProbeSolution: return "UseAdapterProbeSolution";
   }
   return "undefined";
}

std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterSetupExperiment=3,UseAdapterSetupExperimentAndPlot=4,UseAdapterPerformExplitEulerTimeStep=5,UseAdapterPerformImplicitTimeStep=6,UseAdapterPerformImplicitTimeStepAndPlot=7,UseAdapterComputeImplicitSolutionWithJacobi=8,UseAdapterPerformExplitEulerTimeStepAndPlot=9,UseAdapterPlotSolution=10,UseAdapterPlotGrid=11,UseAdapterSmooth=12,UseAdapterCoarse=13,UseAdapterProlong=14,UseAdapterApplyRefineDeleteCriterion=15,UseAdapterSetupOneLevelOfExperiment=16,UseAdapterProbeSolution=17)";
}


std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::PersistentRecords peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::convert() const{
   return TimeSteppingBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::_log( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::initDatatype() {
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
      TimeSteppingBatchJobRepositoryState dummyTimeSteppingBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TimeSteppingBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &TimeSteppingBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &TimeSteppingBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState "
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
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState",
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
   
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState failed: "
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
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Action peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::TimeSteppingBatchJobRepositoryStatePacked() {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::TimeSteppingBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::TimeSteppingBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::~TimeSteppingBatchJobRepositoryStatePacked() { }


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Action peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::toString(param);
}

std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::PersistentRecords peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::convert() const{
   return TimeSteppingBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::_log( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::initDatatype() {
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
      TimeSteppingBatchJobRepositoryStatePacked dummyTimeSteppingBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTimeSteppingBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TimeSteppingBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &TimeSteppingBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &TimeSteppingBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked "
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
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



