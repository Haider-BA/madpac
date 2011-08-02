#include "peano/applications/pic/demo2/records/RegularGridCell.h"

peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::PersistentRecords(const double& p, const bool& isInside):
_p(p),
_isInside(isInside) {
   
}


double peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::setP(const double& p) {
   _p = p;
}



bool peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::pic::demo2::records::RegularGridCell::RegularGridCell() {
   
}


peano::applications::pic::demo2::records::RegularGridCell::RegularGridCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._p, persistentRecords._isInside) {
   
}


peano::applications::pic::demo2::records::RegularGridCell::RegularGridCell(const double& p, const bool& isInside):
_persistentRecords(p, isInside) {
   
}


peano::applications::pic::demo2::records::RegularGridCell::~RegularGridCell() { }


double peano::applications::pic::demo2::records::RegularGridCell::getP() const {
   return _persistentRecords._p;
}



void peano::applications::pic::demo2::records::RegularGridCell::setP(const double& p) {
   _persistentRecords._p = p;
}



bool peano::applications::pic::demo2::records::RegularGridCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::pic::demo2::records::RegularGridCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}




std::string peano::applications::pic::demo2::records::RegularGridCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridCell::toString (std::ostream& out) const {
   out << "("; 
   out << "p:" << getP();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridCell::PersistentRecords peano::applications::pic::demo2::records::RegularGridCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridCellPacked peano::applications::pic::demo2::records::RegularGridCell::convert() const{
   return RegularGridCellPacked(
      getP(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::records::RegularGridCell::_log( "peano::applications::pic::demo2::records::RegularGridCell" );
   
   MPI_Datatype peano::applications::pic::demo2::records::RegularGridCell::Datatype = 0;
   
   
   void peano::applications::pic::demo2::records::RegularGridCell::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridCell dummyRegularGridCell[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridCell[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridCell::Datatype );
      MPI_Type_commit( &RegularGridCell::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::records::RegularGridCell::shutdownDatatype() {
      MPI_Type_free( &RegularGridCell::Datatype );
      
   }
   
   void peano::applications::pic::demo2::records::RegularGridCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridCell "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridCell "
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
            "peano::applications::pic::demo2::records::RegularGridCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridCell",
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
   
   
   
   void peano::applications::pic::demo2::records::RegularGridCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridCell from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridCell failed: "
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
            "peano::applications::pic::demo2::records::RegularGridCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridCell",
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
   
   
   
   bool peano::applications::pic::demo2::records::RegularGridCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::records::RegularGridCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::PersistentRecords(const double& p, const bool& isInside):
_p(p) {
   setIsInside(isInside);
   assertion((1 < (8 * sizeof(long int))));
   
}


double peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::setP(const double& p) {
   _p = p;
}



bool peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::pic::demo2::records::RegularGridCellPacked::RegularGridCellPacked() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::pic::demo2::records::RegularGridCellPacked::RegularGridCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._p, persistentRecords.getIsInside()) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::pic::demo2::records::RegularGridCellPacked::RegularGridCellPacked(const double& p, const bool& isInside):
_persistentRecords(p, isInside) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::pic::demo2::records::RegularGridCellPacked::~RegularGridCellPacked() { }


double peano::applications::pic::demo2::records::RegularGridCellPacked::getP() const {
   return _persistentRecords._p;
}



void peano::applications::pic::demo2::records::RegularGridCellPacked::setP(const double& p) {
   _persistentRecords._p = p;
}



bool peano::applications::pic::demo2::records::RegularGridCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::pic::demo2::records::RegularGridCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::pic::demo2::records::RegularGridCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridCellPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "p:" << getP();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridCellPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridCell peano::applications::pic::demo2::records::RegularGridCellPacked::convert() const{
   return RegularGridCell(
      getP(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::records::RegularGridCellPacked::_log( "peano::applications::pic::demo2::records::RegularGridCellPacked" );
   
   MPI_Datatype peano::applications::pic::demo2::records::RegularGridCellPacked::Datatype = 0;
   
   
   void peano::applications::pic::demo2::records::RegularGridCellPacked::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridCellPacked dummyRegularGridCellPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridCellPacked[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridCellPacked::Datatype );
      MPI_Type_commit( &RegularGridCellPacked::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::records::RegularGridCellPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridCellPacked::Datatype );
      
   }
   
   void peano::applications::pic::demo2::records::RegularGridCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridCellPacked "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridCellPacked "
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
            "peano::applications::pic::demo2::records::RegularGridCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridCellPacked",
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
   
   
   
   void peano::applications::pic::demo2::records::RegularGridCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridCellPacked failed: "
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
            "peano::applications::pic::demo2::records::RegularGridCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridCellPacked",
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
   
   
   
   bool peano::applications::pic::demo2::records::RegularGridCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::records::RegularGridCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



