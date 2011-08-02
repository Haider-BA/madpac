#include "peano/applications/faxen/records/RegularGridCell.h"

peano::applications::faxen::records::RegularGridCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::records::RegularGridCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
_isInside(isInside) {
   
}


double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::records::RegularGridCell::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::records::RegularGridCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::faxen::records::RegularGridCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::faxen::records::RegularGridCell::RegularGridCell() {
   
}


peano::applications::faxen::records::RegularGridCell::RegularGridCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside) {
   
}


peano::applications::faxen::records::RegularGridCell::RegularGridCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_persistentRecords(P, U, V, F, G, rhs, res, isInside) {
   
}


peano::applications::faxen::records::RegularGridCell::~RegularGridCell() { }


double peano::applications::faxen::records::RegularGridCell::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::records::RegularGridCell::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::records::RegularGridCell::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::records::RegularGridCell::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::records::RegularGridCell::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::records::RegularGridCell::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::records::RegularGridCell::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::records::RegularGridCell::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::records::RegularGridCell::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::records::RegularGridCell::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::records::RegularGridCell::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::records::RegularGridCell::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::records::RegularGridCell::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::records::RegularGridCell::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::records::RegularGridCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::faxen::records::RegularGridCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}




std::string peano::applications::faxen::records::RegularGridCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridCell::toString (std::ostream& out) const {
   out << "("; 
   out << "P:" << getP();
   out << ",";
   out << "U:" << getU();
   out << ",";
   out << "V:" << getV();
   out << ",";
   out << "F:" << getF();
   out << ",";
   out << "G:" << getG();
   out << ",";
   out << "rhs:" << getRhs();
   out << ",";
   out << "res:" << getRes();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::faxen::records::RegularGridCell::PersistentRecords peano::applications::faxen::records::RegularGridCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridCellPacked peano::applications::faxen::records::RegularGridCell::convert() const{
   return RegularGridCellPacked(
      getP(),
      getU(),
      getV(),
      getF(),
      getG(),
      getRhs(),
      getRes(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridCell::_log( "peano::applications::faxen::records::RegularGridCell" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridCell::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridCell::initDatatype() {
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
   
   
   void peano::applications::faxen::records::RegularGridCell::shutdownDatatype() {
      MPI_Type_free( &RegularGridCell::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridCell "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridCell "
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
            "peano::applications::faxen::records::RegularGridCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridCell",
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
   
   
   
   void peano::applications::faxen::records::RegularGridCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridCell from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridCell failed: "
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
            "peano::applications::faxen::records::RegularGridCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridCell",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res) {
   setIsInside(isInside);
   assertion((1 < (8 * sizeof(long int))));
   
}


double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::faxen::records::RegularGridCellPacked::RegularGridCellPacked() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridCellPacked::RegularGridCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside()) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridCellPacked::RegularGridCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_persistentRecords(P, U, V, F, G, rhs, res, isInside) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridCellPacked::~RegularGridCellPacked() { }


double peano::applications::faxen::records::RegularGridCellPacked::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::records::RegularGridCellPacked::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::records::RegularGridCellPacked::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::records::RegularGridCellPacked::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::records::RegularGridCellPacked::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::records::RegularGridCellPacked::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::records::RegularGridCellPacked::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::records::RegularGridCellPacked::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::records::RegularGridCellPacked::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::records::RegularGridCellPacked::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::records::RegularGridCellPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::records::RegularGridCellPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::records::RegularGridCellPacked::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::records::RegularGridCellPacked::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::records::RegularGridCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::RegularGridCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::faxen::records::RegularGridCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridCellPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "P:" << getP();
   out << ",";
   out << "U:" << getU();
   out << ",";
   out << "V:" << getV();
   out << ",";
   out << "F:" << getF();
   out << ",";
   out << "G:" << getG();
   out << ",";
   out << "rhs:" << getRhs();
   out << ",";
   out << "res:" << getRes();
   out << ",";
   out << "isInside:" << getIsInside();
   out <<  ")";
}


peano::applications::faxen::records::RegularGridCellPacked::PersistentRecords peano::applications::faxen::records::RegularGridCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridCell peano::applications::faxen::records::RegularGridCellPacked::convert() const{
   return RegularGridCell(
      getP(),
      getU(),
      getV(),
      getF(),
      getG(),
      getRhs(),
      getRes(),
      getIsInside()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridCellPacked::_log( "peano::applications::faxen::records::RegularGridCellPacked" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridCellPacked::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridCellPacked::initDatatype() {
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
   
   
   void peano::applications::faxen::records::RegularGridCellPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridCellPacked::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridCellPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridCellPacked "
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
            "peano::applications::faxen::records::RegularGridCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridCellPacked",
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
   
   
   
   void peano::applications::faxen::records::RegularGridCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridCellPacked failed: "
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
            "peano::applications::faxen::records::RegularGridCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridCellPacked",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



