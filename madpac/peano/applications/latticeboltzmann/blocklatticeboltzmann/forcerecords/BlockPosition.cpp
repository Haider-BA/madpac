#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/forcerecords/BlockPosition.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& blockPosition):
_blockPosition(blockPosition) {
   
}


tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::PersistentRecords::getBlockPosition() const {
   return _blockPosition;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::PersistentRecords::setBlockPosition(const tarch::la::Vector<DIMENSIONS,double>& blockPosition) {
   _blockPosition = (blockPosition);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::BlockPosition() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::BlockPosition(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._blockPosition) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::BlockPosition(const tarch::la::Vector<DIMENSIONS,double>& blockPosition):
_persistentRecords(blockPosition) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::~BlockPosition() { }


tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::getBlockPosition() const {
   return _persistentRecords._blockPosition;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::setBlockPosition(const tarch::la::Vector<DIMENSIONS,double>& blockPosition) {
   _persistentRecords._blockPosition = (blockPosition);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::getBlockPosition(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._blockPosition[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::setBlockPosition(int elementIndex, const double& blockPosition) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._blockPosition[elementIndex]= blockPosition;
   
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::toString (std::ostream& out) const {
   out << "("; 
   out << "_blockPosition:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBlockPosition(i) << ",";
   }
   out << getBlockPosition(DIMENSIONS-1) << "]";
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::convert() const{
   return BlockPositionPacked(
      getBlockPosition()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_blockPosition
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //_blockPosition
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      BlockPosition dummyBlockPosition[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyBlockPosition[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyBlockPosition[0]._persistentRecords._blockPosition[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyBlockPosition[1]._persistentRecords._blockPosition[0])), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &BlockPosition::Datatype );
      MPI_Type_commit( &BlockPosition::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::shutdownDatatype() {
      MPI_Type_free( &BlockPosition::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& blockPosition):
_blockPosition(blockPosition) {
   
}


tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::PersistentRecords::getBlockPosition() const {
   return _blockPosition;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::PersistentRecords::setBlockPosition(const tarch::la::Vector<DIMENSIONS,double>& blockPosition) {
   _blockPosition = (blockPosition);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::BlockPositionPacked() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::BlockPositionPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._blockPosition) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::BlockPositionPacked(const tarch::la::Vector<DIMENSIONS,double>& blockPosition):
_persistentRecords(blockPosition) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::~BlockPositionPacked() { }


tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::getBlockPosition() const {
   return _persistentRecords._blockPosition;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::setBlockPosition(const tarch::la::Vector<DIMENSIONS,double>& blockPosition) {
   _persistentRecords._blockPosition = (blockPosition);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::getBlockPosition(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._blockPosition[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::setBlockPosition(int elementIndex, const double& blockPosition) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._blockPosition[elementIndex]= blockPosition;
   
}




std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "_blockPosition:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBlockPosition(i) << ",";
   }
   out << getBlockPosition(DIMENSIONS-1) << "]";
   out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::convert() const{
   return BlockPosition(
      getBlockPosition()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::initDatatype() {
      const int Attributes = 2;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_blockPosition
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //_blockPosition
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      BlockPositionPacked dummyBlockPositionPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyBlockPositionPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyBlockPositionPacked[0]._persistentRecords._blockPosition[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyBlockPositionPacked[1]._persistentRecords._blockPosition[0])), 		&disp[1] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &BlockPositionPacked::Datatype );
      MPI_Type_commit( &BlockPositionPacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::shutdownDatatype() {
      MPI_Type_free( &BlockPositionPacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPositionPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



