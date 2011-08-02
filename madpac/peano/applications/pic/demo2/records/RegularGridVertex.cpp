#include "peano/applications/pic/demo2/records/RegularGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain):
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
               "peano::applications::pic::demo2::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertex",
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
      
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
               "peano::applications::pic::demo2::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::pic::demo2::records::RegularGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
               "peano::applications::pic::demo2::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertex",
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
      
      
      
      void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
               "peano::applications::pic::demo2::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::pic::demo2::records::RegularGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
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
   
   
   peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {
   
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
   out << "("; 
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


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
   return RegularGridVertexPacked(
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );
   
   MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertex dummyRegularGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
      MPI_Type_commit( &RegularGridVertex::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertex::Datatype );
      
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
            "peano::applications::pic::demo2::records::RegularGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridVertex",
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
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
            "peano::applications::pic::demo2::records::RegularGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridVertex",
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
   
   
   
   bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
   out << "("; 
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


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
   return RegularGridVertex(
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );
   
   MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertexPacked dummyRegularGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
            "peano::applications::pic::demo2::records::RegularGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
   
   
   
   void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
            "peano::applications::pic::demo2::records::RegularGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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
   
   
   
   bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertex dummyRegularGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
   MPI_Type_commit( &RegularGridVertex::Datatype );
   
}


void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertex::Datatype );
   
}

void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
         msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
         "peano::applications::pic::demo2::records::RegularGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::pic::demo2::records::RegularGridVertex",
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



void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
         "peano::applications::pic::demo2::records::RegularGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::pic::demo2::records::RegularGridVertex",
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



bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertexPacked dummyRegularGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridVertexPacked::Datatype );
   
}


void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertexPacked::Datatype );
   
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
         "peano::applications::pic::demo2::records::RegularGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
         "peano::applications::pic::demo2::records::RegularGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
      msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
      "peano::applications::pic::demo2::records::RegularGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::pic::demo2::records::RegularGridVertex",
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



void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
      "peano::applications::pic::demo2::records::RegularGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::pic::demo2::records::RegularGridVertex",
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



bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
      "peano::applications::pic::demo2::records::RegularGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
      "peano::applications::pic::demo2::records::RegularGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain):
_insideOutsideDomain(insideOutsideDomain) {

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain) {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(insideOutsideDomain) {

}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
   msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
   "peano::applications::pic::demo2::records::RegularGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::pic::demo2::records::RegularGridVertex",
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



void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
   "peano::applications::pic::demo2::records::RegularGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::pic::demo2::records::RegularGridVertex",
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



bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
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
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
   "peano::applications::pic::demo2::records::RegularGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
   "peano::applications::pic::demo2::records::RegularGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {

}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
"peano::applications::pic::demo2::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertex",
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



void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
"peano::applications::pic::demo2::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertex",
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



bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::pic::demo2::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::pic::demo2::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::RegularGridVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {

}


peano::applications::pic::demo2::records::RegularGridVertex::~RegularGridVertex() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::pic::demo2::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertex::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertexPacked peano::applications::pic::demo2::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertex::_log( "peano::applications::pic::demo2::records::RegularGridVertex" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertex::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertex "
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
"peano::applications::pic::demo2::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertex",
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



void peano::applications::pic::demo2::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertex failed: "
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
"peano::applications::pic::demo2::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertex",
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



bool peano::applications::pic::demo2::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::RegularGridVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::pic::demo2::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


peano::applications::pic::demo2::records::RegularGridVertex::InsideOutsideDomain peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::pic::demo2::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::pic::demo2::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::pic::demo2::records::RegularGridVertex::toString(param);
}

std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::pic::demo2::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::pic::demo2::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::pic::demo2::records::RegularGridVertexPacked::PersistentRecords peano::applications::pic::demo2::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::pic::demo2::records::RegularGridVertex peano::applications::pic::demo2::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::pic::demo2::records::RegularGridVertexPacked::_log( "peano::applications::pic::demo2::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::pic::demo2::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::pic::demo2::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::pic::demo2::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::pic::demo2::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::pic::demo2::records::RegularGridVertexPacked "
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
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



void peano::applications::pic::demo2::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::pic::demo2::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::pic::demo2::records::RegularGridVertexPacked failed: "
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
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::pic::demo2::records::RegularGridVertexPacked",
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



bool peano::applications::pic::demo2::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::pic::demo2::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif

