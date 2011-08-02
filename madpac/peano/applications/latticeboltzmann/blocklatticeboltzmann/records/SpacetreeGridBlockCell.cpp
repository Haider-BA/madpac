#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockCell.h"

#if !defined(Debug) && !defined(Parallel)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::convert() const{
      return SpacetreeGridBlockCellPacked(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::initDatatype() {
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
         SpacetreeGridBlockCell dummySpacetreeGridBlockCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[1]._persistentRecords._state))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCell::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::convert() const{
      return SpacetreeGridBlockCell(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
         SpacetreeGridBlockCellPacked dummySpacetreeGridBlockCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCellPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::convert() const{
      return SpacetreeGridBlockCellPacked(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::initDatatype() {
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
         SpacetreeGridBlockCell dummySpacetreeGridBlockCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[1]._persistentRecords._state))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCell::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _level(level),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getIsInside() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getState() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      short int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(param);
   }
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getStateMapping() {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::convert() const{
      return SpacetreeGridBlockCell(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
         SpacetreeGridBlockCellPacked dummySpacetreeGridBlockCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[1]._persistentRecords._level))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCellPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
   return _state;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getState() const {
   return _persistentRecords._state;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::convert() const{
   return SpacetreeGridBlockCellPacked(
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
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::initDatatype() {
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
      SpacetreeGridBlockCell dummySpacetreeGridBlockCell[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._state))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._delta))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[1]._persistentRecords._state))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCell::Datatype );
      MPI_Type_commit( &SpacetreeGridBlockCell::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(short int))));
   
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getIsInside() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getState() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 3 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getStateMapping() {
   return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::convert() const{
   return SpacetreeGridBlockCell(
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
   
   tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked" );
   
   MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::Datatype = 0;
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
      SpacetreeGridBlockCellPacked dummySpacetreeGridBlockCellPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._delta))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[1]._persistentRecords._delta))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCellPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridBlockCellPacked::Datatype );
      
   }
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
      
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
            msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked failed: "
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
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
return _state;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getState() const {
return _persistentRecords._state;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::convert() const{
return SpacetreeGridBlockCellPacked(
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::initDatatype() {
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
   SpacetreeGridBlockCell dummySpacetreeGridBlockCell[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._state))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._level))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._delta))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._maxChildWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[0]._persistentRecords._accumulatedWeight))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCell[1]._persistentRecords._state))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCell::Datatype );
   MPI_Type_commit( &SpacetreeGridBlockCell::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
short int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
short int tmp = _packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(short int))));

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getIsInside() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::State peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getState() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
short int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
short int mask = (short int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 3 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::toString(param);
}

std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getStateMapping() {
return peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell::getStateMapping();
}



std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
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


peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::convert() const{
return SpacetreeGridBlockCell(
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

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked" );

MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::Datatype = 0;


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
   SpacetreeGridBlockCellPacked dummySpacetreeGridBlockCellPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._level))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._delta))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockCellPacked[1]._persistentRecords._level))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockCellPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridBlockCellPacked::Datatype );
   
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
   
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
         msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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



void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked from node "
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
         msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked failed: "
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
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked",
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



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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

int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


