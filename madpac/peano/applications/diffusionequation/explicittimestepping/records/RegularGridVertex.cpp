#include "peano/applications/diffusionequation/explicittimestepping/records/RegularGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _stencil(stencil),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain) {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain),_residual(residual),
   _linearSurplus(linearSurplus) {
      
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "u:" << getU();
      out << ",";
      out << "residual:" << getResidual();
      out << ",";
      out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
      out << ",";
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getLinearSurplus(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._residual))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
      
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _stencil(stencil) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain),_residual(residual),
   _linearSurplus(linearSurplus) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "u:" << getU();
      out << ",";
      out << "residual:" << getResidual();
      out << ",";
      out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
      out << ",";
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getLinearSurplus(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._residual))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _u(u),
   _stencil(stencil),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks),_residual(residual),
   _linearSurplus(linearSurplus) {
      
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "u:" << getU();
      out << ",";
      out << "residual:" << getResidual();
      out << ",";
      out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
      out << ",";
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getLinearSurplus(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //u
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //rhs
            1,		 //u
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._u))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._rhs))), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
      
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _u(u),
   _stencil(stencil),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks),_residual(residual),
   _linearSurplus(linearSurplus) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "u:" << getU();
      out << ",";
      out << "residual:" << getResidual();
      out << ",";
      out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
      out << ",";
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getLinearSurplus(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //rhs
            1,		 //u
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._u))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._rhs))), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
   _u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {
   
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
   return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
   return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _linearSurplus[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _linearSurplus[elementIndex]= linearSurplus;
   
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "rhs:" << getRhs();
   out << ",";
   out << "u:" << getU();
   out << ",";
   out << "residual:" << getResidual();
   out << ",";
   out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
   out << ",";
   out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
   return RegularGridVertexPacked(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getLinearSurplus(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );
   
   MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1,		 //residual
         DIMENSIONS,		 //linearSurplus
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertex dummyRegularGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
      MPI_Type_commit( &RegularGridVertex::Datatype );
      
   }
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertex::Datatype );
      
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
            msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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
   
   
   
   bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
   _u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {
   assertion((2 < (8 * sizeof(short int))));
   
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
   return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _linearSurplus[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _linearSurplus[elementIndex]= linearSurplus;
   
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "rhs:" << getRhs();
   out << ",";
   out << "u:" << getU();
   out << ",";
   out << "residual:" << getResidual();
   out << ",";
   out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
   out << ",";
   out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
   return RegularGridVertex(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getLinearSurplus(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );
   
   MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1,		 //residual
         DIMENSIONS,		 //linearSurplus
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertexPacked dummyRegularGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
   
   
   
   void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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
   
   
   
   bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getLinearSurplus(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //u
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //u
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertex dummyRegularGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._u))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._rhs))), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
   MPI_Type_commit( &RegularGridVertex::Datatype );
   
}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertex::Datatype );
   
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
         msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getLinearSurplus(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //u
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //u
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertexPacked dummyRegularGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._u))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._rhs))), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridVertexPacked::Datatype );
   
}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertexPacked::Datatype );
   
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x),_residual(residual),
_linearSurplus(linearSurplus) {

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //u
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //rhs
   1,		 //u
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //residual
   DIMENSIONS,		 //linearSurplus
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._u))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._rhs))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
      msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_stencil(stencil),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x),_residual(residual),
_linearSurplus(linearSurplus) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //rhs
   1,		 //u
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1,		 //residual
   DIMENSIONS,		 //linearSurplus
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._u))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._rhs))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, stencil, insideOutsideDomain) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, stencil, insideOutsideDomain),_residual(residual),
_linearSurplus(linearSurplus) {

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //rhs
MPI_DOUBLE,		 //u
MPI_INT,		 //insideOutsideDomain
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //rhs
1,		 //u
1,		 //insideOutsideDomain
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._u))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._rhs))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
   msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_stencil(stencil) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, stencil, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, stencil, insideOutsideDomain),_residual(residual),
_linearSurplus(linearSurplus) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //rhs
MPI_DOUBLE,		 //u
MPI_SHORT,		 //_packedRecords0
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //rhs
1,		 //u
1,		 //_packedRecords0
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._u))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._rhs))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x),_residual(residual),
_linearSurplus(linearSurplus) {

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_stencil(stencil),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, x),_residual(residual),
_linearSurplus(linearSurplus) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[2] );
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


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks) {

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._residual))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._linearSurplus[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._adjacentRanks[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex failed: "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_stencil(stencil),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._stencil, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, stencil, insideOutsideDomain, adjacentRanks),_residual(residual),
_linearSurplus(linearSurplus) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getResidual() const {
return _residual;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



double peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _linearSurplus[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::InsideOutsideDomain peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::toString(param);
}

std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "u:" << getU();
out << ",";
out << "residual:" << getResidual();
out << ",";
out << "stencil:[";
   for (int i = 0; i < THREE_POWER_D-1; i++) {
      out << getStencil(i) << ",";
   }
   out << getStencil(THREE_POWER_D-1) << "]";
out << ",";
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
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


peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::PersistentRecords peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getLinearSurplus(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::_log( "peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1,		 //residual
DIMENSIONS,		 //linearSurplus
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._residual))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._linearSurplus[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



void peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked failed: "
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
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked",
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



bool peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


