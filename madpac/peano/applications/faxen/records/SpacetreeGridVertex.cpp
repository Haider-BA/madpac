#include "peano/applications/faxen/records/SpacetreeGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
               "peano::applications::faxen::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
               "peano::applications::faxen::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
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
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      
   }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 9;
         MPI_Datatype subtypes[Attributes] = {
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //isHangingNode
            1,		 //refinementControl
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
               "peano::applications::faxen::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
               "peano::applications::faxen::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(long int))));
      
   }
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
         const int Attributes = 7;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_LONG,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[6] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   
}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {
   
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::faxen::records::SpacetreeGridVertex::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
   switch (param) {
      case Unrefined: return "Unrefined";
      case Refined: return "Refined";
      case RefinementTriggered: return "RefinementTriggered";
      case Refining: return "Refining";
      case EraseTriggered: return "EraseTriggered";
      case Erasing: return "Erasing";
   }
   return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
   return SpacetreeGridVertexPacked(
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
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );
   
   MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
      const int Attributes = 8;
      MPI_Datatype subtypes[Attributes] = {
         MPI_CHAR,		 //isHangingNode
         MPI_INT,		 //refinementControl
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //isHangingNode
         1,		 //refinementControl
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertex dummySpacetreeGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
      MPI_Type_commit( &SpacetreeGridVertex::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertex::Datatype );
      
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
            msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
            "peano::applications::faxen::records::SpacetreeGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::SpacetreeGridVertex",
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
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
            "peano::applications::faxen::records::SpacetreeGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::SpacetreeGridVertex",
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
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   setIsHangingNode(isHangingNode);
   setRefinementControl(refinementControl);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((6 < (8 * sizeof(long int))));
   
}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
   assertion((6 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   assertion((6 < (8 * sizeof(long int))));
   
}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
   return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
   return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
   return SpacetreeGridVertex(
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
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );
   
   MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_LONG,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
            "peano::applications::faxen::records::SpacetreeGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
   
   
   
   void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
            "peano::applications::faxen::records::SpacetreeGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
   case Unrefined: return "Unrefined";
   case Refined: return "Refined";
   case RefinementTriggered: return "RefinementTriggered";
   case Refining: return "Refining";
   case EraseTriggered: return "EraseTriggered";
   case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertex dummySpacetreeGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
   MPI_Type_commit( &SpacetreeGridVertex::Datatype );
   
}


void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertex::Datatype );
   
}

void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
         msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
         "peano::applications::faxen::records::SpacetreeGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::SpacetreeGridVertex",
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



void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
         "peano::applications::faxen::records::SpacetreeGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::SpacetreeGridVertex",
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



bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(long int))));

}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
   const int Attributes = 5;
   MPI_Datatype subtypes[Attributes] = {
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_LONG,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
   
}


void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
   
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
         "peano::applications::faxen::records::SpacetreeGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
         "peano::applications::faxen::records::SpacetreeGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::faxen::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
      msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
      "peano::applications::faxen::records::SpacetreeGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::SpacetreeGridVertex",
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



void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
      "peano::applications::faxen::records::SpacetreeGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::SpacetreeGridVertex",
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



bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(long int))));

}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_LONG,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
      "peano::applications::faxen::records::SpacetreeGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
      "peano::applications::faxen::records::SpacetreeGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
   msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
   "peano::applications::faxen::records::SpacetreeGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::SpacetreeGridVertex",
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



void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
   "peano::applications::faxen::records::SpacetreeGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::SpacetreeGridVertex",
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



bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(long int))));

}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
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
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
   "peano::applications::faxen::records::SpacetreeGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
   "peano::applications::faxen::records::SpacetreeGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::faxen::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
"peano::applications::faxen::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertex",
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



void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
"peano::applications::faxen::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertex",
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



bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(long int))));

}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_LONG,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::faxen::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::faxen::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::faxen::records::SpacetreeGridVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::faxen::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::faxen::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::faxen::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertex::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertexPacked peano::applications::faxen::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertex::_log( "peano::applications::faxen::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertex "
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
"peano::applications::faxen::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertex",
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



void peano::applications::faxen::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertex failed: "
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
"peano::applications::faxen::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertex",
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



bool peano::applications::faxen::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(long int))));

}


double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(long int))));

}


peano::applications::faxen::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(P0, P1, F0, F1, G0, G1, U0, U1, U2, V0, V1, V2, flag, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(long int))));

}

peano::applications::faxen::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::records::SpacetreeGridVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::records::SpacetreeGridVertex::RefinementControl peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControl() const {
long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   long int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::faxen::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::faxen::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::faxen::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::faxen::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::faxen::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::faxen::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::records::SpacetreeGridVertex peano::applications::faxen::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::records::SpacetreeGridVertexPacked::_log( "peano::applications::faxen::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::faxen::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::faxen::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_LONG,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::faxen::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::faxen::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridVertexPacked "
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
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



void peano::applications::faxen::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::records::SpacetreeGridVertexPacked",
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



bool peano::applications::faxen::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


