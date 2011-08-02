#include "peano/applications/poisson/vhhjacobi/records/SpacetreeGridCell.h"

#if !defined(Debug) && !defined(Parallel)
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell() {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::~SpacetreeGridCell() { }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString (std::ostream& out) const {
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
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::convert() const{
      return SpacetreeGridCellPacked(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell" );
      
      MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::Datatype = 0;
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::initDatatype() {
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
         SpacetreeGridCell dummySpacetreeGridCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[1]._persistentRecords._state))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCell::Datatype );
         MPI_Type_commit( &SpacetreeGridCell::Datatype );
         
      }
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridCell::Datatype );
         
      }
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
               msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
      
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell failed: "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
      
      
      
      bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::~SpacetreeGridCellPacked() { }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString(const State& param) {
      return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(param);
   }
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getStateMapping() {
      return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::convert() const{
      return SpacetreeGridCell(
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked" );
      
      MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::Datatype = 0;
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::initDatatype() {
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
         SpacetreeGridCellPacked dummySpacetreeGridCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCellPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridCellPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridCellPacked::Datatype );
         
      }
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
      
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked failed: "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
      
      
      
      bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell() {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::~SpacetreeGridCell() { }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString (std::ostream& out) const {
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
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::convert() const{
      return SpacetreeGridCellPacked(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell" );
      
      MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::Datatype = 0;
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::initDatatype() {
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
         SpacetreeGridCell dummySpacetreeGridCell[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._state))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[1]._persistentRecords._state))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCell::Datatype );
         MPI_Type_commit( &SpacetreeGridCell::Datatype );
         
      }
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridCell::Datatype );
         
      }
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
               msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
      
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell failed: "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
      
      
      
      bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _level(level),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::~SpacetreeGridCellPacked() { }
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString(const State& param) {
      return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(param);
   }
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getStateMapping() {
      return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::convert() const{
      return SpacetreeGridCell(
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked" );
      
      MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::Datatype = 0;
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::initDatatype() {
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
         SpacetreeGridCellPacked dummySpacetreeGridCellPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[1]._persistentRecords._level))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCellPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridCellPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridCellPacked::Datatype );
         
      }
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
      
      
      
      void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked failed: "
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
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
      
      
      
      bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getState() const {
   return _state;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell() {
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::~SpacetreeGridCell() { }


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getState() const {
   return _persistentRecords._state;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString (std::ostream& out) const {
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


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::convert() const{
   return SpacetreeGridCellPacked(
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
   
   tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell" );
   
   MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::Datatype = 0;
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::initDatatype() {
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
      SpacetreeGridCell dummySpacetreeGridCell[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._state))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._delta))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[1]._persistentRecords._state))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCell::Datatype );
      MPI_Type_commit( &SpacetreeGridCell::Datatype );
      
   }
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridCell::Datatype );
      
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
            msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell failed: "
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
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::~SpacetreeGridCellPacked() { }


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 3 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString(const State& param) {
   return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(param);
}

std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getStateMapping() {
   return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping();
}



std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString (std::ostream& out) const {
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


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::convert() const{
   return SpacetreeGridCell(
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
   
   tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked" );
   
   MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::Datatype = 0;
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::initDatatype() {
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
      SpacetreeGridCellPacked dummySpacetreeGridCellPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._delta))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[1]._persistentRecords._delta))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCellPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridCellPacked::Datatype );
      
   }
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridCellPacked::Datatype );
      
   }
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
            msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
   
   
   
   void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked failed: "
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
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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
   
   
   
   bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getState() const {
return _state;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell() {

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::SpacetreeGridCell(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::~SpacetreeGridCell() { }


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getState() const {
return _persistentRecords._state;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString (std::ostream& out) const {
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


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::convert() const{
return SpacetreeGridCellPacked(
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

tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell" );

MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::Datatype = 0;


void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::initDatatype() {
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
   SpacetreeGridCell dummySpacetreeGridCell[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._state))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._level))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._delta))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._maxChildWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[0]._persistentRecords._accumulatedWeight))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCell[1]._persistentRecords._state))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCell::Datatype );
   MPI_Type_commit( &SpacetreeGridCell::Datatype );
   
}


void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridCell::Datatype );
   
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
         msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell "
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
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell failed: "
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
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell",
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



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::isMessageInQueue(int tag) {
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

int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::PersistentRecords(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
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


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::SpacetreeGridCellPacked(const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::~SpacetreeGridCellPacked() { }


bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::State peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 3 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString(const State& param) {
return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::toString(param);
}

std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getStateMapping() {
return peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell::getStateMapping();
}



std::string peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::toString (std::ostream& out) const {
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


peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::PersistentRecords peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::vhhjacobi::records::SpacetreeGridCell peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::convert() const{
return SpacetreeGridCell(
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

tarch::logging::Log peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::_log( "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked" );

MPI_Datatype peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::Datatype = 0;


void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::initDatatype() {
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
   SpacetreeGridCellPacked dummySpacetreeGridCellPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._level))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._delta))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._maxChildWeight))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._accumulatedWeight))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridCellPacked[1]._persistentRecords._level))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridCellPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridCellPacked::Datatype );
   
}


void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridCellPacked::Datatype );
   
}

void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
         msg << "testing for finished send task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked "
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
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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



void peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked failed: "
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
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked",
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



bool peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::vhhjacobi::records::SpacetreeGridCellPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


