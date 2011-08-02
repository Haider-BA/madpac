#include "peano/applications/shallowwater/records/RegularGridCell.h"

peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::PersistentRecords(const double& heightWater, const double& heightSeabed, const double& momentumX, const double& momentumY, const bool& isInside):
_heightWater(heightWater),
_heightSeabed(heightSeabed),
_momentumX(momentumX),
_momentumY(momentumY),
_isInside(isInside) {
   
}


double peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::getHeightWater() const {
   return _heightWater;
}



void peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::setHeightWater(const double& heightWater) {
   _heightWater = heightWater;
}



double peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::getHeightSeabed() const {
   return _heightSeabed;
}



void peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::setHeightSeabed(const double& heightSeabed) {
   _heightSeabed = heightSeabed;
}



double peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::getMomentumX() const {
   return _momentumX;
}



void peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::setMomentumX(const double& momentumX) {
   _momentumX = momentumX;
}



double peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::getMomentumY() const {
   return _momentumY;
}



void peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::setMomentumY(const double& momentumY) {
   _momentumY = momentumY;
}



bool peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::shallowwater::records::RegularGridCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::shallowwater::records::RegularGridCell::RegularGridCell() {
   
}


peano::applications::shallowwater::records::RegularGridCell::RegularGridCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWater, persistentRecords._heightSeabed, persistentRecords._momentumX, persistentRecords._momentumY, persistentRecords._isInside) {
   
}


peano::applications::shallowwater::records::RegularGridCell::RegularGridCell(const double& heightWater, const double& heightSeabed, const double& momentumX, const double& momentumY, const bool& isInside):
_persistentRecords(heightWater, heightSeabed, momentumX, momentumY, isInside) {
   
}


peano::applications::shallowwater::records::RegularGridCell::~RegularGridCell() { }


double peano::applications::shallowwater::records::RegularGridCell::getHeightWater() const {
   return _persistentRecords._heightWater;
}



void peano::applications::shallowwater::records::RegularGridCell::setHeightWater(const double& heightWater) {
   _persistentRecords._heightWater = heightWater;
}



double peano::applications::shallowwater::records::RegularGridCell::getHeightSeabed() const {
   return _persistentRecords._heightSeabed;
}



void peano::applications::shallowwater::records::RegularGridCell::setHeightSeabed(const double& heightSeabed) {
   _persistentRecords._heightSeabed = heightSeabed;
}



double peano::applications::shallowwater::records::RegularGridCell::getMomentumX() const {
   return _persistentRecords._momentumX;
}



void peano::applications::shallowwater::records::RegularGridCell::setMomentumX(const double& momentumX) {
   _persistentRecords._momentumX = momentumX;
}



double peano::applications::shallowwater::records::RegularGridCell::getMomentumY() const {
   return _persistentRecords._momentumY;
}



void peano::applications::shallowwater::records::RegularGridCell::setMomentumY(const double& momentumY) {
   _persistentRecords._momentumY = momentumY;
}



bool peano::applications::shallowwater::records::RegularGridCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::shallowwater::records::RegularGridCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}




std::string peano::applications::shallowwater::records::RegularGridCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridCell::toString (std::ostream& out) const {
   out << "("; 
   out << "heightWater:" << getHeightWater();
   out << ",";
   out << "heightSeabed:" << getHeightSeabed();
   out << ",";
   out << "momentumX:" << getMomentumX();
   out << ",";
   out << "momentumY:" << getMomentumY();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::shallowwater::records::RegularGridCell::PersistentRecords peano::applications::shallowwater::records::RegularGridCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridCellPacked peano::applications::shallowwater::records::RegularGridCell::convert() const{
   return RegularGridCellPacked(
      getHeightWater(),
      getHeightSeabed(),
      getMomentumX(),
      getMomentumY(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::RegularGridCell::_log( "peano::applications::shallowwater::records::RegularGridCell" );
   
   MPI_Datatype peano::applications::shallowwater::records::RegularGridCell::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::RegularGridCell::initDatatype() {
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
   
   
   void peano::applications::shallowwater::records::RegularGridCell::shutdownDatatype() {
      MPI_Type_free( &RegularGridCell::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::RegularGridCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::RegularGridCell "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridCell "
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
            "peano::applications::shallowwater::records::RegularGridCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridCell",
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
   
   
   
   void peano::applications::shallowwater::records::RegularGridCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridCell from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridCell failed: "
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
            "peano::applications::shallowwater::records::RegularGridCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridCell",
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
   
   
   
   bool peano::applications::shallowwater::records::RegularGridCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::RegularGridCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::PersistentRecords(const double& heightWater, const double& heightSeabed, const double& momentumX, const double& momentumY, const bool& isInside):
_heightWater(heightWater),
_heightSeabed(heightSeabed),
_momentumX(momentumX),
_momentumY(momentumY) {
   setIsInside(isInside);
   assertion((1 < (8 * sizeof(short int))));
   
}


double peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::getHeightWater() const {
   return _heightWater;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::setHeightWater(const double& heightWater) {
   _heightWater = heightWater;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::getHeightSeabed() const {
   return _heightSeabed;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::setHeightSeabed(const double& heightSeabed) {
   _heightSeabed = heightSeabed;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::getMomentumX() const {
   return _momentumX;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::setMomentumX(const double& momentumX) {
   _momentumX = momentumX;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::getMomentumY() const {
   return _momentumY;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::setMomentumY(const double& momentumY) {
   _momentumY = momentumY;
}



bool peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::shallowwater::records::RegularGridCellPacked::RegularGridCellPacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridCellPacked::RegularGridCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWater, persistentRecords._heightSeabed, persistentRecords._momentumX, persistentRecords._momentumY, persistentRecords.getIsInside()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridCellPacked::RegularGridCellPacked(const double& heightWater, const double& heightSeabed, const double& momentumX, const double& momentumY, const bool& isInside):
_persistentRecords(heightWater, heightSeabed, momentumX, momentumY, isInside) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridCellPacked::~RegularGridCellPacked() { }


double peano::applications::shallowwater::records::RegularGridCellPacked::getHeightWater() const {
   return _persistentRecords._heightWater;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::setHeightWater(const double& heightWater) {
   _persistentRecords._heightWater = heightWater;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::getHeightSeabed() const {
   return _persistentRecords._heightSeabed;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::setHeightSeabed(const double& heightSeabed) {
   _persistentRecords._heightSeabed = heightSeabed;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::getMomentumX() const {
   return _persistentRecords._momentumX;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::setMomentumX(const double& momentumX) {
   _persistentRecords._momentumX = momentumX;
}



double peano::applications::shallowwater::records::RegularGridCellPacked::getMomentumY() const {
   return _persistentRecords._momentumY;
}



void peano::applications::shallowwater::records::RegularGridCellPacked::setMomentumY(const double& momentumY) {
   _persistentRecords._momentumY = momentumY;
}



bool peano::applications::shallowwater::records::RegularGridCellPacked::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::RegularGridCellPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::shallowwater::records::RegularGridCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridCellPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "heightWater:" << getHeightWater();
   out << ",";
   out << "heightSeabed:" << getHeightSeabed();
   out << ",";
   out << "momentumX:" << getMomentumX();
   out << ",";
   out << "momentumY:" << getMomentumY();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::shallowwater::records::RegularGridCellPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridCell peano::applications::shallowwater::records::RegularGridCellPacked::convert() const{
   return RegularGridCell(
      getHeightWater(),
      getHeightSeabed(),
      getMomentumX(),
      getMomentumY(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::RegularGridCellPacked::_log( "peano::applications::shallowwater::records::RegularGridCellPacked" );
   
   MPI_Datatype peano::applications::shallowwater::records::RegularGridCellPacked::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::RegularGridCellPacked::initDatatype() {
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
   
   
   void peano::applications::shallowwater::records::RegularGridCellPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridCellPacked::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::RegularGridCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::RegularGridCellPacked "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridCellPacked "
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
            "peano::applications::shallowwater::records::RegularGridCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridCellPacked",
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
   
   
   
   void peano::applications::shallowwater::records::RegularGridCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridCellPacked failed: "
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
            "peano::applications::shallowwater::records::RegularGridCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridCellPacked",
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
   
   
   
   bool peano::applications::shallowwater::records::RegularGridCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::RegularGridCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



