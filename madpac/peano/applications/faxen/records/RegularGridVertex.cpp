#include "peano/applications/faxen/records/RegularGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::faxen::records::RegularGridVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
               "peano::applications::faxen::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertex",
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
      
      
      
      void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
               "peano::applications::faxen::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
               "peano::applications::faxen::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
               "peano::applications::faxen::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::faxen::records::RegularGridVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
               "peano::applications::faxen::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertex",
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
      
      
      
      void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
               "peano::applications::faxen::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::records::RegularGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_LONG,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
               "peano::applications::faxen::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
               "peano::applications::faxen::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {
   
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "P0:" << getP0();
   out << ",";
   out << "P1:" << getP1();
   out << ",";
   out << "F0:" << getF0();
   out << ",";
   out << "F1:" << getF1();
   out << ",";
   out << "G0:" << getG0();
   out << ",";
   out << "G1:" << getG1();
   out << ",";
   out << "U0:" << getU0();
   out << ",";
   out << "U1:" << getU1();
   out << ",";
   out << "U2:" << getU2();
   out << ",";
   out << "V0:" << getV0();
   out << ",";
   out << "V1:" << getV1();
   out << ",";
   out << "V2:" << getV2();
   out << ",";
   out << "flag:" << getFlag();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
   return RegularGridVertexPacked(
      getP0(),
      getP1(),
      getF0(),
      getF1(),
      getG0(),
      getG1(),
      getU0(),
      getU1(),
      getU2(),
      getV0(),
      getV1(),
      getV2(),
      getFlag(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertex dummyRegularGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
      MPI_Type_commit( &RegularGridVertex::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertex::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
            "peano::applications::faxen::records::RegularGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridVertex",
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
   
   
   
   void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
            "peano::applications::faxen::records::RegularGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridVertex",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(long int))));
   
}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
   assertion((2 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "P0:" << getP0();
   out << ",";
   out << "P1:" << getP1();
   out << ",";
   out << "F0:" << getF0();
   out << ",";
   out << "F1:" << getF1();
   out << ",";
   out << "G0:" << getG0();
   out << ",";
   out << "G1:" << getG1();
   out << ",";
   out << "U0:" << getU0();
   out << ",";
   out << "U1:" << getU1();
   out << ",";
   out << "U2:" << getU2();
   out << ",";
   out << "V0:" << getV0();
   out << ",";
   out << "V1:" << getV1();
   out << ",";
   out << "V2:" << getV2();
   out << ",";
   out << "flag:" << getFlag();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
   return RegularGridVertex(
      getP0(),
      getP1(),
      getF0(),
      getF1(),
      getG0(),
      getG1(),
      getU0(),
      getU1(),
      getU2(),
      getV0(),
      getV1(),
      getV2(),
      getFlag(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertexPacked dummyRegularGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
            "peano::applications::faxen::records::RegularGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridVertexPacked",
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
   
   
   
   void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
            "peano::applications::faxen::records::RegularGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridVertexPacked",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, adjacentRanks) {

}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
   getP0(),
   getP1(),
   getF0(),
   getF1(),
   getG0(),
   getG1(),
   getU0(),
   getU1(),
   getU2(),
   getV0(),
   getV1(),
   getV2(),
   getFlag(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertex dummyRegularGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
   MPI_Type_commit( &RegularGridVertex::Datatype );
   
}


void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertex::Datatype );
   
}

void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
         msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
         "peano::applications::faxen::records::RegularGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::RegularGridVertex",
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



void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
         "peano::applications::faxen::records::RegularGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::RegularGridVertex",
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



bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
   getP0(),
   getP1(),
   getF0(),
   getF1(),
   getG0(),
   getG1(),
   getU0(),
   getU1(),
   getU2(),
   getV0(),
   getV1(),
   getV2(),
   getFlag(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //adjacentRanks
      MPI_LONG,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertexPacked dummyRegularGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridVertexPacked::Datatype );
   
}


void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertexPacked::Datatype );
   
}

void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
         "peano::applications::faxen::records::RegularGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::RegularGridVertexPacked",
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



void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
         "peano::applications::faxen::records::RegularGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::RegularGridVertexPacked",
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



bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x) {

}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
      msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
      "peano::applications::faxen::records::RegularGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::RegularGridVertex",
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



void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
      "peano::applications::faxen::records::RegularGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::RegularGridVertex",
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



bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_LONG,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
      "peano::applications::faxen::records::RegularGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::RegularGridVertexPacked",
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



void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
      "peano::applications::faxen::records::RegularGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::RegularGridVertexPacked",
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



bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain) {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain) {

}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
   msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
   "peano::applications::faxen::records::RegularGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::RegularGridVertex",
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



void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
   "peano::applications::faxen::records::RegularGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::RegularGridVertex",
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



bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_LONG,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
   "peano::applications::faxen::records::RegularGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::RegularGridVertexPacked",
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



void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
   "peano::applications::faxen::records::RegularGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::RegularGridVertexPacked",
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



bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x) {

}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
"peano::applications::faxen::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertex",
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



void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
"peano::applications::faxen::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertex",
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



bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
"peano::applications::faxen::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertexPacked",
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



void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
"peano::applications::faxen::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertexPacked",
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



bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::faxen::records::RegularGridVertex::RegularGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, adjacentRanks) {

}


peano::applications::faxen::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::faxen::records::RegularGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertex::PersistentRecords peano::applications::faxen::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertexPacked peano::applications::faxen::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertex::_log( "peano::applications::faxen::records::RegularGridVertex" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertex::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::faxen::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::faxen::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertex "
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
"peano::applications::faxen::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertex",
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



void peano::applications::faxen::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertex failed: "
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
"peano::applications::faxen::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertex",
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



bool peano::applications::faxen::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::faxen::records::RegularGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::RegularGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::RegularGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



peano::applications::faxen::records::RegularGridVertex::InsideOutsideDomain peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::RegularGridVertex::toString(param);
}

std::string peano::applications::faxen::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::RegularGridVertexPacked::PersistentRecords peano::applications::faxen::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::RegularGridVertex peano::applications::faxen::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::RegularGridVertexPacked::_log( "peano::applications::faxen::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::records::RegularGridVertexPacked "
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
"peano::applications::faxen::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertexPacked",
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



void peano::applications::faxen::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridVertexPacked failed: "
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
"peano::applications::faxen::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::RegularGridVertexPacked",
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



bool peano::applications::faxen::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


