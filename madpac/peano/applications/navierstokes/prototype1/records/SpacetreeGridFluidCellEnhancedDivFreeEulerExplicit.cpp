#include "peano/applications/navierstokes/prototype1/records/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"

#if !defined(Debug) && !defined(Parallel)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _fluidCellType(fluidCellType),
   _p(p),
   _rhsPPE(rhsPPE),
   _residuum(residuum),
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidCellType() const {
      return _fluidCellType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
      _fluidCellType = fluidCellType;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getP() const {
      return _p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setP(const double& p) {
      _p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRhsPPE() const {
      return _rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRhsPPE(const double& rhsPPE) {
      _rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getResiduum() const {
      return _residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setResiduum(const double& residuum) {
      _residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidCellType, persistentRecords._p, persistentRecords._rhsPPE, persistentRecords._residuum, persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
      return _persistentRecords._fluidCellType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const FluidCellType& fluidCellType) {
      _persistentRecords._fluidCellType = fluidCellType;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
      return _persistentRecords._p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
      _persistentRecords._p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
      return _persistentRecords._rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
      _persistentRecords._rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
      return _persistentRecords._residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(const double& residuum) {
      _persistentRecords._residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const FluidCellType& param) {
      switch (param) {
         case INNER: return "INNER";
         case NOT_INNER: return "NOT_INNER";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping() {
      return "FluidCellType(INNER=0,NOT_INNER=1)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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
      out << ",";
      out << "state:" << toString(getState());
      out << ",";
      out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
      out << ",";
      out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
         getFluidCellType(),
         getP(),
         getRhsPPE(),
         getResiduum(),
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 2;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //state
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //state
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[1]._persistentRecords._state))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _accessNumber(accessNumber) {
      setFluidCellType(fluidCellType);
      setP(p);
      setRhsPPE(rhsPPE);
      setResiduum(residuum);
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidCellType() const {
      short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
      assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | fluidCellType << (0);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getP() const {
      return _p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setP(const double& p) {
      _p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRhsPPE() const {
      return _rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRhsPPE(const double& rhsPPE) {
      _rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getResiduum() const {
      return _residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setResiduum(const double& residuum) {
      _residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (1);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (2);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (4);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getFluidCellType(), persistentRecords.getP(), persistentRecords.getRhsPPE(), persistentRecords.getResiduum(), persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellType() const {
      short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setFluidCellType(const FluidCellType& fluidCellType) {
      assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | fluidCellType << (0);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getP() const {
      return _persistentRecords._p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setP(const double& p) {
      _persistentRecords._p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRhsPPE() const {
      return _persistentRecords._rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRhsPPE(const double& rhsPPE) {
      _persistentRecords._rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getResiduum() const {
      return _persistentRecords._residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setResiduum(const double& residuum) {
      _persistentRecords._residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (2);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (4);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (4);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (4);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 4 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (4);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const FluidCellType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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
      out << ",";
      out << "state:" << toString(getState());
      out << ",";
      out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
      out << ",";
      out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
         getFluidCellType(),
         getP(),
         getRhsPPE(),
         getResiduum(),
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
         SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _fluidCellType(fluidCellType),
   _p(p),
   _rhsPPE(rhsPPE),
   _residuum(residuum),
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidCellType() const {
      return _fluidCellType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
      _fluidCellType = fluidCellType;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getP() const {
      return _p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setP(const double& p) {
      _p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRhsPPE() const {
      return _rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRhsPPE(const double& rhsPPE) {
      _rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getResiduum() const {
      return _residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setResiduum(const double& residuum) {
      _residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidCellType, persistentRecords._p, persistentRecords._rhsPPE, persistentRecords._residuum, persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
      return _persistentRecords._fluidCellType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const FluidCellType& fluidCellType) {
      _persistentRecords._fluidCellType = fluidCellType;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
      return _persistentRecords._p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
      _persistentRecords._p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
      return _persistentRecords._rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
      _persistentRecords._rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
      return _persistentRecords._residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(const double& residuum) {
      _persistentRecords._residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const FluidCellType& param) {
      switch (param) {
         case INNER: return "INNER";
         case NOT_INNER: return "NOT_INNER";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping() {
      return "FluidCellType(INNER=0,NOT_INNER=1)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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
      out << ",";
      out << "state:" << toString(getState());
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
      out << ",";
      out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
         getFluidCellType(),
         getP(),
         getRhsPPE(),
         getResiduum(),
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //state
            MPI_INT,		 //level
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //state
            1,		 //level
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[1]._persistentRecords._state))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _level(level),
   _accessNumber(accessNumber) {
      setFluidCellType(fluidCellType);
      setP(p);
      setRhsPPE(rhsPPE);
      setResiduum(residuum);
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidCellType() const {
      short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
      assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | fluidCellType << (0);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getP() const {
      return _p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setP(const double& p) {
      _p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRhsPPE() const {
      return _rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRhsPPE(const double& rhsPPE) {
      _rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getResiduum() const {
      return _residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setResiduum(const double& residuum) {
      _residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (1);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (2);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (4);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getFluidCellType(), persistentRecords.getP(), persistentRecords.getRhsPPE(), persistentRecords.getResiduum(), persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellType() const {
      short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setFluidCellType(const FluidCellType& fluidCellType) {
      assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | fluidCellType << (0);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getP() const {
      return _persistentRecords._p;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setP(const double& p) {
      _persistentRecords._p = p;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRhsPPE() const {
      return _persistentRecords._rhsPPE;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRhsPPE(const double& rhsPPE) {
      _persistentRecords._rhsPPE = rhsPPE;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getResiduum() const {
      return _persistentRecords._residuum;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setResiduum(const double& residuum) {
      _persistentRecords._residuum = residuum;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (2);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (4);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (4);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (4);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (4);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 4 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (4);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const FluidCellType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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
      out << ",";
      out << "state:" << toString(getState());
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
      out << ",";
      out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
         getFluidCellType(),
         getP(),
         getRhsPPE(),
         getResiduum(),
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //level
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._level))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_fluidCellType(fluidCellType),
_p(p),
_rhsPPE(rhsPPE),
_residuum(residuum),
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidCellType() const {
   return _fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
   _fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setP(const double& p) {
   _p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRhsPPE() const {
   return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRhsPPE(const double& rhsPPE) {
   _rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getResiduum() const {
   return _residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setResiduum(const double& residuum) {
   _residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
   return _state;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidCellType, persistentRecords._p, persistentRecords._rhsPPE, persistentRecords._residuum, persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
   return _persistentRecords._fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const FluidCellType& fluidCellType) {
   _persistentRecords._fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
   return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
   _persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
   return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
   _persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
   return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(const double& residuum) {
   _persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
   return _persistentRecords._state;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const FluidCellType& param) {
   switch (param) {
      case INNER: return "INNER";
      case NOT_INNER: return "NOT_INNER";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping() {
   return "FluidCellType(INNER=0,NOT_INNER=1)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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
   out << ",";
   out << "state:" << toString(getState());
   out << ",";
   out << "delta:" << getDelta();
   out << ",";
   out << "rankOfActiveNode:" << getRankOfActiveNode();
   out << ",";
   out << "maxChildWeight:" << getMaxChildWeight();
   out << ",";
   out << "accumulatedWeight:" << getAccumulatedWeight();
   out << ",";
   out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
   out << ",";
   out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
   out <<  ")";
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
   return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
      getFluidCellType(),
      getP(),
      getRhsPPE(),
      getResiduum(),
      getIsInside(),
      getState(),
      getDelta(),
      getRankOfActiveNode(),
      getMaxChildWeight(),
      getAccumulatedWeight(),
      getEvenFlags(),
      getAccessNumber()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //state
         MPI_INT,		 //delta
         MPI_DOUBLE,		 //maxChildWeight
         MPI_DOUBLE,		 //accumulatedWeight
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //state
         1,		 //delta
         1,		 //maxChildWeight
         1,		 //accumulatedWeight
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._state))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._delta))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[1]._persistentRecords._state))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
   setFluidCellType(fluidCellType);
   setP(p);
   setRhsPPE(rhsPPE);
   setResiduum(residuum);
   setIsInside(isInside);
   setState(state);
   setEvenFlags(evenFlags);
   assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidCellType() const {
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
   assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getP() const {
   return _p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setP(const double& p) {
   _p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRhsPPE() const {
   return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRhsPPE(const double& rhsPPE) {
   _rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getResiduum() const {
   return _residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setResiduum(const double& residuum) {
   _residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (1);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (2);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (4);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
   assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getFluidCellType(), persistentRecords.getP(), persistentRecords.getRhsPPE(), persistentRecords.getResiduum(), persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+4 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellType() const {
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setFluidCellType(const FluidCellType& fluidCellType) {
   assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getP() const {
   return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setP(const double& p) {
   _persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRhsPPE() const {
   return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRhsPPE(const double& rhsPPE) {
   _persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getResiduum() const {
   return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setResiduum(const double& residuum) {
   _persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
   short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (2);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (4);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 4 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (4);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const FluidCellType& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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
   out << ",";
   out << "state:" << toString(getState());
   out << ",";
   out << "delta:" << getDelta();
   out << ",";
   out << "rankOfActiveNode:" << getRankOfActiveNode();
   out << ",";
   out << "maxChildWeight:" << getMaxChildWeight();
   out << ",";
   out << "accumulatedWeight:" << getAccumulatedWeight();
   out << ",";
   out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
   out << ",";
   out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
   out <<  ")";
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
   return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
      getFluidCellType(),
      getP(),
      getRhsPPE(),
      getResiduum(),
      getIsInside(),
      getState(),
      getDelta(),
      getRankOfActiveNode(),
      getMaxChildWeight(),
      getAccumulatedWeight(),
      getEvenFlags(),
      getAccessNumber()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //delta
         MPI_DOUBLE,		 //maxChildWeight
         MPI_DOUBLE,		 //accumulatedWeight
         MPI_SHORT,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //delta
         1,		 //maxChildWeight
         1,		 //accumulatedWeight
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._delta))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxChildWeight))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._delta))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_fluidCellType(fluidCellType),
_p(p),
_rhsPPE(rhsPPE),
_residuum(residuum),
_isInside(isInside),
_state(state),
_level(level),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidCellType() const {
return _fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
_fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getP() const {
return _p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setP(const double& p) {
_p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRhsPPE() const {
return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRhsPPE(const double& rhsPPE) {
_rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getResiduum() const {
return _residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setResiduum(const double& residuum) {
_residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
return _state;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidCellType, persistentRecords._p, persistentRecords._rhsPPE, persistentRecords._residuum, persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
return _persistentRecords._fluidCellType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const FluidCellType& fluidCellType) {
_persistentRecords._fluidCellType = fluidCellType;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
_persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
_persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(const double& residuum) {
_persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
return _persistentRecords._state;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const FluidCellType& param) {
switch (param) {
   case INNER: return "INNER";
   case NOT_INNER: return "NOT_INNER";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping() {
return "FluidCellType(INNER=0,NOT_INNER=1)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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
out << ",";
out << "state:" << toString(getState());
out << ",";
out << "level:" << getLevel();
out << ",";
out << "delta:" << getDelta();
out << ",";
out << "rankOfActiveNode:" << getRankOfActiveNode();
out << ",";
out << "maxChildWeight:" << getMaxChildWeight();
out << ",";
out << "accumulatedWeight:" << getAccumulatedWeight();
out << ",";
out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
out << ",";
out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
out <<  ")";
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
   getFluidCellType(),
   getP(),
   getRhsPPE(),
   getResiduum(),
   getIsInside(),
   getState(),
   getLevel(),
   getDelta(),
   getRankOfActiveNode(),
   getMaxChildWeight(),
   getAccumulatedWeight(),
   getEvenFlags(),
   getAccessNumber()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
   const int Attributes = 6;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //state
      MPI_INT,		 //level
      MPI_INT,		 //delta
      MPI_DOUBLE,		 //maxChildWeight
      MPI_DOUBLE,		 //accumulatedWeight
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //state
      1,		 //level
      1,		 //delta
      1,		 //maxChildWeight
      1,		 //accumulatedWeight
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._state))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._delta))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxChildWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[0]._persistentRecords._accumulatedWeight))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicit[1]._persistentRecords._state))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+4 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_level(level),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
setFluidCellType(fluidCellType);
setP(p);
setRhsPPE(rhsPPE);
setResiduum(residuum);
setIsInside(isInside);
setState(state);
setEvenFlags(evenFlags);
assertion((DIMENSIONS+4 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidCellType() const {
short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidCellType(const FluidCellType& fluidCellType) {
assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getP() const {
return _p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setP(const double& p) {
_p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRhsPPE() const {
return _rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRhsPPE(const double& rhsPPE) {
_rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getResiduum() const {
return _residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setResiduum(const double& residuum) {
_residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
short int mask = 1 << (1);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (2);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (4);
short int tmp = _packedRecords0 & mask;
tmp = tmp >> (4);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (4);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (4);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
assertion((DIMENSIONS+4 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getFluidCellType(), persistentRecords.getP(), persistentRecords.getRhsPPE(), persistentRecords.getResiduum(), persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+4 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const FluidCellType& fluidCellType, const double& p, const double& rhsPPE, const double& residuum, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(fluidCellType, p, rhsPPE, residuum, isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+4 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::FluidCellType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellType() const {
short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 1));
   return (FluidCellType) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setFluidCellType(const FluidCellType& fluidCellType) {
assertion((fluidCellType >= 0 && fluidCellType <= 1));
   short int mask =  (1 << (1)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | fluidCellType << (0);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getP() const {
return _persistentRecords._p;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setP(const double& p) {
_persistentRecords._p = p;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRhsPPE() const {
return _persistentRecords._rhsPPE;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRhsPPE(const double& rhsPPE) {
_persistentRecords._rhsPPE = rhsPPE;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getResiduum() const {
return _persistentRecords._residuum;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setResiduum(const double& residuum) {
_persistentRecords._residuum = residuum;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (2);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (2);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (2);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (4);
short int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (4);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (4);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (4);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 4 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (4);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const FluidCellType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getFluidCellTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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
out << ",";
out << "state:" << toString(getState());
out << ",";
out << "level:" << getLevel();
out << ",";
out << "delta:" << getDelta();
out << ",";
out << "rankOfActiveNode:" << getRankOfActiveNode();
out << ",";
out << "maxChildWeight:" << getMaxChildWeight();
out << ",";
out << "accumulatedWeight:" << getAccumulatedWeight();
out << ",";
out << "evenFlags:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getEvenFlags(i) << ",";
   }
   out << getEvenFlags(DIMENSIONS-1) << "]";
out << ",";
out << "accessNumber:[";
   for (int i = 0; i < DIMENSIONS_TIMES_TWO-1; i++) {
      out << getAccessNumber(i) << ",";
   }
   out << getAccessNumber(DIMENSIONS_TIMES_TWO-1) << "]";
out <<  ")";
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
   getFluidCellType(),
   getP(),
   getRhsPPE(),
   getResiduum(),
   getIsInside(),
   getState(),
   getLevel(),
   getDelta(),
   getRankOfActiveNode(),
   getMaxChildWeight(),
   getAccumulatedWeight(),
   getEvenFlags(),
   getAccessNumber()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
   const int Attributes = 6;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //level
      MPI_INT,		 //delta
      MPI_DOUBLE,		 //maxChildWeight
      MPI_DOUBLE,		 //accumulatedWeight
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //level
      1,		 //delta
      1,		 //maxChildWeight
      1,		 //accumulatedWeight
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._delta))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._level))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


