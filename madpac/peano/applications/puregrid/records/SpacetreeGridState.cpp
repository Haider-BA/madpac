#include "peano/applications/puregrid/records/SpacetreeGridState.h"

#if defined(Parallel)
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _maxRefinementsPerIteration(maxRefinementsPerIteration),
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
   _hasErased(hasErased),
   _hasTriggeredEraseForNextIteration(hasTriggeredEraseForNextIteration),
   _hasChangedVertexOrCellState(hasChangedVertexOrCellState),
   _isTraversalInverted(isTraversalInverted),
   _deriveAdjacencyInformation(deriveAdjacencyInformation) {
      
   }
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxRefinementsPerIteration() const {
      return _maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._maxRefinementsPerIteration, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(maxRefinementsPerIteration, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::getMaxRefinementsPerIteration() const {
      return _persistentRecords._maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _persistentRecords._maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::puregrid::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::puregrid::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
      out << "maxRefinementsPerIteration:" << getMaxRefinementsPerIteration();
      out << ",";
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
      out << "hasErased:" << getHasErased();
      out << ",";
      out << "hasTriggeredEraseForNextIteration:" << getHasTriggeredEraseForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out << ",";
      out << "deriveAdjacencyInformation:" << getDeriveAdjacencyInformation();
      out <<  ")";
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords peano::applications::puregrid::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked peano::applications::puregrid::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getMaxRefinementsPerIteration(),
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
         getHasErased(),
         getHasTriggeredEraseForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted(),
         getDeriveAdjacencyInformation()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::puregrid::records::SpacetreeGridState::_log( "peano::applications::puregrid::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::puregrid::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 17;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //maxRefinementsPerIteration
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
            MPI_CHAR,		 //hasErased
            MPI_CHAR,		 //hasTriggeredEraseForNextIteration
            MPI_CHAR,		 //hasChangedVertexOrCellState
            MPI_CHAR,		 //isTraversalInverted
            MPI_CHAR,		 //deriveAdjacencyInformation
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //maxRefinementsPerIteration
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
            1,		 //hasErased
            1,		 //hasTriggeredEraseForNextIteration
            1,		 //hasChangedVertexOrCellState
            1,		 //isTraversalInverted
            1,		 //deriveAdjacencyInformation
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridState dummySpacetreeGridState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxRefinementsPerIteration))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxLevel))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasRefined))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasErased))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._isTraversalInverted))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._maxRefinementsPerIteration))), 		&disp[16] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::puregrid::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::puregrid::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::puregrid::records::SpacetreeGridState "
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
               "peano::applications::puregrid::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::puregrid::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::puregrid::records::SpacetreeGridState failed: "
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
               "peano::applications::puregrid::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::puregrid::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::puregrid::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _maxRefinementsPerIteration(maxRefinementsPerIteration),
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
      setHasErased(hasErased);
      setHasTriggeredEraseForNextIteration(hasTriggeredEraseForNextIteration);
      setHasChangedVertexOrCellState(hasChangedVertexOrCellState);
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxRefinementsPerIteration() const {
      return _maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._maxRefinementsPerIteration, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(maxRefinementsPerIteration, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxRefinementsPerIteration() const {
      return _persistentRecords._maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _persistentRecords._maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::puregrid::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "maxRefinementsPerIteration:" << getMaxRefinementsPerIteration();
      out << ",";
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
      out << "hasErased:" << getHasErased();
      out << ",";
      out << "hasTriggeredEraseForNextIteration:" << getHasTriggeredEraseForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out << ",";
      out << "deriveAdjacencyInformation:" << getDeriveAdjacencyInformation();
      out <<  ")";
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::puregrid::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::puregrid::records::SpacetreeGridState peano::applications::puregrid::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getMaxRefinementsPerIteration(),
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
         getHasErased(),
         getHasTriggeredEraseForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted(),
         getDeriveAdjacencyInformation()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::puregrid::records::SpacetreeGridStatePacked::_log( "peano::applications::puregrid::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::puregrid::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 13;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //maxRefinementsPerIteration
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
            1,		 //maxRefinementsPerIteration
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
         SpacetreeGridStatePacked dummySpacetreeGridStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxRefinementsPerIteration))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxLevel))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._maxRefinementsPerIteration))), 		&disp[12] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::puregrid::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::puregrid::records::SpacetreeGridStatePacked "
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
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::puregrid::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::puregrid::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::puregrid::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::puregrid::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _maxRefinementsPerIteration(maxRefinementsPerIteration),
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
   _hasErased(hasErased),
   _hasTriggeredEraseForNextIteration(hasTriggeredEraseForNextIteration),
   _hasChangedVertexOrCellState(hasChangedVertexOrCellState),
   _isTraversalInverted(isTraversalInverted) {
      
   }
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxRefinementsPerIteration() const {
      return _maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._maxRefinementsPerIteration, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::SpacetreeGridState(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(maxRefinementsPerIteration, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::getMaxRefinementsPerIteration() const {
      return _persistentRecords._maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _persistentRecords._maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::puregrid::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::puregrid::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
      out << "maxRefinementsPerIteration:" << getMaxRefinementsPerIteration();
      out << ",";
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
      out << "hasErased:" << getHasErased();
      out << ",";
      out << "hasTriggeredEraseForNextIteration:" << getHasTriggeredEraseForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out <<  ")";
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridState::PersistentRecords peano::applications::puregrid::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked peano::applications::puregrid::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getMaxRefinementsPerIteration(),
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
         getHasErased(),
         getHasTriggeredEraseForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::puregrid::records::SpacetreeGridState::_log( "peano::applications::puregrid::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::puregrid::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 16;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //maxRefinementsPerIteration
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
            MPI_CHAR,		 //hasErased
            MPI_CHAR,		 //hasTriggeredEraseForNextIteration
            MPI_CHAR,		 //hasChangedVertexOrCellState
            MPI_CHAR,		 //isTraversalInverted
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //maxRefinementsPerIteration
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
            1,		 //hasErased
            1,		 //hasTriggeredEraseForNextIteration
            1,		 //hasChangedVertexOrCellState
            1,		 //isTraversalInverted
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridState dummySpacetreeGridState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxRefinementsPerIteration))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxLevel))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasRefined))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasErased))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._isTraversalInverted))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._maxRefinementsPerIteration))), 		&disp[15] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::puregrid::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::puregrid::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::puregrid::records::SpacetreeGridState "
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
               "peano::applications::puregrid::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::puregrid::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::puregrid::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::puregrid::records::SpacetreeGridState failed: "
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
               "peano::applications::puregrid::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::puregrid::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::puregrid::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _maxRefinementsPerIteration(maxRefinementsPerIteration),
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
      setHasErased(hasErased);
      setHasTriggeredEraseForNextIteration(hasTriggeredEraseForNextIteration);
      setHasChangedVertexOrCellState(hasChangedVertexOrCellState);
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxRefinementsPerIteration() const {
      return _maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._maxRefinementsPerIteration, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const int& maxRefinementsPerIteration, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(maxRefinementsPerIteration, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxRefinementsPerIteration() const {
      return _persistentRecords._maxRefinementsPerIteration;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxRefinementsPerIteration(const int& maxRefinementsPerIteration) {
      _persistentRecords._maxRefinementsPerIteration = maxRefinementsPerIteration;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::puregrid::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::puregrid::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::puregrid::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::puregrid::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::puregrid::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "maxRefinementsPerIteration:" << getMaxRefinementsPerIteration();
      out << ",";
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
      out << "hasErased:" << getHasErased();
      out << ",";
      out << "hasTriggeredEraseForNextIteration:" << getHasTriggeredEraseForNextIteration();
      out << ",";
      out << "hasChangedVertexOrCellState:" << getHasChangedVertexOrCellState();
      out << ",";
      out << "isTraversalInverted:" << getIsTraversalInverted();
      out <<  ")";
   }
   
   
   peano::applications::puregrid::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::puregrid::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::puregrid::records::SpacetreeGridState peano::applications::puregrid::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getMaxRefinementsPerIteration(),
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
         getHasErased(),
         getHasTriggeredEraseForNextIteration(),
         getHasChangedVertexOrCellState(),
         getIsTraversalInverted()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::puregrid::records::SpacetreeGridStatePacked::_log( "peano::applications::puregrid::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::puregrid::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //maxRefinementsPerIteration
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
            1,		 //maxRefinementsPerIteration
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
         SpacetreeGridStatePacked dummySpacetreeGridStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxRefinementsPerIteration))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxLevel))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._maxRefinementsPerIteration))), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::puregrid::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::puregrid::records::SpacetreeGridStatePacked "
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
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::puregrid::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::puregrid::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::puregrid::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::puregrid::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::puregrid::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::puregrid::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


