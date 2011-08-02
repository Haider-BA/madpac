#include "peano/kernel/spacetreegrid/tests/records/TestCell.h"

#if !defined(Debug) && !defined(Parallel)
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell() {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::~TestCell() { }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::toString (std::ostream& out) const {
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
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked peano::kernel::spacetreegrid::tests::records::TestCell::convert() const{
      return TestCellPacked(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCell::_log( "peano::kernel::spacetreegrid::tests::records::TestCell" );
      
      MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCell::Datatype = 0;
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::initDatatype() {
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
         TestCell dummyTestCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[1]._persistentRecords._state))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCell::Datatype );
         MPI_Type_commit( &TestCell::Datatype );
         
      }
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::shutdownDatatype() {
         MPI_Type_free( &TestCell::Datatype );
         
      }
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCell "
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
               msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCell "
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
               "peano::kernel::spacetreegrid::tests::records::TestCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCell",
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
      
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCell from node "
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
               msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCell failed: "
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
               "peano::kernel::spacetreegrid::tests::records::TestCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCell",
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
      
      
      
      bool peano::kernel::spacetreegrid::tests::records::TestCell::isMessageInQueue(int tag) {
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
      
      int peano::kernel::spacetreegrid::tests::records::TestCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::~TestCellPacked() { }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString(const State& param) {
      return peano::kernel::spacetreegrid::tests::records::TestCell::toString(param);
   }
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::getStateMapping() {
      return peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping();
   }
   
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::spacetreegrid::tests::records::TestCell peano::kernel::spacetreegrid::tests::records::TestCellPacked::convert() const{
      return TestCell(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCellPacked::_log( "peano::kernel::spacetreegrid::tests::records::TestCellPacked" );
      
      MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCellPacked::Datatype = 0;
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::initDatatype() {
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
         TestCellPacked dummyTestCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCellPacked::Datatype );
         MPI_Type_commit( &TestCellPacked::Datatype );
         
      }
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::shutdownDatatype() {
         MPI_Type_free( &TestCellPacked::Datatype );
         
      }
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
               msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
      
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCellPacked from node "
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
               msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCellPacked failed: "
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
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
      
      
      
      bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell() {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::~TestCell() { }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::kernel::spacetreegrid::tests::records::TestCell::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::toString (std::ostream& out) const {
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
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked peano::kernel::spacetreegrid::tests::records::TestCell::convert() const{
      return TestCellPacked(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCell::_log( "peano::kernel::spacetreegrid::tests::records::TestCell" );
      
      MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCell::Datatype = 0;
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::initDatatype() {
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
         TestCell dummyTestCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[1]._persistentRecords._state))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCell::Datatype );
         MPI_Type_commit( &TestCell::Datatype );
         
      }
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::shutdownDatatype() {
         MPI_Type_free( &TestCell::Datatype );
         
      }
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCell "
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
               msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCell "
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
               "peano::kernel::spacetreegrid::tests::records::TestCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCell",
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
      
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCell from node "
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
               msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCell failed: "
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
               "peano::kernel::spacetreegrid::tests::records::TestCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCell",
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
      
      
      
      bool peano::kernel::spacetreegrid::tests::records::TestCell::isMessageInQueue(int tag) {
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
      
      int peano::kernel::spacetreegrid::tests::records::TestCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _level(level),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::~TestCellPacked() { }
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString(const State& param) {
      return peano::kernel::spacetreegrid::tests::records::TestCell::toString(param);
   }
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::getStateMapping() {
      return peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping();
   }
   
   
   
   std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::spacetreegrid::tests::records::TestCell peano::kernel::spacetreegrid::tests::records::TestCellPacked::convert() const{
      return TestCell(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCellPacked::_log( "peano::kernel::spacetreegrid::tests::records::TestCellPacked" );
      
      MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCellPacked::Datatype = 0;
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_LONG,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //level
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         TestCellPacked dummyTestCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[1]._persistentRecords._level))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCellPacked::Datatype );
         MPI_Type_commit( &TestCellPacked::Datatype );
         
      }
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::shutdownDatatype() {
         MPI_Type_free( &TestCellPacked::Datatype );
         
      }
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
               msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
      
      
      
      void peano::kernel::spacetreegrid::tests::records::TestCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCellPacked from node "
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
               msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCellPacked failed: "
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
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
      
      
      
      bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords() {
   
}


peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


bool peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getState() const {
   return _state;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell() {
   
}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::kernel::spacetreegrid::tests::records::TestCell::~TestCell() { }


bool peano::kernel::spacetreegrid::tests::records::TestCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::getState() const {
   return _persistentRecords._state;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::getDelta() const {
   return _persistentRecords._delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::kernel::spacetreegrid::tests::records::TestCell::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::spacetreegrid::tests::records::TestCell::toString (std::ostream& out) const {
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


peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::spacetreegrid::tests::records::TestCellPacked peano::kernel::spacetreegrid::tests::records::TestCell::convert() const{
   return TestCellPacked(
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
   
   tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCell::_log( "peano::kernel::spacetreegrid::tests::records::TestCell" );
   
   MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCell::Datatype = 0;
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::initDatatype() {
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
      TestCell dummyTestCell[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._state))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._delta))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[1]._persistentRecords._state))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCell::Datatype );
      MPI_Type_commit( &TestCell::Datatype );
      
   }
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::shutdownDatatype() {
      MPI_Type_free( &TestCell::Datatype );
      
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCell "
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
            msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCell "
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
            "peano::kernel::spacetreegrid::tests::records::TestCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::spacetreegrid::tests::records::TestCell",
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
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCell from node "
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
            msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCell failed: "
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
            "peano::kernel::spacetreegrid::tests::records::TestCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::spacetreegrid::tests::records::TestCell",
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
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCell::isMessageInQueue(int tag) {
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
   
   int peano::kernel::spacetreegrid::tests::records::TestCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
   setIsInside(isInside);
   setState(state);
   setEvenFlags(evenFlags);
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::~TestCellPacked() { }


bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 3 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString(const State& param) {
   return peano::kernel::spacetreegrid::tests::records::TestCell::toString(param);
}

std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::getStateMapping() {
   return peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping();
}



std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString (std::ostream& out) const {
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


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::spacetreegrid::tests::records::TestCell peano::kernel::spacetreegrid::tests::records::TestCellPacked::convert() const{
   return TestCell(
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
   
   tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCellPacked::_log( "peano::kernel::spacetreegrid::tests::records::TestCellPacked" );
   
   MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCellPacked::Datatype = 0;
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //delta
         MPI_DOUBLE,		 //maxChildWeight
         MPI_DOUBLE,		 //accumulatedWeight
         MPI_LONG,		 //_packedRecords0
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
      TestCellPacked dummyTestCellPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._delta))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[1]._persistentRecords._delta))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCellPacked::Datatype );
      MPI_Type_commit( &TestCellPacked::Datatype );
      
   }
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::shutdownDatatype() {
      MPI_Type_free( &TestCellPacked::Datatype );
      
   }
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
            msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
            "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
   
   
   
   void peano::kernel::spacetreegrid::tests::records::TestCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCellPacked from node "
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
            msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCellPacked failed: "
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
            "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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
   
   
   
   bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords() {

}


peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getState() const {
return _state;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getLevel() const {
return _level;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getDelta() const {
return _delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell() {

}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::kernel::spacetreegrid::tests::records::TestCell::TestCell(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::kernel::spacetreegrid::tests::records::TestCell::~TestCell() { }


bool peano::kernel::spacetreegrid::tests::records::TestCell::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCell::getState() const {
return _persistentRecords._state;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::getLevel() const {
return _persistentRecords._level;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::getDelta() const {
return _persistentRecords._delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCell::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCell::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::kernel::spacetreegrid::tests::records::TestCell::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::kernel::spacetreegrid::tests::records::TestCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::kernel::spacetreegrid::tests::records::TestCell::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::kernel::spacetreegrid::tests::records::TestCell::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::kernel::spacetreegrid::tests::records::TestCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::kernel::spacetreegrid::tests::records::TestCell::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::kernel::spacetreegrid::tests::records::TestCell::toString (std::ostream& out) const {
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


peano::kernel::spacetreegrid::tests::records::TestCell::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCell::getPersistentRecords() const {
return _persistentRecords;
}

peano::kernel::spacetreegrid::tests::records::TestCellPacked peano::kernel::spacetreegrid::tests::records::TestCell::convert() const{
return TestCellPacked(
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

tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCell::_log( "peano::kernel::spacetreegrid::tests::records::TestCell" );

MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCell::Datatype = 0;


void peano::kernel::spacetreegrid::tests::records::TestCell::initDatatype() {
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
   TestCell dummyTestCell[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._state))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._level))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._delta))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._maxChildWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[0]._persistentRecords._accumulatedWeight))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCell[1]._persistentRecords._state))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCell::Datatype );
   MPI_Type_commit( &TestCell::Datatype );
   
}


void peano::kernel::spacetreegrid::tests::records::TestCell::shutdownDatatype() {
   MPI_Type_free( &TestCell::Datatype );
   
}

void peano::kernel::spacetreegrid::tests::records::TestCell::send(int destination, int tag) {
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
      msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCell "
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
         msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCell "
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
         "peano::kernel::spacetreegrid::tests::records::TestCell",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::kernel::spacetreegrid::tests::records::TestCell",
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



void peano::kernel::spacetreegrid::tests::records::TestCell::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCell from node "
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
         msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCell failed: "
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
         "peano::kernel::spacetreegrid::tests::records::TestCell",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::kernel::spacetreegrid::tests::records::TestCell",
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



bool peano::kernel::spacetreegrid::tests::records::TestCell::isMessageInQueue(int tag) {
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

int peano::kernel::spacetreegrid::tests::records::TestCell::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_level(level),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_accessNumber(accessNumber) {
setIsInside(isInside);
setState(state);
setEvenFlags(evenFlags);
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::TestCellPacked(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::kernel::spacetreegrid::tests::records::TestCellPacked::~TestCellPacked() { }


bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::kernel::spacetreegrid::tests::records::TestCell::State peano::kernel::spacetreegrid::tests::records::TestCellPacked::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 3 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString(const State& param) {
return peano::kernel::spacetreegrid::tests::records::TestCell::toString(param);
}

std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::getStateMapping() {
return peano::kernel::spacetreegrid::tests::records::TestCell::getStateMapping();
}



std::string peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::kernel::spacetreegrid::tests::records::TestCellPacked::toString (std::ostream& out) const {
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


peano::kernel::spacetreegrid::tests::records::TestCellPacked::PersistentRecords peano::kernel::spacetreegrid::tests::records::TestCellPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::kernel::spacetreegrid::tests::records::TestCell peano::kernel::spacetreegrid::tests::records::TestCellPacked::convert() const{
return TestCell(
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

tarch::logging::Log peano::kernel::spacetreegrid::tests::records::TestCellPacked::_log( "peano::kernel::spacetreegrid::tests::records::TestCellPacked" );

MPI_Datatype peano::kernel::spacetreegrid::tests::records::TestCellPacked::Datatype = 0;


void peano::kernel::spacetreegrid::tests::records::TestCellPacked::initDatatype() {
   const int Attributes = 6;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //level
      MPI_INT,		 //delta
      MPI_DOUBLE,		 //maxChildWeight
      MPI_DOUBLE,		 //accumulatedWeight
      MPI_LONG,		 //_packedRecords0
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
   TestCellPacked dummyTestCellPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._level))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._delta))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestCellPacked[1]._persistentRecords._level))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestCellPacked::Datatype );
   MPI_Type_commit( &TestCellPacked::Datatype );
   
}


void peano::kernel::spacetreegrid::tests::records::TestCellPacked::shutdownDatatype() {
   MPI_Type_free( &TestCellPacked::Datatype );
   
}

void peano::kernel::spacetreegrid::tests::records::TestCellPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
         msg << "testing for finished send task for peano::kernel::spacetreegrid::tests::records::TestCellPacked "
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
         "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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



void peano::kernel::spacetreegrid::tests::records::TestCellPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::kernel::spacetreegrid::tests::records::TestCellPacked from node "
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
         msg << "testing for finished receive task for peano::kernel::spacetreegrid::tests::records::TestCellPacked failed: "
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
         "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::kernel::spacetreegrid::tests::records::TestCellPacked",
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



bool peano::kernel::spacetreegrid::tests::records::TestCellPacked::isMessageInQueue(int tag) {
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

int peano::kernel::spacetreegrid::tests::records::TestCellPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


