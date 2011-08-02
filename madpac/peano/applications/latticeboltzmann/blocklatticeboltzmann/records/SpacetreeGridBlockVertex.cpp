#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockVertex.h"

#if !defined(Parallel) && !defined(Debug) && !defined(Asserts)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
      return SpacetreeGridBlockVertexPacked(
         getVertexNumber(),
         getLbRefinementState(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
         const int Attributes = 5;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[4] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
      return SpacetreeGridBlockVertex(
         getVertexNumber(),
         getLbRefinementState(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
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
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
      return SpacetreeGridBlockVertexPacked(
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
         const int Attributes = 13;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
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
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
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
         SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._level))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[12] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
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
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
      return SpacetreeGridBlockVertex(
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
         const int Attributes = 11;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._level))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[10] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
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


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
   switch (param) {
      case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
      case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
      case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
      case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
   }
   return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
   return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_vertexNumber:" << getVertexNumber();
   out << ",";
   out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
   return SpacetreeGridBlockVertexPacked(
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
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
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
      const int Attributes = 12;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
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
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
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
      SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._level))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[11] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
      MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
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


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   assertion((6 < (8 * sizeof(short int))));
   
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_vertexNumber:" << getVertexNumber();
   out << ",";
   out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
   return SpacetreeGridBlockVertex(
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
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
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
      const int Attributes = 11;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_SHORT,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._level))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[10] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
   case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
   case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
   case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
   case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
return SpacetreeGridBlockVertexPacked(
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
   const int Attributes = 11;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[10] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
   MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
return SpacetreeGridBlockVertex(
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
   const int Attributes = 9;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[8] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
return SpacetreeGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
const int Attributes = 8;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._level))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[7] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
      msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
      msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
return SpacetreeGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
      msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
return SpacetreeGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
   msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
   msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
return SpacetreeGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
   msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
return SpacetreeGridBlockVertexPacked(
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
const int Attributes = 10;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[9] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
return SpacetreeGridBlockVertex(
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::~SpacetreeGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::convert() const{
return SpacetreeGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertex dummySpacetreeGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[0]._persistentRecords._level))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertex::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::SpacetreeGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(vertexNumber, lbRefinementState, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::~SpacetreeGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::RefinementControl peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString(const RefinementControl& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getRefinementControlMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex::getRefinementControlMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::convert() const{
return SpacetreeGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridBlockVertexPacked dummySpacetreeGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


