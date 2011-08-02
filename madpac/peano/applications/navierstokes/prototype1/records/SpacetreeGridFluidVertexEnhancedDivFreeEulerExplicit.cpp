#include "peano/applications/navierstokes/prototype1/records/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#if !defined(Parallel) && !defined(Debug) && !defined(Asserts)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _u(u),
   _gradP(gradP),
   _F(F),
   _force(force),
   _A(A),
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
      switch (param) {
         case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
         case INFLOW: return "INFLOW";
         case OUTFLOW: return "OUTFLOW";
         case LID: return "LID";
         case OBSTACLE: return "OBSTACLE";
         case PERIODIC_LEFT: return "PERIODIC_LEFT";
         case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
         case PERIODIC_CORNER: return "PERIODIC_CORNER";
         case WALL: return "WALL";
         case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
         case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
         case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
         case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
         case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
         case IGNORED: return "IGNORED";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
      return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
      switch (param) {
         case INNER: return "INNER";
         case DIRICHLET: return "DIRICHLET";
         case NEUMANN: return "NEUMANN";
         case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
         case PERIODIC: return "PERIODIC";
         case OUTER: return "OUTER";
         case UNDEF: return "UNDEF";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
      return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getF(),
         getForce(),
         getA(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 10;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[9] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setU(u);
      setGradP(gradP);
      setF(F);
      setForce(force);
      setA(A);
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getF(),
         getForce(),
         getA(),
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 9;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _u(u),
   _gradP(gradP),
   _F(F),
   _force(force),
   _A(A),
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_gradPUpdate(gradPUpdate),
   _numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
      return _gradPUpdate;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
      _gradPUpdate = (gradPUpdate);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _gradPUpdate[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _gradPUpdate[elementIndex]= gradPUpdate;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
      switch (param) {
         case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
         case INFLOW: return "INFLOW";
         case OUTFLOW: return "OUTFLOW";
         case LID: return "LID";
         case OBSTACLE: return "OBSTACLE";
         case PERIODIC_LEFT: return "PERIODIC_LEFT";
         case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
         case PERIODIC_CORNER: return "PERIODIC_CORNER";
         case WALL: return "WALL";
         case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
         case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
         case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
         case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
         case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
         case IGNORED: return "IGNORED";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
      return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
      switch (param) {
         case INNER: return "INNER";
         case DIRICHLET: return "DIRICHLET";
         case NEUMANN: return "NEUMANN";
         case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
         case PERIODIC: return "PERIODIC";
         case OUTER: return "OUTER";
         case UNDEF: return "UNDEF";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
      return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getGradPUpdate(),
         getF(),
         getForce(),
         getA(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 17;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_DOUBLE,		 //gradPUpdate
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1,		 //isHangingNode
            1,		 //refinementControl
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[16] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      setU(u);
      setGradP(gradP);
      setF(F);
      setForce(force);
      setA(A);
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      setGradPUpdate(gradPUpdate);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
      return _gradPUpdate;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
      _gradPUpdate = (gradPUpdate);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _gradPUpdate[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _gradPUpdate[elementIndex]= gradPUpdate;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getGradPUpdate(),
         getF(),
         getForce(),
         getA(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 15;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_SHORT,		 //_packedRecords0
            MPI_DOUBLE,		 //gradPUpdate
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[14] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
   return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
   return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
   return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
   return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
   return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
   _A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_gradPUpdate(gradPUpdate),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
   return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
   return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
   return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._u[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._u[elementIndex]= u;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
   return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._gradP[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._gradP[elementIndex]= gradP;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
   return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
   _gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _gradPUpdate[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _gradPUpdate[elementIndex]= gradPUpdate;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
   return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._F[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._F[elementIndex]= F;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
   return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._force[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._force[elementIndex]= force;
   
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
   return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
   _persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
   switch (param) {
      case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
      case INFLOW: return "INFLOW";
      case OUTFLOW: return "OUTFLOW";
      case LID: return "LID";
      case OBSTACLE: return "OBSTACLE";
      case PERIODIC_LEFT: return "PERIODIC_LEFT";
      case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
      case PERIODIC_CORNER: return "PERIODIC_CORNER";
      case WALL: return "WALL";
      case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
      case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
      case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
      case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
      case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
      case IGNORED: return "IGNORED";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
   return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
   switch (param) {
      case INNER: return "INNER";
      case DIRICHLET: return "DIRICHLET";
      case NEUMANN: return "NEUMANN";
      case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
      case PERIODIC: return "PERIODIC";
      case OUTER: return "OUTER";
      case UNDEF: return "UNDEF";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
   return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidVertexType:" << toString(getFluidVertexType());
   out << ",";
   out << "boundaryType:" << toString(getBoundaryType());
   out << ",";
   out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
   return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
      getFluidVertexType(),
      getBoundaryType(),
      getU(),
      getGradP(),
      getGradPUpdate(),
      getF(),
      getForce(),
      getA(),
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
      const int Attributes = 16;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //fluidVertexType
         MPI_INT,		 //boundaryType
         MPI_DOUBLE,		 //u
         MPI_DOUBLE,		 //gradP
         MPI_DOUBLE,		 //F
         MPI_DOUBLE,		 //force
         MPI_DOUBLE,		 //A
         MPI_CHAR,		 //isHangingNode
         MPI_INT,		 //refinementControl
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_DOUBLE,		 //gradPUpdate
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //fluidVertexType
         1,		 //boundaryType
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
         1,		 //A
         1,		 //isHangingNode
         1,		 //refinementControl
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[14] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[15] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   setU(u);
   setGradP(gradP);
   setF(F);
   setForce(force);
   setA(A);
   setIsHangingNode(isHangingNode);
   setRefinementControl(refinementControl);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
   return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
   return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
   return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
   return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
   return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
   _A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   setGradPUpdate(gradPUpdate);
   assertion((6 < (8 * sizeof(short int))));
   
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
   return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
   return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._u[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._u[elementIndex]= u;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
   return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._gradP[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._gradP[elementIndex]= gradP;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
   return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
   _gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _gradPUpdate[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _gradPUpdate[elementIndex]= gradPUpdate;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
   return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._F[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._F[elementIndex]= F;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
   return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._force[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._force[elementIndex]= force;
   
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
   return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
   _persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
   return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidVertexType:" << toString(getFluidVertexType());
   out << ",";
   out << "boundaryType:" << toString(getBoundaryType());
   out << ",";
   out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
   return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
      getFluidVertexType(),
      getBoundaryType(),
      getU(),
      getGradP(),
      getGradPUpdate(),
      getF(),
      getForce(),
      getA(),
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 15;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //fluidVertexType
         MPI_INT,		 //boundaryType
         MPI_DOUBLE,		 //u
         MPI_DOUBLE,		 //gradP
         MPI_DOUBLE,		 //F
         MPI_DOUBLE,		 //force
         MPI_DOUBLE,		 //A
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_SHORT,		 //_packedRecords0
         MPI_DOUBLE,		 //gradPUpdate
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //fluidVertexType
         1,		 //boundaryType
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
         1,		 //A
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[14] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_gradPUpdate(gradPUpdate),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
   case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
   case INFLOW: return "INFLOW";
   case OUTFLOW: return "OUTFLOW";
   case LID: return "LID";
   case OBSTACLE: return "OBSTACLE";
   case PERIODIC_LEFT: return "PERIODIC_LEFT";
   case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
   case PERIODIC_CORNER: return "PERIODIC_CORNER";
   case WALL: return "WALL";
   case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
   case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
   case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
   case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
   case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
   case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
   case INNER: return "INNER";
   case DIRICHLET: return "DIRICHLET";
   case NEUMANN: return "NEUMANN";
   case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
   case PERIODIC: return "PERIODIC";
   case OUTER: return "OUTER";
   case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
   getFluidVertexType(),
   getBoundaryType(),
   getU(),
   getGradP(),
   getGradPUpdate(),
   getF(),
   getForce(),
   getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
   const int Attributes = 15;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //fluidVertexType
      MPI_INT,		 //boundaryType
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //gradP
      MPI_DOUBLE,		 //F
      MPI_DOUBLE,		 //force
      MPI_DOUBLE,		 //A
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_DOUBLE,		 //gradPUpdate
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //fluidVertexType
      1,		 //boundaryType
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
      1,		 //A
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[10] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[11] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[12] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[13] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[14] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
setGradPUpdate(gradPUpdate);
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
   getFluidVertexType(),
   getBoundaryType(),
   getU(),
   getGradP(),
   getGradPUpdate(),
   getF(),
   getForce(),
   getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
   const int Attributes = 13;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //fluidVertexType
      MPI_INT,		 //boundaryType
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //gradP
      MPI_DOUBLE,		 //F
      MPI_DOUBLE,		 //force
      MPI_DOUBLE,		 //A
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
      MPI_DOUBLE,		 //gradPUpdate
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //fluidVertexType
      1,		 //boundaryType
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
      1,		 //A
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[10] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[11] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[12] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 13;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //fluidVertexType
   MPI_INT,		 //boundaryType
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //gradP
   MPI_DOUBLE,		 //F
   MPI_DOUBLE,		 //force
   MPI_DOUBLE,		 //A
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //fluidVertexType
   1,		 //boundaryType
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
   1,		 //A
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[10] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[11] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[12] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 11;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //fluidVertexType
   MPI_INT,		 //boundaryType
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //gradP
   MPI_DOUBLE,		 //F
   MPI_DOUBLE,		 //force
   MPI_DOUBLE,		 //A
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //fluidVertexType
   1,		 //boundaryType
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
   1,		 //A
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[10] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 11;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[10] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_gradPUpdate(gradPUpdate),
_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getGradPUpdate(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 14;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_DOUBLE,		 //gradPUpdate
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[10] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[11] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[12] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[13] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
setGradPUpdate(gradPUpdate);
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getGradPUpdate(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 13;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
MPI_DOUBLE,		 //gradPUpdate
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[10] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[11] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[12] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const RefinementControl& param) {
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

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 12;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._isHangingNode))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._refinementControl))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._level))), 		&disp[10] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[11] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::RefinementControl peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const RefinementControl& param) {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getRefinementControlMapping() {
return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::getRefinementControlMapping();
}



std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
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

tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 11;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._level))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[10] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


