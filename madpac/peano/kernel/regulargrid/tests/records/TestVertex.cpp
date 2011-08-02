#include "peano/kernel/regulargrid/tests/records/TestVertex.h"

#if !defined(Debug)
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain):
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex() {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::~TestVertex() { }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::regulargrid::tests::records::TestVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords peano::kernel::regulargrid::tests::records::TestVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked peano::kernel::regulargrid::tests::records::TestVertex::convert() const{
      return TestVertexPacked(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::regulargrid::tests::records::TestVertex::_log( "peano::kernel::regulargrid::tests::records::TestVertex" );
      
      MPI_Datatype peano::kernel::regulargrid::tests::records::TestVertex::Datatype = 0;
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         TestVertex dummyTestVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertex[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestVertex::Datatype );
         MPI_Type_commit( &TestVertex::Datatype );
         
      }
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::shutdownDatatype() {
         MPI_Type_free( &TestVertex::Datatype );
         
      }
      
      void peano::kernel::regulargrid::tests::records::TestVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestVertex "
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
               msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestVertex "
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
               "peano::kernel::regulargrid::tests::records::TestVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertex",
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
      
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestVertex from node "
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
               msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestVertex failed: "
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
               "peano::kernel::regulargrid::tests::records::TestVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertex",
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
      
      
      
      bool peano::kernel::regulargrid::tests::records::TestVertex::isMessageInQueue(int tag) {
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
      
      int peano::kernel::regulargrid::tests::records::TestVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::~TestVertexPacked() { }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::kernel::regulargrid::tests::records::TestVertex::toString(param);
   }
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::getInsideOutsideDomainMapping() {
      return peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords peano::kernel::regulargrid::tests::records::TestVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::regulargrid::tests::records::TestVertex peano::kernel::regulargrid::tests::records::TestVertexPacked::convert() const{
      return TestVertex(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::regulargrid::tests::records::TestVertexPacked::_log( "peano::kernel::regulargrid::tests::records::TestVertexPacked" );
      
      MPI_Datatype peano::kernel::regulargrid::tests::records::TestVertexPacked::Datatype = 0;
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         TestVertexPacked dummyTestVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertexPacked[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestVertexPacked::Datatype );
         MPI_Type_commit( &TestVertexPacked::Datatype );
         
      }
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::shutdownDatatype() {
         MPI_Type_free( &TestVertexPacked::Datatype );
         
      }
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestVertexPacked "
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
               msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestVertexPacked "
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
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
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
      
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestVertexPacked from node "
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
               msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestVertexPacked failed: "
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
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
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
      
      
      
      bool peano::kernel::regulargrid::tests::records::TestVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::kernel::regulargrid::tests::records::TestVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Debug)
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
   _insideOutsideDomain(insideOutsideDomain),
   _x(x) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex() {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::TestVertex(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
   _persistentRecords(insideOutsideDomain, x) {
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::~TestVertex() { }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::kernel::regulargrid::tests::records::TestVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::regulargrid::tests::records::TestVertex::toString (std::ostream& out) const {
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
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::PersistentRecords peano::kernel::regulargrid::tests::records::TestVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked peano::kernel::regulargrid::tests::records::TestVertex::convert() const{
      return TestVertexPacked(
         getInsideOutsideDomain(),
         getX()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::regulargrid::tests::records::TestVertex::_log( "peano::kernel::regulargrid::tests::records::TestVertex" );
      
      MPI_Datatype peano::kernel::regulargrid::tests::records::TestVertex::Datatype = 0;
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::initDatatype() {
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
         TestVertex dummyTestVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyTestVertex[1]._persistentRecords._x[0])),     &disp[1] );
//         MPI_Address( const_cast<void*>(static_cast<const void*>(dummyTestVertex[1]._persistentRecords._x.data())), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestVertex::Datatype );
         MPI_Type_commit( &TestVertex::Datatype );
         
      }
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::shutdownDatatype() {
         MPI_Type_free( &TestVertex::Datatype );
         
      }
      
      void peano::kernel::regulargrid::tests::records::TestVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestVertex "
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
               msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestVertex "
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
               "peano::kernel::regulargrid::tests::records::TestVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertex",
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
      
      
      
      void peano::kernel::regulargrid::tests::records::TestVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestVertex from node "
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
               msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestVertex failed: "
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
               "peano::kernel::regulargrid::tests::records::TestVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertex",
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
      
      
      
      bool peano::kernel::regulargrid::tests::records::TestVertex::isMessageInQueue(int tag) {
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
      
      int peano::kernel::regulargrid::tests::records::TestVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
   _x(x) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::TestVertexPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
   _persistentRecords(insideOutsideDomain, x) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::~TestVertexPacked() { }
   
   
   peano::kernel::regulargrid::tests::records::TestVertex::InsideOutsideDomain peano::kernel::regulargrid::tests::records::TestVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::kernel::regulargrid::tests::records::TestVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::kernel::regulargrid::tests::records::TestVertex::toString(param);
   }
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::getInsideOutsideDomainMapping() {
      return peano::kernel::regulargrid::tests::records::TestVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::kernel::regulargrid::tests::records::TestVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::kernel::regulargrid::tests::records::TestVertexPacked::toString (std::ostream& out) const {
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
   
   
   peano::kernel::regulargrid::tests::records::TestVertexPacked::PersistentRecords peano::kernel::regulargrid::tests::records::TestVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::kernel::regulargrid::tests::records::TestVertex peano::kernel::regulargrid::tests::records::TestVertexPacked::convert() const{
      return TestVertex(
         getInsideOutsideDomain(),
         getX()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::kernel::regulargrid::tests::records::TestVertexPacked::_log( "peano::kernel::regulargrid::tests::records::TestVertexPacked" );
      
      MPI_Datatype peano::kernel::regulargrid::tests::records::TestVertexPacked::Datatype = 0;
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::initDatatype() {
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
         TestVertexPacked dummyTestVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyTestVertexPacked[1]._persistentRecords._x[0])),     &disp[1] );
//         MPI_Address( const_cast<void*>(static_cast<const void*>(dummyTestVertexPacked[1]._persistentRecords._x.data())), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestVertexPacked::Datatype );
         MPI_Type_commit( &TestVertexPacked::Datatype );
         
      }
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::shutdownDatatype() {
         MPI_Type_free( &TestVertexPacked::Datatype );
         
      }
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestVertexPacked "
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
               msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestVertexPacked "
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
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
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
      
      
      
      void peano::kernel::regulargrid::tests::records::TestVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestVertexPacked from node "
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
               msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestVertexPacked failed: "
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
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::kernel::regulargrid::tests::records::TestVertexPacked",
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
      
      
      
      bool peano::kernel::regulargrid::tests::records::TestVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::kernel::regulargrid::tests::records::TestVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


