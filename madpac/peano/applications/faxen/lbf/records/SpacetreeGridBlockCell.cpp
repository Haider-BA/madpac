#include "peano/applications/faxen/lbf/records/SpacetreeGridBlockCell.h"

#if !defined(Debug) && !defined(Parallel)
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _P(P),
   _U(U),
   _V(V),
   _F(F),
   _G(G),
   _rhs(rhs),
   _res(res),
   _isInside(isInside),
   _state(state),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getP() const {
      return _P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setP(const double& P) {
      _P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getU() const {
      return _U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setU(const double& U) {
      _U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getV() const {
      return _V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setV(const double& V) {
      _V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setF(const double& F) {
      _F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getG() const {
      return _G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setG(const double& G) {
      _G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside, persistentRecords._state, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(P, U, V, F, G, rhs, res, isInside, state, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getP() const {
      return _persistentRecords._P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setP(const double& P) {
      _persistentRecords._P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getU() const {
      return _persistentRecords._U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setU(const double& U) {
      _persistentRecords._U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getV() const {
      return _persistentRecords._V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setV(const double& V) {
      _persistentRecords._V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setF(const double& F) {
      _persistentRecords._F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getG() const {
      return _persistentRecords._G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setG(const double& G) {
      _persistentRecords._G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
      out << "("; 
      out << "P:" << getP();
      out << ",";
      out << "U:" << getU();
      out << ",";
      out << "V:" << getV();
      out << ",";
      out << "F:" << getF();
      out << ",";
      out << "G:" << getG();
      out << ",";
      out << "rhs:" << getRhs();
      out << ",";
      out << "res:" << getRes();
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::convert() const{
      return SpacetreeGridBlockCellPacked(
         getP(),
         getU(),
         getV(),
         getF(),
         getG(),
         getRhs(),
         getRes(),
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::initDatatype() {
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
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCell from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _P(P),
   _U(U),
   _V(V),
   _F(F),
   _G(G),
   _rhs(rhs),
   _res(res),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getP() const {
      return _P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setP(const double& P) {
      _P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getU() const {
      return _U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setU(const double& U) {
      _U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getV() const {
      return _V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setV(const double& V) {
      _V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setF(const double& F) {
      _F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getG() const {
      return _G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setG(const double& G) {
      _G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(P, U, V, F, G, rhs, res, isInside, state, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getP() const {
      return _persistentRecords._P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setP(const double& P) {
      _persistentRecords._P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getU() const {
      return _persistentRecords._U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setU(const double& U) {
      _persistentRecords._U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getV() const {
      return _persistentRecords._V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setV(const double& V) {
      _persistentRecords._V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setF(const double& F) {
      _persistentRecords._F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getG() const {
      return _persistentRecords._G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setG(const double& G) {
      _persistentRecords._G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
      return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getStateMapping() {
      return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P:" << getP();
      out << ",";
      out << "U:" << getU();
      out << ",";
      out << "V:" << getV();
      out << ",";
      out << "F:" << getF();
      out << ",";
      out << "G:" << getG();
      out << ",";
      out << "rhs:" << getRhs();
      out << ",";
      out << "res:" << getRes();
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::convert() const{
      return SpacetreeGridBlockCell(
         getP(),
         getU(),
         getV(),
         getF(),
         getG(),
         getRhs(),
         getRes(),
         getIsInside(),
         getState(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel) && defined(Debug)
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _P(P),
   _U(U),
   _V(V),
   _F(F),
   _G(G),
   _rhs(rhs),
   _res(res),
   _isInside(isInside),
   _state(state),
   _level(level),
   _evenFlags(evenFlags),
   _accessNumber(accessNumber) {
      
   }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getP() const {
      return _P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setP(const double& P) {
      _P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getU() const {
      return _U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setU(const double& U) {
      _U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getV() const {
      return _V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setV(const double& V) {
      _V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setF(const double& F) {
      _F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getG() const {
      return _G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setG(const double& G) {
      _G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
      return _isInside;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
      _isInside = isInside;
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
      return _state;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
      _state = state;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
      return _evenFlags;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _evenFlags = (evenFlags);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._evenFlags, persistentRecords._accessNumber) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(P, U, V, F, G, rhs, res, isInside, state, level, evenFlags, accessNumber) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getP() const {
      return _persistentRecords._P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setP(const double& P) {
      _persistentRecords._P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getU() const {
      return _persistentRecords._U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setU(const double& U) {
      _persistentRecords._U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getV() const {
      return _persistentRecords._V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setV(const double& V) {
      _persistentRecords._V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setF(const double& F) {
      _persistentRecords._F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getG() const {
      return _persistentRecords._G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setG(const double& G) {
      _persistentRecords._G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getIsInside() const {
      return _persistentRecords._isInside;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
      _persistentRecords._isInside = isInside;
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getState() const {
      return _persistentRecords._state;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setState(const State& state) {
      _persistentRecords._state = state;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags() const {
      return _persistentRecords._evenFlags;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      _persistentRecords._evenFlags = (evenFlags);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._evenFlags[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags[elementIndex]= evenFlags;
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._evenFlags.flip(elementIndex);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(const State& param) {
      switch (param) {
         case Leaf: return "Leaf";
         case Refined: return "Refined";
         case Root: return "Root";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping() {
      return "State(Leaf=0,Refined=1,Root=2)";
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
      out << "("; 
      out << "P:" << getP();
      out << ",";
      out << "U:" << getU();
      out << ",";
      out << "V:" << getV();
      out << ",";
      out << "F:" << getF();
      out << ",";
      out << "G:" << getG();
      out << ",";
      out << "rhs:" << getRhs();
      out << ",";
      out << "res:" << getRes();
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::convert() const{
      return SpacetreeGridBlockCellPacked(
         getP(),
         getU(),
         getV(),
         getF(),
         getG(),
         getRhs(),
         getRes(),
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::initDatatype() {
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
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCell from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _P(P),
   _U(U),
   _V(V),
   _F(F),
   _G(G),
   _rhs(rhs),
   _res(res),
   _level(level),
   _accessNumber(accessNumber) {
      setIsInside(isInside);
      setState(state);
      setEvenFlags(evenFlags);
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getP() const {
      return _P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setP(const double& P) {
      _P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getU() const {
      return _U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setU(const double& U) {
      _U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getV() const {
      return _V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setV(const double& V) {
      _V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setF(const double& F) {
      _F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getG() const {
      return _G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setG(const double& G) {
      _G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _packedRecords0 = _packedRecords0 & ~mask;
      _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
      return _accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _accessNumber = (accessNumber);
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
   _persistentRecords(P, U, V, F, G, rhs, res, isInside, state, level, evenFlags, accessNumber) {
      assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getP() const {
      return _persistentRecords._P;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setP(const double& P) {
      _persistentRecords._P = P;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getU() const {
      return _persistentRecords._U;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setU(const double& U) {
      _persistentRecords._U = U;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getV() const {
      return _persistentRecords._V;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setV(const double& V) {
      _persistentRecords._V = V;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setF(const double& F) {
      _persistentRecords._F = F;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getG() const {
      return _persistentRecords._G;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setG(const double& G) {
      _persistentRecords._G = G;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getIsInside() const {
      long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
      long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getState() const {
      long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
      assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      long int tmp = _persistentRecords._packedRecords0 & mask;
      tmp = tmp >> (3);
      std::bitset<DIMENSIONS> result = tmp;
      return result;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
      long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
      mask = mask << (3);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      return (_persistentRecords._packedRecords0& mask);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      assertion(!evenFlags || evenFlags==1);
      int shift        = 3 + elementIndex; 
      int mask         = 1     << (shift);
      int shiftedValue = evenFlags << (shift);
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
      _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      int mask = 1 << (3);
      mask = mask << elementIndex;
      _persistentRecords._packedRecords0^= mask;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
      return _persistentRecords._accessNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
      _persistentRecords._accessNumber = (accessNumber);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      return _persistentRecords._accessNumber[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS_TIMES_TWO);
      _persistentRecords._accessNumber[elementIndex]= accessNumber;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
      return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getStateMapping() {
      return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping();
   }
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P:" << getP();
      out << ",";
      out << "U:" << getU();
      out << ",";
      out << "V:" << getV();
      out << ",";
      out << "F:" << getF();
      out << ",";
      out << "G:" << getG();
      out << ",";
      out << "rhs:" << getRhs();
      out << ",";
      out << "res:" << getRes();
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockCell peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::convert() const{
      return SpacetreeGridBlockCell(
         getP(),
         getU(),
         getV(),
         getF(),
         getG(),
         getRhs(),
         getRes(),
         getIsInside(),
         getState(),
         getLevel(),
         getEvenFlags(),
         getAccessNumber()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && !defined(Debug)
peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
_isInside(isInside),
_state(state),
_delta(delta),
_rankOfActiveNode(rankOfActiveNode),
_maxChildWeight(maxChildWeight),
_accumulatedWeight(accumulatedWeight),
_evenFlags(evenFlags),
_accessNumber(accessNumber) {
   
}


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
   return _isInside;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
   _isInside = isInside;
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
   return _state;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
   _state = state;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
   return _evenFlags;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside, persistentRecords._state, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(P, U, V, F, G, rhs, res, isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getIsInside() const {
   return _persistentRecords._isInside;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
   _persistentRecords._isInside = isInside;
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getState() const {
   return _persistentRecords._state;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setState(const State& state) {
   _persistentRecords._state = state;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags() const {
   return _persistentRecords._evenFlags;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   _persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._evenFlags[elementIndex];
   
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags[elementIndex]= evenFlags;
   
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(const State& param) {
   switch (param) {
      case Leaf: return "Leaf";
      case Refined: return "Refined";
      case Root: return "Root";
   }
   return "undefined";
}

std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping() {
   return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
   out << "("; 
   out << "P:" << getP();
   out << ",";
   out << "U:" << getU();
   out << ",";
   out << "V:" << getV();
   out << ",";
   out << "F:" << getF();
   out << ",";
   out << "G:" << getG();
   out << ",";
   out << "rhs:" << getRhs();
   out << ",";
   out << "res:" << getRes();
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


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::convert() const{
   return SpacetreeGridBlockCellPacked(
      getP(),
      getU(),
      getV(),
      getF(),
      getG(),
      getRhs(),
      getRes(),
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
   
   tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::initDatatype() {
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
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCell from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell failed: "
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
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
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


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getP() const {
   return _P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setP(const double& P) {
   _P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getU() const {
   return _U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setU(const double& U) {
   _U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getV() const {
   return _V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setV(const double& V) {
   _V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setF(const double& F) {
   _F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getG() const {
   return _G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setG(const double& G) {
   _G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRes(const double& res) {
   _res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getDelta() const {
   return _delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setDelta(const int& delta) {
   _delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRankOfActiveNode() const {
   return _rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
   _rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getMaxChildWeight() const {
   return _maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
   _maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccumulatedWeight() const {
   return _accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
   _accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
   return _accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _accessNumber = (accessNumber);
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(P, U, V, F, G, rhs, res, isInside, state, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
   assertion((DIMENSIONS+3 < (8 * sizeof(long int))));
   
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getP() const {
   return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setP(const double& P) {
   _persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getU() const {
   return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setU(const double& U) {
   _persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getV() const {
   return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setV(const double& V) {
   _persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getF() const {
   return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setF(const double& F) {
   _persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getG() const {
   return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setG(const double& G) {
   _persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRes(const double& res) {
   _persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getIsInside() const {
   long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
   long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getState() const {
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
   assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getDelta() const {
   return _persistentRecords._delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setDelta(const int& delta) {
   _persistentRecords._delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRankOfActiveNode() const {
   return _persistentRecords._rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
   _persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getMaxChildWeight() const {
   return _persistentRecords._maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setMaxChildWeight(const double& maxChildWeight) {
   _persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccumulatedWeight() const {
   return _persistentRecords._accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
   _persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (3);
   std::bitset<DIMENSIONS> result = tmp;
   return result;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
   long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
   mask = mask << (3);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   assertion(!evenFlags || evenFlags==1);
   int shift        = 3 + elementIndex; 
   int mask         = 1     << (shift);
   int shiftedValue = evenFlags << (shift);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   int mask = 1 << (3);
   mask = mask << elementIndex;
   _persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
   return _persistentRecords._accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
   _persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   return _persistentRecords._accessNumber[elementIndex];
   
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS_TIMES_TWO);
   _persistentRecords._accessNumber[elementIndex]= accessNumber;
   
}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
   return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(param);
}

std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getStateMapping() {
   return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping();
}



std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "P:" << getP();
   out << ",";
   out << "U:" << getU();
   out << ",";
   out << "V:" << getV();
   out << ",";
   out << "F:" << getF();
   out << ",";
   out << "G:" << getG();
   out << ",";
   out << "rhs:" << getRhs();
   out << ",";
   out << "res:" << getRes();
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


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::SpacetreeGridBlockCell peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::convert() const{
   return SpacetreeGridBlockCell(
      getP(),
      getU(),
      getV(),
      getF(),
      getG(),
      getRhs(),
      getRes(),
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
   
   tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::initDatatype() {
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
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked failed: "
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
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && defined(Debug)
peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
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


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getP() const {
return _P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setP(const double& P) {
_P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getU() const {
return _U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setU(const double& U) {
_U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getV() const {
return _V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setV(const double& V) {
_V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getF() const {
return _F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setF(const double& F) {
_F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getG() const {
return _G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setG(const double& G) {
_G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRes() const {
return _res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRes(const double& res) {
_res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getIsInside() const {
return _isInside;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setIsInside(const bool& isInside) {
_isInside = isInside;
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getState() const {
return _state;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setState(const State& state) {
_state = state;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getEvenFlags() const {
return _evenFlags;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_evenFlags = (evenFlags);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell() {

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords._isInside, persistentRecords._state, persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords._evenFlags, persistentRecords._accessNumber) {

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::SpacetreeGridBlockCell(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(P, U, V, F, G, rhs, res, isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::~SpacetreeGridBlockCell() { }


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getP() const {
return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setP(const double& P) {
_persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getU() const {
return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setU(const double& U) {
_persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getV() const {
return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setV(const double& V) {
_persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getF() const {
return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setF(const double& F) {
_persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getG() const {
return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setG(const double& G) {
_persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRes() const {
return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRes(const double& res) {
_persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getIsInside() const {
return _persistentRecords._isInside;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setIsInside(const bool& isInside) {
_persistentRecords._isInside = isInside;
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getState() const {
return _persistentRecords._state;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setState(const State& state) {
_persistentRecords._state = state;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags() const {
return _persistentRecords._evenFlags;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
_persistentRecords._evenFlags = (evenFlags);
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._evenFlags[elementIndex];

}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags[elementIndex]= evenFlags;

}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._evenFlags.flip(elementIndex);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(const State& param) {
switch (param) {
   case Leaf: return "Leaf";
   case Refined: return "Refined";
   case Root: return "Root";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping() {
return "State(Leaf=0,Refined=1,Root=2)";
}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString (std::ostream& out) const {
out << "("; 
out << "P:" << getP();
out << ",";
out << "U:" << getU();
out << ",";
out << "V:" << getV();
out << ",";
out << "F:" << getF();
out << ",";
out << "G:" << getG();
out << ",";
out << "rhs:" << getRhs();
out << ",";
out << "res:" << getRes();
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


peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::convert() const{
return SpacetreeGridBlockCellPacked(
   getP(),
   getU(),
   getV(),
   getF(),
   getG(),
   getRhs(),
   getRes(),
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

tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell" );

MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::Datatype = 0;


void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::initDatatype() {
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


void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockCell::Datatype );
   
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
         msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell "
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
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCell from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCell failed: "
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
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCell",
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



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::PersistentRecords(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_P(P),
_U(U),
_V(V),
_F(F),
_G(G),
_rhs(rhs),
_res(res),
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


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getP() const {
return _P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setP(const double& P) {
_P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getU() const {
return _U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setU(const double& U) {
_U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getV() const {
return _V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setV(const double& V) {
_V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setF(const double& F) {
_F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getG() const {
return _G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setG(const double& G) {
_G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRes() const {
return _res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRes(const double& res) {
_res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _packedRecords0 = isInside ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | state << (1);
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getDelta() const {
return _delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setDelta(const int& delta) {
_delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getRankOfActiveNode() const {
return _rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setRankOfActiveNode(const int& rankOfActiveNode) {
_rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getMaxChildWeight() const {
return _maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setMaxChildWeight(const double& maxChildWeight) {
_maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccumulatedWeight() const {
return _accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccumulatedWeight(const double& accumulatedWeight) {
_accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_packedRecords0 = _packedRecords0 & ~mask;
_packedRecords0 = _packedRecords0 | evenFlags.to_ulong() << (3);
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::getAccessNumber() const {
return _accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_accessNumber = (accessNumber);
}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked() {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P, persistentRecords._U, persistentRecords._V, persistentRecords._F, persistentRecords._G, persistentRecords._rhs, persistentRecords._res, persistentRecords.getIsInside(), persistentRecords.getState(), persistentRecords._level, persistentRecords._delta, persistentRecords._rankOfActiveNode, persistentRecords._maxChildWeight, persistentRecords._accumulatedWeight, persistentRecords.getEvenFlags(), persistentRecords._accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::SpacetreeGridBlockCellPacked(const double& P, const double& U, const double& V, const double& F, const double& G, const double& rhs, const double& res, const bool& isInside, const State& state, const int& level, const int& delta, const int& rankOfActiveNode, const double& maxChildWeight, const double& accumulatedWeight, const std::bitset<DIMENSIONS>& evenFlags, const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber):
_persistentRecords(P, U, V, F, G, rhs, res, isInside, state, level, delta, rankOfActiveNode, maxChildWeight, accumulatedWeight, evenFlags, accessNumber) {
assertion((DIMENSIONS+3 < (8 * sizeof(long int))));

}


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::~SpacetreeGridBlockCellPacked() { }


double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getP() const {
return _persistentRecords._P;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setP(const double& P) {
_persistentRecords._P = P;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getU() const {
return _persistentRecords._U;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setU(const double& U) {
_persistentRecords._U = U;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getV() const {
return _persistentRecords._V;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setV(const double& V) {
_persistentRecords._V = V;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setF(const double& F) {
_persistentRecords._F = F;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getG() const {
return _persistentRecords._G;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setG(const double& G) {
_persistentRecords._G = G;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRes() const {
return _persistentRecords._res;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRes(const double& res) {
_persistentRecords._res = res;
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getIsInside() const {
long int mask = 1 << (0);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setIsInside(const bool& isInside) {
long int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isInside ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::State peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getState() const {
long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   long int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (State) tmp;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setState(const State& state) {
assertion((state >= 0 && state <= 2));
   long int mask =  (1 << (2)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | state << (1);
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getDelta() const {
return _persistentRecords._delta;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setDelta(const int& delta) {
_persistentRecords._delta = delta;
}



int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getRankOfActiveNode() const {
return _persistentRecords._rankOfActiveNode;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setRankOfActiveNode(const int& rankOfActiveNode) {
_persistentRecords._rankOfActiveNode = rankOfActiveNode;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getMaxChildWeight() const {
return _persistentRecords._maxChildWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setMaxChildWeight(const double& maxChildWeight) {
_persistentRecords._maxChildWeight = maxChildWeight;
}



double peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccumulatedWeight() const {
return _persistentRecords._accumulatedWeight;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccumulatedWeight(const double& accumulatedWeight) {
_persistentRecords._accumulatedWeight = accumulatedWeight;
}



std::bitset<DIMENSIONS> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags() const {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
long int tmp = _persistentRecords._packedRecords0 & mask;
tmp = tmp >> (3);
std::bitset<DIMENSIONS> result = tmp;
return result;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(const std::bitset<DIMENSIONS>& evenFlags) {
long int mask = (long int) (1 << (DIMENSIONS)) - 1 ;
mask = mask << (3);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | evenFlags.to_ulong() << (3);
}



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getEvenFlags(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
return (_persistentRecords._packedRecords0& mask);
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setEvenFlags(int elementIndex, const bool& evenFlags) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
assertion(!evenFlags || evenFlags==1);
int shift        = 3 + elementIndex; 
int mask         = 1     << (shift);
int shiftedValue = evenFlags << (shift);
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
_persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 |  shiftedValue;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::flipEvenFlags(int elementIndex) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
int mask = 1 << (3);
mask = mask << elementIndex;
_persistentRecords._packedRecords0^= mask;
}



tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber() const {
return _persistentRecords._accessNumber;
}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(const tarch::la::Vector<DIMENSIONS_TIMES_TWO,short int>& accessNumber) {
_persistentRecords._accessNumber = (accessNumber);
}



short int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getAccessNumber(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
return _persistentRecords._accessNumber[elementIndex];

}



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::setAccessNumber(int elementIndex, const short int& accessNumber) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS_TIMES_TWO);
_persistentRecords._accessNumber[elementIndex]= accessNumber;

}


std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString(const State& param) {
return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::toString(param);
}

std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getStateMapping() {
return peano::applications::faxen::lbf::records::SpacetreeGridBlockCell::getStateMapping();
}



std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::toString (std::ostream& out) const {
out << "("; 
out << "P:" << getP();
out << ",";
out << "U:" << getU();
out << ",";
out << "V:" << getV();
out << ",";
out << "F:" << getF();
out << ",";
out << "G:" << getG();
out << ",";
out << "rhs:" << getRhs();
out << ",";
out << "res:" << getRes();
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


peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::SpacetreeGridBlockCell peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::convert() const{
return SpacetreeGridBlockCell(
   getP(),
   getU(),
   getV(),
   getF(),
   getG(),
   getRhs(),
   getRes(),
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

tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::initDatatype() {
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


void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridBlockCellPacked::Datatype );
   
}

void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
         msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked "
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
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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



void peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked failed: "
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
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked",
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



bool peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::SpacetreeGridBlockCellPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#endif


