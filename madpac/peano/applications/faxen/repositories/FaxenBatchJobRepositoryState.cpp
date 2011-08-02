#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryState.h"

peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Action peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::FaxenBatchJobRepositoryState() {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::FaxenBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::FaxenBatchJobRepositoryState(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::~FaxenBatchJobRepositoryState() { }


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Action peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::toString(const Action& param) {
   switch (param) {
      case WriteCheckpoint: return "WriteCheckpoint";
      case ReadCheckpoint: return "ReadCheckpoint";
      case Terminate: return "Terminate";
      case UseAdapterInitialize: return "UseAdapterInitialize";
      case UseAdapterInitializeAndSetBoundary: return "UseAdapterInitializeAndSetBoundary";
      case UseAdapterPlotGrid: return "UseAdapterPlotGrid";
      case UseAdapterControlTimeStep: return "UseAdapterControlTimeStep";
      case UseAdapterSetVelocitiesBoundary: return "UseAdapterSetVelocitiesBoundary";
      case UseAdapterSetScenarioBoundary: return "UseAdapterSetScenarioBoundary";
      case UseAdapterComputeVelocitiesDerivatives: return "UseAdapterComputeVelocitiesDerivatives";
      case UseAdapterComputeRightHandSide: return "UseAdapterComputeRightHandSide";
      case UseAdapterSetZeroPressureBoundary: return "UseAdapterSetZeroPressureBoundary";
      case UseAdapterSetPressureBoundary: return "UseAdapterSetPressureBoundary";
      case UseAdapterSORStep: return "UseAdapterSORStep";
      case UseAdapterComputeResidualNorm: return "UseAdapterComputeResidualNorm";
      case UseAdapterComputeVelocities: return "UseAdapterComputeVelocities";
      case UseAdapterPlotSolution: return "UseAdapterPlotSolution";
   }
   return "undefined";
}

std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterInitialize=3,UseAdapterInitializeAndSetBoundary=4,UseAdapterPlotGrid=5,UseAdapterControlTimeStep=6,UseAdapterSetVelocitiesBoundary=7,UseAdapterSetScenarioBoundary=8,UseAdapterComputeVelocitiesDerivatives=9,UseAdapterComputeRightHandSide=10,UseAdapterSetZeroPressureBoundary=11,UseAdapterSetPressureBoundary=12,UseAdapterSORStep=13,UseAdapterComputeResidualNorm=14,UseAdapterComputeVelocities=15,UseAdapterPlotSolution=16)";
}


std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::PersistentRecords peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::convert() const{
   return FaxenBatchJobRepositoryStatePacked(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::_log( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::initDatatype() {
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
      FaxenBatchJobRepositoryState dummyFaxenBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &FaxenBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &FaxenBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &FaxenBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::repositories::FaxenBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::faxen::repositories::FaxenBatchJobRepositoryState "
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
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryState",
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
   
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::repositories::FaxenBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::repositories::FaxenBatchJobRepositoryState failed: "
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
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action):
_action(action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Action peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::FaxenBatchJobRepositoryStatePacked() {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::FaxenBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::FaxenBatchJobRepositoryStatePacked(const Action& action):
_persistentRecords(action) {
   
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::~FaxenBatchJobRepositoryStatePacked() { }


peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Action peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}


std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::toString(param);
}

std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out <<  ")";
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::PersistentRecords peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::repositories::FaxenBatchJobRepositoryState peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::convert() const{
   return FaxenBatchJobRepositoryState(
      getAction()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::_log( "peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::initDatatype() {
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
      FaxenBatchJobRepositoryStatePacked dummyFaxenBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyFaxenBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &FaxenBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &FaxenBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &FaxenBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked "
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
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



