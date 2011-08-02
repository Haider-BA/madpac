#include "peano/applications/poisson/multigrid/records/SpacetreeGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
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
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      
   }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 10;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            1,		 //isHangingNode
            1,		 //refinementControl
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[9] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _rhs(rhs),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
         getRhs(),
         getU(),
         getResidual(),
         getStencil(),
         getProlongation(),
         getRestriction(),
         getTempP(),
         getTempAP(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   
}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
   return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
   return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
   return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
   switch (param) {
      case Unrefined: return "Unrefined";
      case Refined: return "Refined";
      case RefinementTriggered: return "RefinementTriggered";
      case Refining: return "Refining";
      case EraseTriggered: return "EraseTriggered";
      case Erasing: return "Erasing";
   }
   return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
   return SpacetreeGridVertexPacked(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );
   
   MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
      const int Attributes = 9;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_CHAR,		 //isHangingNode
         MPI_INT,		 //refinementControl
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         1,		 //isHangingNode
         1,		 //refinementControl
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertex dummySpacetreeGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[8] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
      MPI_Type_commit( &SpacetreeGridVertex::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertex::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   setIsHangingNode(isHangingNode);
   setRefinementControl(refinementControl);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((6 < (8 * sizeof(short int))));
   
}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   assertion((6 < (8 * sizeof(short int))));
   
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
   return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
   return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
   return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
   return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
   return SpacetreeGridVertex(
      getRhs(),
      getU(),
      getResidual(),
      getStencil(),
      getProlongation(),
      getRestriction(),
      getTempP(),
      getTempAP(),
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );
   
   MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
      const int Attributes = 8;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_SHORT,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //residual
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
   
   
   
   void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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
   
   
   
   bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
   case Unrefined: return "Unrefined";
   case Refined: return "Refined";
   case RefinementTriggered: return "RefinementTriggered";
   case Refining: return "Refining";
   case EraseTriggered: return "EraseTriggered";
   case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
   const int Attributes = 8;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //residual
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //residual
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertex dummySpacetreeGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[7] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
   MPI_Type_commit( &SpacetreeGridVertex::Datatype );
   
}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertex::Datatype );
   
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
         msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
   getRhs(),
   getU(),
   getResidual(),
   getStencil(),
   getProlongation(),
   getRestriction(),
   getTempP(),
   getTempAP(),
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
   const int Attributes = 6;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //residual
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //residual
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[5] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
   
}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
   
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //residual
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //residual
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
      msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //residual
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
   msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
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
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::SpacetreeGridVertex(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertex::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked peano::applications::poisson::multigrid::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._residual))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertex failed: "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertex",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const double& rhs, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, u, residual, stencil, prolongation, restriction, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::RefinementControl peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::poisson::multigrid::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::poisson::multigrid::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::poisson::multigrid::records::SpacetreeGridVertex peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
getRhs(),
getU(),
getResidual(),
getStencil(),
getProlongation(),
getRestriction(),
getTempP(),
getTempAP(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::_log( "peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._residual))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



void peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked",
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



bool peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::poisson::multigrid::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


