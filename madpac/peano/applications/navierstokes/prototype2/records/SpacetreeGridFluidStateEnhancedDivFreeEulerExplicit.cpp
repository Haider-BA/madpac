#include "peano/applications/navierstokes/prototype2/records/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#if defined(Parallel)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _minMeshWidth(minMeshWidth),
   _maxMeshWidth(maxMeshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _maxLevel(maxLevel),
   _hasRefined(hasRefined),
   _hasTriggeredRefinementForNextIteration(hasTriggeredRefinementForNextIteration),
   _hasCoarsened(hasCoarsened),
   _hasTriggeredCoarseningForNextIteration(hasTriggeredCoarseningForNextIteration),
   _hasChangedVertexOrCellState(hasChangedVertexOrCellState),
   _isTraversalInverted(isTraversalInverted),
   _deriveAdjacencyInformation(deriveAdjacencyInformation) {
      
   }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasCoarsened() const {
      return _hasCoarsened;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasCoarsened(const bool& hasCoarsened) {
      _hasCoarsened = hasCoarsened;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredCoarseningForNextIteration() const {
      return _hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      _hasTriggeredCoarseningForNextIteration = hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasCoarsened, persistentRecords._hasTriggeredCoarseningForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasCoarsened, hasTriggeredCoarseningForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() { }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasCoarsened() const {
      return _persistentRecords._hasCoarsened;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasCoarsened(const bool& hasCoarsened) {
      _persistentRecords._hasCoarsened = hasCoarsened;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredCoarseningForNextIteration() const {
      return _persistentRecords._hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      _persistentRecords._hasTriggeredCoarseningForNextIteration = hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "minMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMinMeshWidth(i) << ",";
   }
   out << getMinMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "maxMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMaxMeshWidth(i) << ",";
   }
   out << getMaxMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
      out << ",";
      out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
      out << ",";
      out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
      out << ",";
      out << "numberOfInnerCells:" << getNumberOfInnerCells();
      out << ",";
      out << "numberOfOuterCells:" << getNumberOfOuterCells();
      out << ",";
      out << "maxLevel:" << getMaxLevel();
      out << ",";
      out << "hasRefined:" << getHasRefined();
      out << ",";
      out << "hasTriggeredRefinementForNextIteration:" << getHasTriggeredRefinementForNextIteration();
      out << ",";
      out << "hasCoarsened:" << getHasCoarsened();
      out << ",";
      out << "hasTriggeredCoarseningForNextIteration:" << getHasTriggeredCoarseningForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out << ",";
      out << "deriveAdjacencyInformation:" << getDeriveAdjacencyInformation();
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(
         getMinMeshWidth(),
         getMaxMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getMaxLevel(),
         getHasRefined(),
         getHasTriggeredRefinementForNextIteration(),
         getHasCoarsened(),
         getHasTriggeredCoarseningForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted(),
         getDeriveAdjacencyInformation()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 16;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //minMeshWidth
            MPI_DOUBLE,		 //maxMeshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_INT,		 //maxLevel
            MPI_CHAR,		 //hasRefined
            MPI_CHAR,		 //hasTriggeredRefinementForNextIteration
            MPI_CHAR,		 //hasCoarsened
            MPI_CHAR,		 //hasTriggeredCoarseningForNextIteration
            MPI_CHAR,		 //hasChangedVertexOrCellState
            MPI_CHAR,		 //isTraversalInverted
            MPI_CHAR,		 //deriveAdjacencyInformation
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //minMeshWidth
            DIMENSIONS,		 //maxMeshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //maxLevel
            1,		 //hasRefined
            1,		 //hasTriggeredRefinementForNextIteration
            1,		 //hasCoarsened
            1,		 //hasTriggeredCoarseningForNextIteration
            1,		 //hasChangedVertexOrCellState
            1,		 //isTraversalInverted
            1,		 //deriveAdjacencyInformation
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._minMeshWidth[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxLevel))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasRefined))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasCoarsened))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredCoarseningForNextIteration))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._isTraversalInverted))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[1]._persistentRecords._minMeshWidth.data())), 		&disp[15] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _minMeshWidth(minMeshWidth),
   _maxMeshWidth(maxMeshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _maxLevel(maxLevel),
   _isTraversalInverted(isTraversalInverted),
   _deriveAdjacencyInformation(deriveAdjacencyInformation) {
      setHasRefined(hasRefined);
      setHasTriggeredRefinementForNextIteration(hasTriggeredRefinementForNextIteration);
      setHasCoarsened(hasCoarsened);
      setHasTriggeredCoarseningForNextIteration(hasTriggeredCoarseningForNextIteration);
      setHasChangedVertexOrCellState(hasChangedVertexOrCellState);
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasCoarsened() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasCoarsened(const bool& hasCoarsened) {
      short int mask = 1 << (2);
   _packedRecords0 = hasCoarsened ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredCoarseningForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredCoarseningForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasCoarsened(), persistentRecords.getHasTriggeredCoarseningForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasCoarsened, hasTriggeredCoarseningForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() { }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasCoarsened() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasCoarsened(const bool& hasCoarsened) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasCoarsened ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredCoarseningForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredCoarseningForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "minMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMinMeshWidth(i) << ",";
   }
   out << getMinMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "maxMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMaxMeshWidth(i) << ",";
   }
   out << getMaxMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
      out << ",";
      out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
      out << ",";
      out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
      out << ",";
      out << "numberOfInnerCells:" << getNumberOfInnerCells();
      out << ",";
      out << "numberOfOuterCells:" << getNumberOfOuterCells();
      out << ",";
      out << "maxLevel:" << getMaxLevel();
      out << ",";
      out << "hasRefined:" << getHasRefined();
      out << ",";
      out << "hasTriggeredRefinementForNextIteration:" << getHasTriggeredRefinementForNextIteration();
      out << ",";
      out << "hasCoarsened:" << getHasCoarsened();
      out << ",";
      out << "hasTriggeredCoarseningForNextIteration:" << getHasTriggeredCoarseningForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out << ",";
      out << "deriveAdjacencyInformation:" << getDeriveAdjacencyInformation();
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(
         getMinMeshWidth(),
         getMaxMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getMaxLevel(),
         getHasRefined(),
         getHasTriggeredRefinementForNextIteration(),
         getHasCoarsened(),
         getHasTriggeredCoarseningForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted(),
         getDeriveAdjacencyInformation()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //minMeshWidth
            MPI_DOUBLE,		 //maxMeshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_INT,		 //maxLevel
            MPI_CHAR,		 //isTraversalInverted
            MPI_CHAR,		 //deriveAdjacencyInformation
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //minMeshWidth
            DIMENSIONS,		 //maxMeshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //maxLevel
            1,		 //isTraversalInverted
            1,		 //deriveAdjacencyInformation
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxLevel))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._isTraversalInverted))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._minMeshWidth.data())), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _minMeshWidth(minMeshWidth),
   _maxMeshWidth(maxMeshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _maxLevel(maxLevel),
   _hasRefined(hasRefined),
   _hasTriggeredRefinementForNextIteration(hasTriggeredRefinementForNextIteration),
   _hasCoarsened(hasCoarsened),
   _hasTriggeredCoarseningForNextIteration(hasTriggeredCoarseningForNextIteration),
   _hasChangedVertexOrCellState(hasChangedVertexOrCellState),
   _isTraversalInverted(isTraversalInverted) {
      
   }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasCoarsened() const {
      return _hasCoarsened;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasCoarsened(const bool& hasCoarsened) {
      _hasCoarsened = hasCoarsened;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredCoarseningForNextIteration() const {
      return _hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      _hasTriggeredCoarseningForNextIteration = hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasCoarsened, persistentRecords._hasTriggeredCoarseningForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasCoarsened, hasTriggeredCoarseningForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() { }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasCoarsened() const {
      return _persistentRecords._hasCoarsened;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasCoarsened(const bool& hasCoarsened) {
      _persistentRecords._hasCoarsened = hasCoarsened;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredCoarseningForNextIteration() const {
      return _persistentRecords._hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      _persistentRecords._hasTriggeredCoarseningForNextIteration = hasTriggeredCoarseningForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "minMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMinMeshWidth(i) << ",";
   }
   out << getMinMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "maxMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMaxMeshWidth(i) << ",";
   }
   out << getMaxMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
      out << ",";
      out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
      out << ",";
      out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
      out << ",";
      out << "numberOfInnerCells:" << getNumberOfInnerCells();
      out << ",";
      out << "numberOfOuterCells:" << getNumberOfOuterCells();
      out << ",";
      out << "maxLevel:" << getMaxLevel();
      out << ",";
      out << "hasRefined:" << getHasRefined();
      out << ",";
      out << "hasTriggeredRefinementForNextIteration:" << getHasTriggeredRefinementForNextIteration();
      out << ",";
      out << "hasCoarsened:" << getHasCoarsened();
      out << ",";
      out << "hasTriggeredCoarseningForNextIteration:" << getHasTriggeredCoarseningForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(
         getMinMeshWidth(),
         getMaxMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getMaxLevel(),
         getHasRefined(),
         getHasTriggeredRefinementForNextIteration(),
         getHasCoarsened(),
         getHasTriggeredCoarseningForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 15;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //minMeshWidth
            MPI_DOUBLE,		 //maxMeshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_INT,		 //maxLevel
            MPI_CHAR,		 //hasRefined
            MPI_CHAR,		 //hasTriggeredRefinementForNextIteration
            MPI_CHAR,		 //hasCoarsened
            MPI_CHAR,		 //hasTriggeredCoarseningForNextIteration
            MPI_CHAR,		 //hasChangedVertexOrCellState
            MPI_CHAR,		 //isTraversalInverted
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //minMeshWidth
            DIMENSIONS,		 //maxMeshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //maxLevel
            1,		 //hasRefined
            1,		 //hasTriggeredRefinementForNextIteration
            1,		 //hasCoarsened
            1,		 //hasTriggeredCoarseningForNextIteration
            1,		 //hasChangedVertexOrCellState
            1,		 //isTraversalInverted
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._minMeshWidth[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxLevel))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasRefined))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasCoarsened))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredCoarseningForNextIteration))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._isTraversalInverted))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[1]._persistentRecords._minMeshWidth.data())), 		&disp[14] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _minMeshWidth(minMeshWidth),
   _maxMeshWidth(maxMeshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _maxLevel(maxLevel),
   _isTraversalInverted(isTraversalInverted) {
      setHasRefined(hasRefined);
      setHasTriggeredRefinementForNextIteration(hasTriggeredRefinementForNextIteration);
      setHasCoarsened(hasCoarsened);
      setHasTriggeredCoarseningForNextIteration(hasTriggeredCoarseningForNextIteration);
      setHasChangedVertexOrCellState(hasChangedVertexOrCellState);
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasCoarsened() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasCoarsened(const bool& hasCoarsened) {
      short int mask = 1 << (2);
   _packedRecords0 = hasCoarsened ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredCoarseningForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredCoarseningForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasCoarsened(), persistentRecords.getHasTriggeredCoarseningForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasCoarsened, const bool& hasTriggeredCoarseningForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasCoarsened, hasTriggeredCoarseningForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() { }
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasCoarsened() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasCoarsened(const bool& hasCoarsened) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasCoarsened ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredCoarseningForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredCoarseningForNextIteration(const bool& hasTriggeredCoarseningForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredCoarseningForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "minMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMinMeshWidth(i) << ",";
   }
   out << getMinMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "maxMeshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMaxMeshWidth(i) << ",";
   }
   out << getMaxMeshWidth(DIMENSIONS-1) << "]";
      out << ",";
      out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
      out << ",";
      out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
      out << ",";
      out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
      out << ",";
      out << "numberOfInnerCells:" << getNumberOfInnerCells();
      out << ",";
      out << "numberOfOuterCells:" << getNumberOfOuterCells();
      out << ",";
      out << "maxLevel:" << getMaxLevel();
      out << ",";
      out << "hasRefined:" << getHasRefined();
      out << ",";
      out << "hasTriggeredRefinementForNextIteration:" << getHasTriggeredRefinementForNextIteration();
      out << ",";
      out << "hasCoarsened:" << getHasCoarsened();
      out << ",";
      out << "hasTriggeredCoarseningForNextIteration:" << getHasTriggeredCoarseningForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(
         getMinMeshWidth(),
         getMaxMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getMaxLevel(),
         getHasRefined(),
         getHasTriggeredRefinementForNextIteration(),
         getHasCoarsened(),
         getHasTriggeredCoarseningForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 11;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //minMeshWidth
            MPI_DOUBLE,		 //maxMeshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_INT,		 //maxLevel
            MPI_CHAR,		 //isTraversalInverted
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //minMeshWidth
            DIMENSIONS,		 //maxMeshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //maxLevel
            1,		 //isTraversalInverted
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxLevel))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._isTraversalInverted))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._minMeshWidth.data())), 		&disp[10] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


