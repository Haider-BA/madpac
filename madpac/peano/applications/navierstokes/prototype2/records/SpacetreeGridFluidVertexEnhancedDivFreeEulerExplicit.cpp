#include "peano/applications/navierstokes/prototype2/records/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case CoarseningTriggered: return "CoarseningTriggered";
         case Coarsening: return "Coarsening";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 2;
         MPI_Datatype subtypes[Attributes] = {
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case CoarseningTriggered: return "CoarseningTriggered";
         case Coarsening: return "Coarsening";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 7;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_SHORT,		 //_packedRecords0
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
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[6] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Outside: return "Outside";
      case Boundary: return "Boundary";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
   switch (param) {
      case Unrefined: return "Unrefined";
      case Refined: return "Refined";
      case RefinementTriggered: return "RefinementTriggered";
      case Refining: return "Refining";
      case CoarseningTriggered: return "CoarseningTriggered";
      case Coarsening: return "Coarsening";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
   out << "("; 
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
   return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
      SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   setIsHangingNode(isHangingNode);
   setRefinementControl(refinementControl);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((6 < (8 * sizeof(short int))));
   
}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
   return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_SHORT,		 //_packedRecords0
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
      SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Outside: return "Outside";
   case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
switch (param) {
   case Unrefined: return "Unrefined";
   case Refined: return "Refined";
   case RefinementTriggered: return "RefinementTriggered";
   case Refining: return "Refining";
   case CoarseningTriggered: return "CoarseningTriggered";
   case Coarsening: return "Coarsening";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
   SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
   const int Attributes = 5;
   MPI_Datatype subtypes[Attributes] = {
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
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
   SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case CoarseningTriggered: return "CoarseningTriggered";
case Coarsening: return "Coarsening";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case CoarseningTriggered: return "CoarseningTriggered";
case Coarsening: return "Coarsening";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case CoarseningTriggered: return "CoarseningTriggered";
case Coarsening: return "Coarsening";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}
std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case CoarseningTriggered: return "CoarseningTriggered";
case Coarsening: return "Coarsening";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,CoarseningTriggered=4,Coarsening=5)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
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
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


