#include "peano/applications/navierstokes/prototype2/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain):
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Outside: return "Outside";
         case Boundary: return "Boundary";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
         RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
         RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Outside: return "Outside";
      case Boundary: return "Boundary";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
   return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._x.data())), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
   return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
   return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
      RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Outside: return "Outside";
   case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
   RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
   RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._adjacentRanks.data())), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain):
_insideOutsideDomain(insideOutsideDomain) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(insideOutsideDomain) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._insideOutsideDomain))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._x.data())), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._x.data())), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Outside: return "Outside";
case Boundary: return "Boundary";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Outside=1,Boundary=2)";
}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._adjacentRanks.data())), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
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
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._adjacentRanks.data())), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


