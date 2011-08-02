#include "peano/applications/navierstokes/prototype2/records/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"

#if !defined(Debug) && !defined(Parallel)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
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
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
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
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _level(level),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
      return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
   return _state;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
   return _persistentRecords._state;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
   out << "("; 
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
   return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
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
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
   setIsInside(isInside);
   setState(state);
   setEvenFlags(evenFlags);
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 3 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
   return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
   out << "("; 
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
   return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getState() const {
return _state;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getState() const {
return _persistentRecords._state;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(
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

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::initDatatype() {
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


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_level(level),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
setIsInside(isInside);
setState(state);
setEvenFlags(evenFlags);
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsInside() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsInside(const bool& isInside) {
short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
short int tmp = _packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked() { }


bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getIsInside() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setIsInside(const bool& isInside) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::State peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
short int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 3 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString(const State& param) {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getStateMapping() {
return peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit::getStateMapping();
}



std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
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


peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit(
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

tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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


void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


