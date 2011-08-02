#include "peano/applications/heatequation/timestepping/records/SpacetreeGridSingleStepVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
      return SpacetreeGridSingleStepVertexPacked(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
         const int Attributes = 5;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[4] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
      return SpacetreeGridSingleStepVertex(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
      return SpacetreeGridSingleStepVertexPacked(
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
         const int Attributes = 14;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //oldU
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
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
            1,		 //rhs
            1,		 //oldU
            1,		 //u
            1,		 //residual
            DIMENSIONS,		 //linearSurplus
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
         SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._level))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[13] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _rhs(rhs),
   _oldU(oldU),
   _u(u),
   _residual(residual),
   _stencil(stencil),
   _prolongation(prolongation),
   _restriction(restriction),
   _linearSurplus(linearSurplus),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
      return _rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
      _rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
      return _oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
      _oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
      _u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
      return _residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
      _residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
      return _stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _stencil = (stencil);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
      return _prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _prolongation = (prolongation);
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
      return _restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _restriction = (restriction);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
      return _linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _linearSurplus = (linearSurplus);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
   _tempAP(tempAP),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
      return _persistentRecords._rhs;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
      _persistentRecords._rhs = rhs;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
      return _persistentRecords._oldU;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
      _persistentRecords._oldU = oldU;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
      _persistentRecords._u = u;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
      return _persistentRecords._residual;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
      _persistentRecords._residual = residual;
   }
   
   
   
   tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
      return _persistentRecords._stencil;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
      _persistentRecords._stencil = (stencil);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      return _persistentRecords._stencil[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
      assertion(elementIndex>=0);
      assertion(elementIndex<THREE_POWER_D);
      _persistentRecords._stencil[elementIndex]= stencil;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
      return _persistentRecords._prolongation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
      _persistentRecords._prolongation = (prolongation);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._prolongation[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._prolongation[elementIndex]= prolongation;
      
   }
   
   
   
   tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
      return _persistentRecords._restriction;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
      _persistentRecords._restriction = (restriction);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      return _persistentRecords._restriction[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
      assertion(elementIndex>=0);
      assertion(elementIndex<FIVE_POWER_D);
      _persistentRecords._restriction[elementIndex]= restriction;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
      return _tempP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
      _tempP = (tempP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempP[elementIndex]= tempP;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
      return _tempAP;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
      _tempAP = (tempAP);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _tempAP[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _tempAP[elementIndex]= tempAP;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
      return _persistentRecords._linearSurplus;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
      _persistentRecords._linearSurplus = (linearSurplus);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._linearSurplus[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
   }
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
      return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
      return SpacetreeGridSingleStepVertex(
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //rhs
            MPI_DOUBLE,		 //oldU
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //residual
            MPI_DOUBLE,		 //linearSurplus
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
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
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._level))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
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


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
   return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
   _oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
   return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
   _persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
   return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
   return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
   return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
   return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._linearSurplus[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
   
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
   return SpacetreeGridSingleStepVertexPacked(
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
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
      const int Attributes = 10;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
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
         DIMENSIONS,		 //linearSurplus
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
      SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._level))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[9] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
      MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
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


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
   return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
   _rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
   return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
   _oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
   _u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
   return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
   _residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
   return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
   return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
   return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
   return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   assertion((6 < (8 * sizeof(short int))));
   
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
   return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
   _persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
   return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
   _persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
   _persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
   return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
   _persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
   return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
   _persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   return _persistentRecords._stencil[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
   assertion(elementIndex>=0);
   assertion(elementIndex<THREE_POWER_D);
   _persistentRecords._stencil[elementIndex]= stencil;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
   return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
   _persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._prolongation[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._prolongation[elementIndex]= prolongation;
   
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
   return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
   _persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   return _persistentRecords._restriction[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
   assertion(elementIndex>=0);
   assertion(elementIndex<FIVE_POWER_D);
   _persistentRecords._restriction[elementIndex]= restriction;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
   return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
   _tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempP[elementIndex]= tempP;
   
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
   return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
   _tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _tempAP[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _tempAP[elementIndex]= tempAP;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
   return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
   _persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._linearSurplus[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._linearSurplus[elementIndex]= linearSurplus;
   
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
   return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
   return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
   return SpacetreeGridSingleStepVertex(
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
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
      const int Attributes = 9;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //residual
         MPI_DOUBLE,		 //linearSurplus
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
         DIMENSIONS,		 //linearSurplus
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._level))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[8] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
return SpacetreeGridSingleStepVertexPacked(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
   const int Attributes = 12;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //oldU
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //oldU
      1,		 //u
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[10] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[11] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
   MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );
   
}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );
   
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
         msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
         msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
return SpacetreeGridSingleStepVertex(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
   const int Attributes = 10;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //rhs
      MPI_DOUBLE,		 //oldU
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //residual
      MPI_DOUBLE,		 //linearSurplus
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //rhs
      1,		 //oldU
      1,		 //u
      1,		 //residual
      DIMENSIONS,		 //linearSurplus
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[9] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );
   
}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );
   
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
         msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
return SpacetreeGridSingleStepVertexPacked(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
const int Attributes = 11;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //oldU
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //rhs
   1,		 //oldU
   1,		 //u
   1,		 //residual
   DIMENSIONS,		 //linearSurplus
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._level))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[10] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
      msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
      msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
return SpacetreeGridSingleStepVertex(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //rhs
   MPI_DOUBLE,		 //oldU
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //residual
   MPI_DOUBLE,		 //linearSurplus
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
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
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._level))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
      msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
return SpacetreeGridSingleStepVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //rhs
MPI_DOUBLE,		 //oldU
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //rhs
1,		 //oldU
1,		 //u
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._rhs))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
   msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
   msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
return SpacetreeGridSingleStepVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
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
SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._rhs))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._oldU))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._u))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._rhs))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
   msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
return SpacetreeGridSingleStepVertexPacked(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._level))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
return SpacetreeGridSingleStepVertex(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex() {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::~SpacetreeGridSingleStepVertex() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(const RefinementControl& param) {
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

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::convert() const{
return SpacetreeGridSingleStepVertexPacked(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::initDatatype() {
const int Attributes = 8;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertex dummySpacetreeGridSingleStepVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._isHangingNode))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._refinementControl))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertex[1]._persistentRecords._residual))), 		&disp[7] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertex::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertex::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertex::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex failed: "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::PersistentRecords(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_rhs(rhs),
_oldU(oldU),
_u(u),
_residual(residual),
_stencil(stencil),
_prolongation(prolongation),
_restriction(restriction),
_linearSurplus(linearSurplus),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRhs() const {
return _rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRhs(const double& rhs) {
_rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getOldU() const {
return _oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setOldU(const double& oldU) {
_oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setU(const double& u) {
_u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getResidual() const {
return _residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setResidual(const double& residual) {
_residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getStencil() const {
return _stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_stencil = (stencil);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getProlongation() const {
return _prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_prolongation = (prolongation);
}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRestriction() const {
return _restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_restriction = (restriction);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getLinearSurplus() const {
return _linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_linearSurplus = (linearSurplus);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._rhs, persistentRecords._oldU, persistentRecords._u, persistentRecords._residual, persistentRecords._stencil, persistentRecords._prolongation, persistentRecords._restriction, persistentRecords._linearSurplus, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::SpacetreeGridSingleStepVertexPacked(const double& rhs, const double& oldU, const double& u, const double& residual, const tarch::la::Vector<THREE_POWER_D,double>& stencil, const tarch::la::Vector<FIVE_POWER_D,double>& prolongation, const tarch::la::Vector<FIVE_POWER_D,double>& restriction, const tarch::la::Vector<TWO_POWER_D,double>& tempP, const tarch::la::Vector<TWO_POWER_D,double>& tempAP, const tarch::la::Vector<DIMENSIONS,double>& linearSurplus, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(rhs, oldU, u, residual, stencil, prolongation, restriction, linearSurplus, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_tempP(tempP),
_tempAP(tempAP),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::~SpacetreeGridSingleStepVertexPacked() { }


double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRhs() const {
return _persistentRecords._rhs;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRhs(const double& rhs) {
_persistentRecords._rhs = rhs;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getOldU() const {
return _persistentRecords._oldU;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setOldU(const double& oldU) {
_persistentRecords._oldU = oldU;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setU(const double& u) {
_persistentRecords._u = u;
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getResidual() const {
return _persistentRecords._residual;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setResidual(const double& residual) {
_persistentRecords._residual = residual;
}



tarch::la::Vector<THREE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil() const {
return _persistentRecords._stencil;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(const tarch::la::Vector<THREE_POWER_D,double>& stencil) {
_persistentRecords._stencil = (stencil);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getStencil(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
return _persistentRecords._stencil[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setStencil(int elementIndex, const double& stencil) {
assertion(elementIndex>=0);
assertion(elementIndex<THREE_POWER_D);
_persistentRecords._stencil[elementIndex]= stencil;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation() const {
return _persistentRecords._prolongation;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(const tarch::la::Vector<FIVE_POWER_D,double>& prolongation) {
_persistentRecords._prolongation = (prolongation);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getProlongation(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._prolongation[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setProlongation(int elementIndex, const double& prolongation) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._prolongation[elementIndex]= prolongation;

}



tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction() const {
return _persistentRecords._restriction;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(const tarch::la::Vector<FIVE_POWER_D,double>& restriction) {
_persistentRecords._restriction = (restriction);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRestriction(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
return _persistentRecords._restriction[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRestriction(int elementIndex, const double& restriction) {
assertion(elementIndex>=0);
assertion(elementIndex<FIVE_POWER_D);
_persistentRecords._restriction[elementIndex]= restriction;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP() const {
return _tempP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& tempP) {
_tempP = (tempP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempP(int elementIndex, const double& tempP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempP[elementIndex]= tempP;

}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP() const {
return _tempAP;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& tempAP) {
_tempAP = (tempAP);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getTempAP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _tempAP[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setTempAP(int elementIndex, const double& tempAP) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_tempAP[elementIndex]= tempAP;

}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus() const {
return _persistentRecords._linearSurplus;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(const tarch::la::Vector<DIMENSIONS,double>& linearSurplus) {
_persistentRecords._linearSurplus = (linearSurplus);
}



double peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getLinearSurplus(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._linearSurplus[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setLinearSurplus(int elementIndex, const double& linearSurplus) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._linearSurplus[elementIndex]= linearSurplus;

}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::RefinementControl peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::InsideOutsideDomain peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString(const RefinementControl& param) {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::toString(param);
}

std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getRefinementControlMapping() {
return peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex::getRefinementControlMapping();
}



std::string peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::toString (std::ostream& out) const {
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


peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::convert() const{
return SpacetreeGridSingleStepVertex(
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

tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked" );

MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::Datatype = 0;


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::initDatatype() {
const int Attributes = 7;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //residual
MPI_DOUBLE,		 //linearSurplus
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //residual
DIMENSIONS,		 //linearSurplus
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridSingleStepVertexPacked dummySpacetreeGridSingleStepVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._residual))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._linearSurplus[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridSingleStepVertexPacked[1]._persistentRecords._residual))), 		&disp[6] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridSingleStepVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridSingleStepVertexPacked::Datatype );

}


void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridSingleStepVertexPacked::Datatype );

}

void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



void peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked failed: "
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
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked",
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



bool peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


