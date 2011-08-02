#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/RegularGridBlockCell.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::PersistentRecords::PersistentRecords(const bool& isInside):
_isInside(isInside) {
   
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::RegularGridBlockCell() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::RegularGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::RegularGridBlockCell(const bool& isInside):
_persistentRecords(isInside) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::~RegularGridBlockCell() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::toString (std::ostream& out) const {
   out << "("; 
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::convert() const{
   return RegularGridBlockCellPacked(
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockCell dummyRegularGridBlockCell[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockCell[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockCell::Datatype );
      MPI_Type_commit( &RegularGridBlockCell::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockCell::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::PersistentRecords::PersistentRecords(const bool& isInside) {
   setIsInside(isInside);
   assertion((1 < (8 * sizeof(short int))));
   
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked(const bool& isInside):
_persistentRecords(isInside) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::~RegularGridBlockCellPacked() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCell peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::convert() const{
   return RegularGridBlockCell(
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockCellPacked dummyRegularGridBlockCellPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockCellPacked[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockCellPacked::Datatype );
      MPI_Type_commit( &RegularGridBlockCellPacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockCellPacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



