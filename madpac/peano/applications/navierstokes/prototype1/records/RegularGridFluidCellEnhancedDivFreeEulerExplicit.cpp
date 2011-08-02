#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside):
_fluidCellType(fluidCellType),
_p(p),
_rhsPPE(rhsPPE),
_residuum(residuum),
_isInside(isInside) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidCellType() const {
   return _fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
   _fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setP(const double& p) {
   _p = p;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRhsPPE() const {
   return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRhsPPE(const double& rhsPPE) {
   _rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getResiduum() const {
   return _residuum;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setResiduum(const double& residuum) {
   _residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::RegularGridFluidCellEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::RegularGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidCellType, persistentRecords._p, persistentRecords._rhsPPE, persistentRecords._residuum, persistentRecords._isInside) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::RegularGridFluidCellEnhancedDivFreeEulerExplicit(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::~RegularGridFluidCellEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
   return _persistentRecords._fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const FluidCellType& fluidCellType) {
   _persistentRecords._fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
   return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
   _persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
   return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
   _persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
   return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(const double& residuum) {
   _persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::toString(const FluidCellType& param) {
   switch (param) {
      case INNER: return "INNER";
      case NOT_INNER: return "NOT_INNER";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping() {
   return "FluidCellType(INNER=0,NOT_INNER=1)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidCellType:" << toString(getFluidCellType());
   out << ",";
   out << "p:" << getP();
   out << ",";
   out << "rhsPPE:" << getRhsPPE();
   out << ",";
   out << "residuum:" << getResiduum();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
   return RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked(
      getFluidCellType(),
      getP(),
      getRhsPPE(),
      getResiduum(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridFluidCellEnhancedDivFreeEulerExplicit dummyRegularGridFluidCellEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidCellEnhancedDivFreeEulerExplicit[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &RegularGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside) {
   setFluidCellType(fluidCellType);
   setP(p);
   setRhsPPE(rhsPPE);
   setResiduum(residuum);
   setIsInside(isInside);
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidCellType() const {
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
   assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setP(const double& p) {
   _p = p;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRhsPPE() const {
   return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRhsPPE(const double& rhsPPE) {
   _rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getResiduum() const {
   return _residuum;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setResiduum(const double& residuum) {
   _residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (1);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getFluidCellType(), persistentRecords.getP(), persistentRecords.getRhsPPE(), persistentRecords.getResiduum(), persistentRecords.getIsInside()) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellType() const {
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::setFluidCellType(const FluidCellType& fluidCellType) {
   assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getP() const {
   return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::setP(const double& p) {
   _persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRhsPPE() const {
   return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRhsPPE(const double& rhsPPE) {
   _persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getResiduum() const {
   return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::setResiduum(const double& residuum) {
   _persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
   short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const FluidCellType& param) {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidCellType:" << toString(getFluidCellType());
   out << ",";
   out << "p:" << getP();
   out << ",";
   out << "rhsPPE:" << getRhsPPE();
   out << ",";
   out << "residuum:" << getResiduum();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
   return RegularGridFluidCellEnhancedDivFreeEulerExplicit(
      getFluidCellType(),
      getP(),
      getRhsPPE(),
      getResiduum(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 1;
      MPI_Datatype subtypes[Attributes] = {
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidCellEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



