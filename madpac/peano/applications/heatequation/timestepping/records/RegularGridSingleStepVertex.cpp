#include "peano/applications/heatequation/timestepping/records/RegularGridSingleStepVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP) {
      
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "oldU:" << getOldU();
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
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
      return RegularGridSingleStepVertexPacked(
         getRhs(),
         getOldU(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getLinearSurplus(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
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
         RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
         MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridSingleStepVertex::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "oldU:" << getOldU();
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
      out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
      return RegularGridSingleStepVertex(
         getRhs(),
         getOldU(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getLinearSurplus(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
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
         RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
   _tempAP(tempAP) {
      
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "oldU:" << getOldU();
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
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
      return RegularGridSingleStepVertexPacked(
         getRhs(),
         getOldU(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getLinearSurplus(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
         const int Attributes = 9;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //oldU
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //rhs
            1,		 //oldU
            1,		 //u
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
         MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridSingleStepVertex::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
   _tempAP(tempAP) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "rhs:" << getRhs();
      out << ",";
      out << "oldU:" << getOldU();
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
   
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
      return RegularGridSingleStepVertex(
         getRhs(),
         getOldU(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getLinearSurplus(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
         const int Attributes = 9;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //oldU
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //rhs
            1,		 //oldU
            1,		 //u
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
   return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
   _oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
   
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
   return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
   _persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
   return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
   return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
   return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
   return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._linearSurplus[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
   
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "rhs:" << getRhs();
   out << ",";
   out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
   return RegularGridSingleStepVertexPacked(
      getRhs(),
      getOldU(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getLinearSurplus(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         DIMENSIONS,		 //linearSurplus
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
      MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridSingleStepVertex::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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
   
   
   
   bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
   return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
   _oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
   assertion((2 < (8 * sizeof(short int))));
   
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
   return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
   _persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
   return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
   return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
   return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._linearSurplus[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
   
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "rhs:" << getRhs();
   out << ",";
   out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
   return RegularGridSingleStepVertex(
      getRhs(),
      getOldU(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getLinearSurplus(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         DIMENSIONS,		 //linearSurplus
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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
   
   
   
   bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
return RegularGridSingleStepVertexPacked(
   getRhs(),
   getOldU(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getLinearSurplus(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
   const int Attributes = 8;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //oldU
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //oldU
      1,		 //u
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[7] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
   MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );
   
}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridSingleStepVertex::Datatype );
   
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
         msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
         msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
return RegularGridSingleStepVertex(
   getRhs(),
   getOldU(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getLinearSurplus(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
   const int Attributes = 8;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //oldU
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //oldU
      1,		 //u
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[7] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );
   
}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );
   
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
         msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
return RegularGridSingleStepVertexPacked(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
const int Attributes = 8;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //oldU
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //rhs
   1,		 //oldU
   1,		 //u
   1,		 //residual
   DIMENSIONS,		 //linearSurplus
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[7] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
      msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
      msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
return RegularGridSingleStepVertex(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 8;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //oldU
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //rhs
   1,		 //oldU
   1,		 //u
   1,		 //residual
   DIMENSIONS,		 //linearSurplus
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[7] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
      msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
return RegularGridSingleStepVertexPacked(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //rhs
MPI_DOUBLE,		 //oldU
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //rhs
1,		 //oldU
1,		 //u
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
   msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
   msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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
out << "linearSurplus:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getLinearSurplus(i) << ",";
   }
   out << getLinearSurplus(DIMENSIONS-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
return RegularGridSingleStepVertex(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //rhs
MPI_DOUBLE,		 //oldU
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //rhs
1,		 //oldU
1,		 //u
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
   msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
return RegularGridSingleStepVertexPacked(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, x),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
return RegularGridSingleStepVertex(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks) {

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::~RegularGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::convert() const{
return RegularGridSingleStepVertexPacked(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertex dummyRegularGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertex::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex failed: "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::RegularGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, insideOutsideDomain, adjacentRanks),_tempP(tempP),
_tempAP(tempAP) {
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::~RegularGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "rhs:" << getRhs();
out << ",";
out << "oldU:" << getOldU();
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


peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertex peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::convert() const{
return RegularGridSingleStepVertex(
getRhs(),
getOldU(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getLinearSurplus(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridSingleStepVertexPacked dummyRegularGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &RegularGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked failed: "
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
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::RegularGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


