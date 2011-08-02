#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryState.h"

peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Action peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::LBFBatchJobRepositoryState() {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::LBFBatchJobRepositoryState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::LBFBatchJobRepositoryState(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::~LBFBatchJobRepositoryState() { }


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Action peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::toString(const Action& param) {
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
      case UseAdapterMoveParticles: return "UseAdapterMoveParticles";
      case UseAdapterSwitchFromLB2NSE: return "UseAdapterSwitchFromLB2NSE";
      case UseAdapterExtractDataNSE2LB: return "UseAdapterExtractDataNSE2LB";
      case UseAdapterCorrectDensityAndComputeEqPDF4LB: return "UseAdapterCorrectDensityAndComputeEqPDF4LB";
      case UseAdapterRegularBlockSolverAdapter: return "UseAdapterRegularBlockSolverAdapter";
      case UseAdapterInitialiseSpacetreeGridAdapter: return "UseAdapterInitialiseSpacetreeGridAdapter";
      case UseAdapterBlockCCAOutputAdapter: return "UseAdapterBlockCCAOutputAdapter";
      case UseAdapterDynamicRefinementForSpacetreeGridAdapter: return "UseAdapterDynamicRefinementForSpacetreeGridAdapter";
      case UseAdapterBlockVTKOutputAdapter: return "UseAdapterBlockVTKOutputAdapter";
      case UseAdapterRegularBlockSolverAndVTKOutputAdapter: return "UseAdapterRegularBlockSolverAndVTKOutputAdapter";
      case UseAdapterTraceNSEData: return "UseAdapterTraceNSEData";
      case UseAdapterTraceLBData: return "UseAdapterTraceLBData";
   }
   return "undefined";
}

std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getActionMapping() {
   return "Action(WriteCheckpoint=0,ReadCheckpoint=1,Terminate=2,UseAdapterInitialize=3,UseAdapterInitializeAndSetBoundary=4,UseAdapterPlotGrid=5,UseAdapterControlTimeStep=6,UseAdapterSetVelocitiesBoundary=7,UseAdapterSetScenarioBoundary=8,UseAdapterComputeVelocitiesDerivatives=9,UseAdapterComputeRightHandSide=10,UseAdapterSetZeroPressureBoundary=11,UseAdapterSetPressureBoundary=12,UseAdapterSORStep=13,UseAdapterComputeResidualNorm=14,UseAdapterComputeVelocities=15,UseAdapterPlotSolution=16,UseAdapterMoveParticles=17,UseAdapterSwitchFromLB2NSE=18,UseAdapterExtractDataNSE2LB=19,UseAdapterCorrectDensityAndComputeEqPDF4LB=20,UseAdapterRegularBlockSolverAdapter=21,UseAdapterInitialiseSpacetreeGridAdapter=22,UseAdapterBlockCCAOutputAdapter=23,UseAdapterDynamicRefinementForSpacetreeGridAdapter=24,UseAdapterBlockVTKOutputAdapter=25,UseAdapterRegularBlockSolverAndVTKOutputAdapter=26,UseAdapterTraceNSEData=27,UseAdapterTraceLBData=28)";
}


std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::PersistentRecords peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::convert() const{
   return LBFBatchJobRepositoryStatePacked(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::_log( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState" );
   
   MPI_Datatype peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::initDatatype() {
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
      LBFBatchJobRepositoryState dummyLBFBatchJobRepositoryState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryState[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryState[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryState[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &LBFBatchJobRepositoryState::Datatype );
      MPI_Type_commit( &LBFBatchJobRepositoryState::Datatype );
      
   }
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::shutdownDatatype() {
      MPI_Type_free( &LBFBatchJobRepositoryState::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState "
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
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState",
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
   
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState failed: "
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
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState",
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
   
   
   
   bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::PersistentRecords(const Action& action, const bool& reduceState):
_action(action),
_reduceState(reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Action peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::getAction() const {
   return _action;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::setAction(const Action& action) {
   _action = action;
}



bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::getReduceState() const {
   return _reduceState;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords::setReduceState(const bool& reduceState) {
   _reduceState = reduceState;
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::LBFBatchJobRepositoryStatePacked() {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::LBFBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._action, persistentRecords._reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::LBFBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState):
_persistentRecords(action, reduceState) {
   
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::~LBFBatchJobRepositoryStatePacked() { }


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Action peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::getAction() const {
   return _persistentRecords._action;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::setAction(const Action& action) {
   _persistentRecords._action = action;
}



bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::getReduceState() const {
   return _persistentRecords._reduceState;
}



void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::setReduceState(const bool& reduceState) {
   _persistentRecords._reduceState = reduceState;
}


std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::toString(const Action& param) {
   return peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::toString(param);
}

std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::getActionMapping() {
   return peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::getActionMapping();
}



std::string peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "action:" << toString(getAction());
   out << ",";
   out << "reduceState:" << getReduceState();
   out <<  ")";
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::PersistentRecords peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::convert() const{
   return LBFBatchJobRepositoryState(
      getAction(),
      getReduceState()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::_log( "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked" );
   
   MPI_Datatype peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::initDatatype() {
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
      LBFBatchJobRepositoryStatePacked dummyLBFBatchJobRepositoryStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryStatePacked[0]._persistentRecords._action))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryStatePacked[0]._persistentRecords._reduceState))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyLBFBatchJobRepositoryStatePacked[1]._persistentRecords._action))), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &LBFBatchJobRepositoryStatePacked::Datatype );
      MPI_Type_commit( &LBFBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::shutdownDatatype() {
      MPI_Type_free( &LBFBatchJobRepositoryStatePacked::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked "
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
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked",
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
   
   
   
   void peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked failed: "
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
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked",
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
   
   
   
   bool peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



