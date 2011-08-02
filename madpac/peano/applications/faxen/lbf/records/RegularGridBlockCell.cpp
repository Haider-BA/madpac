#include "peano/applications/faxen/lbf/records/RegularGridBlockCell.h"

peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
_isInside(isInside) {
   
}


double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}


peano::applications::faxen::lbf::records::RegularGridBlockCell::RegularGridBlockCell() {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCell::RegularGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside) {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCell::RegularGridBlockCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_persistentRecords(P, U, V, F, G, rhs, res, isInside) {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCell::~RegularGridBlockCell() { }


double peano::applications::faxen::lbf::records::RegularGridBlockCell::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCell::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::RegularGridBlockCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}




std::string peano::applications::faxen::lbf::records::RegularGridBlockCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockCell::toString (std::ostream& out) const {
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


peano::applications::faxen::lbf::records::RegularGridBlockCell::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockCellPacked peano::applications::faxen::lbf::records::RegularGridBlockCell::convert() const{
   return RegularGridBlockCellPacked(
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
   
   tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockCell::_log( "peano::applications::faxen::lbf::records::RegularGridBlockCell" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockCell::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCell::initDatatype() {
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
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCell::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockCell::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockCell "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockCell "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockCell",
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
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockCell from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockCell failed: "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockCell",
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
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::RegularGridBlockCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
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


double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked() {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside()) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::RegularGridBlockCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside):
_persistentRecords(P, U, V, F, G, rhs, res, isInside) {
   assertion((1 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::~RegularGridBlockCellPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::toString (std::ostream& out) const {
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


peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockCell peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::convert() const{
   return RegularGridBlockCell(
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
   
   tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockCellPacked" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::initDatatype() {
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
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockCellPacked::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockCellPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockCellPacked "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockCellPacked",
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
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockCellPacked failed: "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockCellPacked",
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
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::RegularGridBlockCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



