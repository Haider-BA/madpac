#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/RegularGridBlockVertex.h"

#if !defined(Parallel) && !defined(Debug) && !defined(Asserts)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
      return RegularGridBlockVertexPacked(
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertex dummyRegularGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
         MPI_Type_commit( &RegularGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
      return RegularGridBlockVertex(
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
      return RegularGridBlockVertexPacked(
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertex dummyRegularGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
         MPI_Type_commit( &RegularGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
      return RegularGridBlockVertex(
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
   switch (param) {
      case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
      case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
      case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
      case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
   }
   return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
   return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
   return RegularGridBlockVertexPacked(
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockVertex dummyRegularGridBlockVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
      MPI_Type_commit( &RegularGridBlockVertex::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockVertex::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
   return RegularGridBlockVertex(
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
   case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
   case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
   case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
   case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
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
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridBlockVertex dummyRegularGridBlockVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
   MPI_Type_commit( &RegularGridBlockVertex::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridBlockVertex::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
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
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain, x) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
      msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
      msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
      msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
   msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
   msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
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
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
   msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
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
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
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
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::RegularGridBlockVertex(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain, x) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(vertexNumber, lbRefinementState, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked failed: "
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
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


