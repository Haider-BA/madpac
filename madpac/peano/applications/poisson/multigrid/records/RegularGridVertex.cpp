#include "peano/applications/poisson/multigrid/records/RegularGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP) {
      
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
      out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
         const int Attributes = 2;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
      
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
      out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 2;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
   _tempAP(tempAP) {
      
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
      out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
         const int Attributes = 5;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[4] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
      
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
   _tempAP(tempAP) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
      out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
      out << ",";
      out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
      out << ",";
      out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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
   
   
   peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 5;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[4] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {
   
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
   
}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
   return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
   return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
   return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
   out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
   out << ",";
   out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
   out << ",";
   out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
   out << ",";
   out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
   return RegularGridVertexPacked(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );
   
   MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
      const int Attributes = 4;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertex dummyRegularGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[3] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
      MPI_Type_commit( &RegularGridVertex::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertex::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
            "peano::applications::poisson::multigrid::records::RegularGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
            "peano::applications::poisson::multigrid::records::RegularGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::RegularGridVertex",
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
   
   
   
   bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
   assertion((2 < (8 * sizeof(short int))));
   
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
   return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
   return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
   out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
   out << ",";
   out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
   out << ",";
   out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
   out << ",";
   out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
   return RegularGridVertex(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );
   
   MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
      const int Attributes = 4;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertexPacked dummyRegularGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
            "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
   
   
   
   void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
            "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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
   
   
   
   bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
   const int Attributes = 4;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //residual
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //residual
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertex dummyRegularGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[3] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
   MPI_Type_commit( &RegularGridVertex::Datatype );
   
}


void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertex::Datatype );
   
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
         msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
         "peano::applications::poisson::multigrid::records::RegularGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
         "peano::applications::poisson::multigrid::records::RegularGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
   const int Attributes = 4;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //residual
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //residual
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertexPacked dummyRegularGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridVertexPacked::Datatype );
   
}


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertexPacked::Datatype );
   
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
         "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
         "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //residual
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //residual
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
      msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
      "peano::applications::poisson::multigrid::records::RegularGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
      "peano::applications::poisson::multigrid::records::RegularGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //residual
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
      "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
      "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
   msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
   "peano::applications::poisson::multigrid::records::RegularGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
   "peano::applications::poisson::multigrid::records::RegularGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::RegularGridVertex",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
   "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
   "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
"peano::applications::poisson::multigrid::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertex",
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



void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
"peano::applications::poisson::multigrid::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertex",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks) {

}


peano::applications::poisson::multigrid::records::RegularGridVertex::RegularGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::poisson::multigrid::records::RegularGridVertex::~RegularGridVertex() { }


double peano::applications::poisson::multigrid::records::RegularGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::poisson::multigrid::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertex::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked peano::applications::poisson::multigrid::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertex::_log( "peano::applications::poisson::multigrid::records::RegularGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertex "
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
"peano::applications::poisson::multigrid::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertex",
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



void peano::applications::poisson::multigrid::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertex failed: "
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
"peano::applications::poisson::multigrid::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertex",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::RegularGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



peano::applications::poisson::multigrid::records::RegularGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::RegularGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::toString (std::ostream& out) const {
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
out << "prolongation:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getProlongation(i) << ",";
   }
   out << getProlongation(FIVE_POWER_D-1) << "]";
out << ",";
out << "restriction:[";
   for (int i = 0; i < FIVE_POWER_D-1; i++) {
      out << getRestriction(i) << ",";
   }
   out << getRestriction(FIVE_POWER_D-1) << "]";
out << ",";
out << "tempP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempP(i) << ",";
   }
   out << getTempP(TWO_POWER_D-1) << "]";
out << ",";
out << "tempAP:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getTempAP(i) << ",";
   }
   out << getTempAP(TWO_POWER_D-1) << "]";
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


peano::applications::poisson::multigrid::records::RegularGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::RegularGridVertex peano::applications::poisson::multigrid::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::RegularGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked "
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
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::RegularGridVertexPacked failed: "
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
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::RegularGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


