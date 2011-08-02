#include "peano/applications/heatequation/timestepping/records/SpacetreeGridState.h"

#if defined(Parallel)
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _omega(omega),
   _updateUMax(updateUMax),
   _updateUH(updateUH),
   _uMax(uMax),
   _uH(uH),
   _uGlobalMax(uGlobalMax),
   _uGlobalH(uGlobalH),
   _timeStep(timeStep),
   _timeStepSize(timeStepSize),
   _time(time),
   _numberOfStencilUpdates(numberOfStencilUpdates),
   _minimalAllowedMeshSize(minimalAllowedMeshSize),
   _maximalAllowedMeshSize(maximalAllowedMeshSize),
   _activeLevel(activeLevel),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUpdateUMax() const {
      return _updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUpdateUMax(const double& updateUMax) {
      _updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUpdateUH() const {
      return _updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUpdateUH(const double& updateUH) {
      _updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUH() const {
      return _uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUH(const double& uH) {
      _uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUGlobalMax() const {
      return _uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
      _uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUGlobalH() const {
      return _uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUGlobalH(const double& uGlobalH) {
      _uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTimeStep() const {
      return _timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTimeStep(const int& timeStep) {
      _timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTimeStepSize() const {
      return _timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
      _timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTime() const {
      return _time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTime(const double& time) {
      _time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfStencilUpdates() const {
      return _numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMinimalAllowedMeshSize() const {
      return _minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaximalAllowedMeshSize() const {
      return _maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getActiveLevel() const {
      return _activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setActiveLevel(const int& activeLevel) {
      _activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUpdateUMax() const {
      return _persistentRecords._updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUpdateUMax(const double& updateUMax) {
      _persistentRecords._updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUpdateUH() const {
      return _persistentRecords._updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUpdateUH(const double& updateUH) {
      _persistentRecords._updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUH() const {
      return _persistentRecords._uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUH(const double& uH) {
      _persistentRecords._uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUGlobalMax() const {
      return _persistentRecords._uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUGlobalMax(const double& uGlobalMax) {
      _persistentRecords._uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUGlobalH() const {
      return _persistentRecords._uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUGlobalH(const double& uGlobalH) {
      _persistentRecords._uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTimeStep() const {
      return _persistentRecords._timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTimeStep(const int& timeStep) {
      _persistentRecords._timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTimeStepSize() const {
      return _persistentRecords._timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTimeStepSize(const double& timeStepSize) {
      _persistentRecords._timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTime() const {
      return _persistentRecords._time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTime(const double& time) {
      _persistentRecords._time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfStencilUpdates() const {
      return _persistentRecords._numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinimalAllowedMeshSize() const {
      return _persistentRecords._minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaximalAllowedMeshSize() const {
      return _persistentRecords._maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getActiveLevel() const {
      return _persistentRecords._activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setActiveLevel(const int& activeLevel) {
      _persistentRecords._activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
      out << "omega:" << getOmega();
      out << ",";
      out << "updateUMax:" << getUpdateUMax();
      out << ",";
      out << "updateUH:" << getUpdateUH();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uH:" << getUH();
      out << ",";
      out << "uGlobalMax:" << getUGlobalMax();
      out << ",";
      out << "uGlobalH:" << getUGlobalH();
      out << ",";
      out << "timeStep:" << getTimeStep();
      out << ",";
      out << "timeStepSize:" << getTimeStepSize();
      out << ",";
      out << "time:" << getTime();
      out << ",";
      out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
      out << ",";
      out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
      out << ",";
      out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
      out << ",";
      out << "activeLevel:" << getActiveLevel();
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked peano::applications::heatequation::timestepping::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getOmega(),
         getUpdateUMax(),
         getUpdateUH(),
         getUMax(),
         getUH(),
         getUGlobalMax(),
         getUGlobalH(),
         getTimeStep(),
         getTimeStepSize(),
         getTime(),
         getNumberOfStencilUpdates(),
         getMinimalAllowedMeshSize(),
         getMaximalAllowedMeshSize(),
         getActiveLevel(),
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridState::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 30;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //omega
            MPI_DOUBLE,		 //updateUMax
            MPI_DOUBLE,		 //updateUH
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uH
            MPI_DOUBLE,		 //uGlobalMax
            MPI_DOUBLE,		 //uGlobalH
            MPI_INT,		 //timeStep
            MPI_DOUBLE,		 //timeStepSize
            MPI_DOUBLE,		 //time
            MPI_DOUBLE,		 //numberOfStencilUpdates
            MPI_DOUBLE,		 //minimalAllowedMeshSize
            MPI_DOUBLE,		 //maximalAllowedMeshSize
            MPI_INT,		 //activeLevel
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
            1,		 //omega
            1,		 //updateUMax
            1,		 //updateUH
            1,		 //uMax
            1,		 //uH
            1,		 //uGlobalMax
            1,		 //uGlobalH
            1,		 //timeStep
            1,		 //timeStepSize
            1,		 //time
            1,		 //numberOfStencilUpdates
            1,		 //minimalAllowedMeshSize
            1,		 //maximalAllowedMeshSize
            1,		 //activeLevel
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._omega))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._updateUMax))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._updateUH))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uMax))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uH))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uGlobalH))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._timeStep))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._timeStepSize))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._time))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._activeLevel))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxLevel))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasRefined))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasErased))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._isTraversalInverted))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._omega))), 		&disp[29] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridState "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridState failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _omega(omega),
   _updateUMax(updateUMax),
   _updateUH(updateUH),
   _uMax(uMax),
   _uH(uH),
   _uGlobalMax(uGlobalMax),
   _uGlobalH(uGlobalH),
   _timeStep(timeStep),
   _timeStepSize(timeStepSize),
   _time(time),
   _numberOfStencilUpdates(numberOfStencilUpdates),
   _minimalAllowedMeshSize(minimalAllowedMeshSize),
   _maximalAllowedMeshSize(maximalAllowedMeshSize),
   _activeLevel(activeLevel),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUpdateUMax() const {
      return _updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUpdateUMax(const double& updateUMax) {
      _updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUpdateUH() const {
      return _updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUpdateUH(const double& updateUH) {
      _updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUH() const {
      return _uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUH(const double& uH) {
      _uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUGlobalMax() const {
      return _uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
      _uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUGlobalH() const {
      return _uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUGlobalH(const double& uGlobalH) {
      _uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTimeStep() const {
      return _timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTimeStep(const int& timeStep) {
      _timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTimeStepSize() const {
      return _timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
      _timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTime() const {
      return _time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTime(const double& time) {
      _time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfStencilUpdates() const {
      return _numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMinimalAllowedMeshSize() const {
      return _minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaximalAllowedMeshSize() const {
      return _maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getActiveLevel() const {
      return _activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setActiveLevel(const int& activeLevel) {
      _activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUpdateUMax() const {
      return _persistentRecords._updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUpdateUMax(const double& updateUMax) {
      _persistentRecords._updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUpdateUH() const {
      return _persistentRecords._updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUpdateUH(const double& updateUH) {
      _persistentRecords._updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUH() const {
      return _persistentRecords._uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUH(const double& uH) {
      _persistentRecords._uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUGlobalMax() const {
      return _persistentRecords._uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUGlobalMax(const double& uGlobalMax) {
      _persistentRecords._uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUGlobalH() const {
      return _persistentRecords._uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUGlobalH(const double& uGlobalH) {
      _persistentRecords._uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTimeStep() const {
      return _persistentRecords._timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTimeStep(const int& timeStep) {
      _persistentRecords._timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTimeStepSize() const {
      return _persistentRecords._timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTimeStepSize(const double& timeStepSize) {
      _persistentRecords._timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTime() const {
      return _persistentRecords._time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTime(const double& time) {
      _persistentRecords._time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfStencilUpdates() const {
      return _persistentRecords._numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinimalAllowedMeshSize() const {
      return _persistentRecords._minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaximalAllowedMeshSize() const {
      return _persistentRecords._maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getActiveLevel() const {
      return _persistentRecords._activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setActiveLevel(const int& activeLevel) {
      _persistentRecords._activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "omega:" << getOmega();
      out << ",";
      out << "updateUMax:" << getUpdateUMax();
      out << ",";
      out << "updateUH:" << getUpdateUH();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uH:" << getUH();
      out << ",";
      out << "uGlobalMax:" << getUGlobalMax();
      out << ",";
      out << "uGlobalH:" << getUGlobalH();
      out << ",";
      out << "timeStep:" << getTimeStep();
      out << ",";
      out << "timeStepSize:" << getTimeStepSize();
      out << ",";
      out << "time:" << getTime();
      out << ",";
      out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
      out << ",";
      out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
      out << ",";
      out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
      out << ",";
      out << "activeLevel:" << getActiveLevel();
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getOmega(),
         getUpdateUMax(),
         getUpdateUH(),
         getUMax(),
         getUH(),
         getUGlobalMax(),
         getUGlobalH(),
         getTimeStep(),
         getTimeStepSize(),
         getTime(),
         getNumberOfStencilUpdates(),
         getMinimalAllowedMeshSize(),
         getMaximalAllowedMeshSize(),
         getActiveLevel(),
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 26;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //omega
            MPI_DOUBLE,		 //updateUMax
            MPI_DOUBLE,		 //updateUH
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uH
            MPI_DOUBLE,		 //uGlobalMax
            MPI_DOUBLE,		 //uGlobalH
            MPI_INT,		 //timeStep
            MPI_DOUBLE,		 //timeStepSize
            MPI_DOUBLE,		 //time
            MPI_DOUBLE,		 //numberOfStencilUpdates
            MPI_DOUBLE,		 //minimalAllowedMeshSize
            MPI_DOUBLE,		 //maximalAllowedMeshSize
            MPI_INT,		 //activeLevel
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
            1,		 //omega
            1,		 //updateUMax
            1,		 //updateUH
            1,		 //uMax
            1,		 //uH
            1,		 //uGlobalMax
            1,		 //uGlobalH
            1,		 //timeStep
            1,		 //timeStepSize
            1,		 //time
            1,		 //numberOfStencilUpdates
            1,		 //minimalAllowedMeshSize
            1,		 //maximalAllowedMeshSize
            1,		 //activeLevel
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._omega))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._updateUMax))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._updateUH))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uMax))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uH))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uGlobalH))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._timeStep))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._timeStepSize))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._time))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._activeLevel))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxLevel))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._omega))), 		&disp[25] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _omega(omega),
   _updateUMax(updateUMax),
   _updateUH(updateUH),
   _uMax(uMax),
   _uH(uH),
   _uGlobalMax(uGlobalMax),
   _uGlobalH(uGlobalH),
   _timeStep(timeStep),
   _timeStepSize(timeStepSize),
   _time(time),
   _numberOfStencilUpdates(numberOfStencilUpdates),
   _minimalAllowedMeshSize(minimalAllowedMeshSize),
   _maximalAllowedMeshSize(maximalAllowedMeshSize),
   _activeLevel(activeLevel),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUpdateUMax() const {
      return _updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUpdateUMax(const double& updateUMax) {
      _updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUpdateUH() const {
      return _updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUpdateUH(const double& updateUH) {
      _updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUH() const {
      return _uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUH(const double& uH) {
      _uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUGlobalMax() const {
      return _uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
      _uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getUGlobalH() const {
      return _uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setUGlobalH(const double& uGlobalH) {
      _uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTimeStep() const {
      return _timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTimeStep(const int& timeStep) {
      _timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTimeStepSize() const {
      return _timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
      _timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getTime() const {
      return _time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setTime(const double& time) {
      _time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfStencilUpdates() const {
      return _numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMinimalAllowedMeshSize() const {
      return _minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaximalAllowedMeshSize() const {
      return _maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getActiveLevel() const {
      return _activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setActiveLevel(const int& activeLevel) {
      _activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::SpacetreeGridState(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUpdateUMax() const {
      return _persistentRecords._updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUpdateUMax(const double& updateUMax) {
      _persistentRecords._updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUpdateUH() const {
      return _persistentRecords._updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUpdateUH(const double& updateUH) {
      _persistentRecords._updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUH() const {
      return _persistentRecords._uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUH(const double& uH) {
      _persistentRecords._uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUGlobalMax() const {
      return _persistentRecords._uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUGlobalMax(const double& uGlobalMax) {
      _persistentRecords._uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getUGlobalH() const {
      return _persistentRecords._uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setUGlobalH(const double& uGlobalH) {
      _persistentRecords._uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTimeStep() const {
      return _persistentRecords._timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTimeStep(const int& timeStep) {
      _persistentRecords._timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTimeStepSize() const {
      return _persistentRecords._timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTimeStepSize(const double& timeStepSize) {
      _persistentRecords._timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getTime() const {
      return _persistentRecords._time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setTime(const double& time) {
      _persistentRecords._time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfStencilUpdates() const {
      return _persistentRecords._numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinimalAllowedMeshSize() const {
      return _persistentRecords._minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaximalAllowedMeshSize() const {
      return _persistentRecords._maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getActiveLevel() const {
      return _persistentRecords._activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setActiveLevel(const int& activeLevel) {
      _persistentRecords._activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
      out << "omega:" << getOmega();
      out << ",";
      out << "updateUMax:" << getUpdateUMax();
      out << ",";
      out << "updateUH:" << getUpdateUH();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uH:" << getUH();
      out << ",";
      out << "uGlobalMax:" << getUGlobalMax();
      out << ",";
      out << "uGlobalH:" << getUGlobalH();
      out << ",";
      out << "timeStep:" << getTimeStep();
      out << ",";
      out << "timeStepSize:" << getTimeStepSize();
      out << ",";
      out << "time:" << getTime();
      out << ",";
      out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
      out << ",";
      out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
      out << ",";
      out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
      out << ",";
      out << "activeLevel:" << getActiveLevel();
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked peano::applications::heatequation::timestepping::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getOmega(),
         getUpdateUMax(),
         getUpdateUH(),
         getUMax(),
         getUH(),
         getUGlobalMax(),
         getUGlobalH(),
         getTimeStep(),
         getTimeStepSize(),
         getTime(),
         getNumberOfStencilUpdates(),
         getMinimalAllowedMeshSize(),
         getMaximalAllowedMeshSize(),
         getActiveLevel(),
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridState::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 29;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //omega
            MPI_DOUBLE,		 //updateUMax
            MPI_DOUBLE,		 //updateUH
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uH
            MPI_DOUBLE,		 //uGlobalMax
            MPI_DOUBLE,		 //uGlobalH
            MPI_INT,		 //timeStep
            MPI_DOUBLE,		 //timeStepSize
            MPI_DOUBLE,		 //time
            MPI_DOUBLE,		 //numberOfStencilUpdates
            MPI_DOUBLE,		 //minimalAllowedMeshSize
            MPI_DOUBLE,		 //maximalAllowedMeshSize
            MPI_INT,		 //activeLevel
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
            1,		 //omega
            1,		 //updateUMax
            1,		 //updateUH
            1,		 //uMax
            1,		 //uH
            1,		 //uGlobalMax
            1,		 //uGlobalH
            1,		 //timeStep
            1,		 //timeStepSize
            1,		 //time
            1,		 //numberOfStencilUpdates
            1,		 //minimalAllowedMeshSize
            1,		 //maximalAllowedMeshSize
            1,		 //activeLevel
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._omega))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._updateUMax))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._updateUH))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uMax))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uH))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._uGlobalH))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._timeStep))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._timeStepSize))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._time))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._activeLevel))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._maxLevel))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasRefined))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasErased))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._isTraversalInverted))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._omega))), 		&disp[28] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridState "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridState failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _omega(omega),
   _updateUMax(updateUMax),
   _updateUH(updateUH),
   _uMax(uMax),
   _uH(uH),
   _uGlobalMax(uGlobalMax),
   _uGlobalH(uGlobalH),
   _timeStep(timeStep),
   _timeStepSize(timeStepSize),
   _time(time),
   _numberOfStencilUpdates(numberOfStencilUpdates),
   _minimalAllowedMeshSize(minimalAllowedMeshSize),
   _maximalAllowedMeshSize(maximalAllowedMeshSize),
   _activeLevel(activeLevel),
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
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUpdateUMax() const {
      return _updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUpdateUMax(const double& updateUMax) {
      _updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUpdateUH() const {
      return _updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUpdateUH(const double& updateUH) {
      _updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUH() const {
      return _uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUH(const double& uH) {
      _uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUGlobalMax() const {
      return _uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
      _uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getUGlobalH() const {
      return _uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setUGlobalH(const double& uGlobalH) {
      _uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTimeStep() const {
      return _timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTimeStep(const int& timeStep) {
      _timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTimeStepSize() const {
      return _timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
      _timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getTime() const {
      return _time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setTime(const double& time) {
      _time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfStencilUpdates() const {
      return _numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMinimalAllowedMeshSize() const {
      return _minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaximalAllowedMeshSize() const {
      return _maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getActiveLevel() const {
      return _activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setActiveLevel(const int& activeLevel) {
      _activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUpdateUMax() const {
      return _persistentRecords._updateUMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUpdateUMax(const double& updateUMax) {
      _persistentRecords._updateUMax = updateUMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUpdateUH() const {
      return _persistentRecords._updateUH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUpdateUH(const double& updateUH) {
      _persistentRecords._updateUH = updateUH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUH() const {
      return _persistentRecords._uH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUH(const double& uH) {
      _persistentRecords._uH = uH;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUGlobalMax() const {
      return _persistentRecords._uGlobalMax;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUGlobalMax(const double& uGlobalMax) {
      _persistentRecords._uGlobalMax = uGlobalMax;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getUGlobalH() const {
      return _persistentRecords._uGlobalH;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setUGlobalH(const double& uGlobalH) {
      _persistentRecords._uGlobalH = uGlobalH;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTimeStep() const {
      return _persistentRecords._timeStep;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTimeStep(const int& timeStep) {
      _persistentRecords._timeStep = timeStep;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTimeStepSize() const {
      return _persistentRecords._timeStepSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTimeStepSize(const double& timeStepSize) {
      _persistentRecords._timeStepSize = timeStepSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getTime() const {
      return _persistentRecords._time;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setTime(const double& time) {
      _persistentRecords._time = time;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfStencilUpdates() const {
      return _persistentRecords._numberOfStencilUpdates;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
      _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinimalAllowedMeshSize() const {
      return _persistentRecords._minimalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
      _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaximalAllowedMeshSize() const {
      return _persistentRecords._maximalAllowedMeshSize;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
      _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getActiveLevel() const {
      return _persistentRecords._activeLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setActiveLevel(const int& activeLevel) {
      _persistentRecords._activeLevel = activeLevel;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "omega:" << getOmega();
      out << ",";
      out << "updateUMax:" << getUpdateUMax();
      out << ",";
      out << "updateUH:" << getUpdateUH();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uH:" << getUH();
      out << ",";
      out << "uGlobalMax:" << getUGlobalMax();
      out << ",";
      out << "uGlobalH:" << getUGlobalH();
      out << ",";
      out << "timeStep:" << getTimeStep();
      out << ",";
      out << "timeStepSize:" << getTimeStepSize();
      out << ",";
      out << "time:" << getTime();
      out << ",";
      out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
      out << ",";
      out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
      out << ",";
      out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
      out << ",";
      out << "activeLevel:" << getActiveLevel();
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
   
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::heatequation::timestepping::records::SpacetreeGridState peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getOmega(),
         getUpdateUMax(),
         getUpdateUH(),
         getUMax(),
         getUH(),
         getUGlobalMax(),
         getUGlobalH(),
         getTimeStep(),
         getTimeStepSize(),
         getTime(),
         getNumberOfStencilUpdates(),
         getMinimalAllowedMeshSize(),
         getMaximalAllowedMeshSize(),
         getActiveLevel(),
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
      
      tarch::logging::Log peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::_log( "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 25;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //omega
            MPI_DOUBLE,		 //updateUMax
            MPI_DOUBLE,		 //updateUH
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uH
            MPI_DOUBLE,		 //uGlobalMax
            MPI_DOUBLE,		 //uGlobalH
            MPI_INT,		 //timeStep
            MPI_DOUBLE,		 //timeStepSize
            MPI_DOUBLE,		 //time
            MPI_DOUBLE,		 //numberOfStencilUpdates
            MPI_DOUBLE,		 //minimalAllowedMeshSize
            MPI_DOUBLE,		 //maximalAllowedMeshSize
            MPI_INT,		 //activeLevel
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
            1,		 //omega
            1,		 //updateUMax
            1,		 //updateUH
            1,		 //uMax
            1,		 //uH
            1,		 //uGlobalMax
            1,		 //uGlobalH
            1,		 //timeStep
            1,		 //timeStepSize
            1,		 //time
            1,		 //numberOfStencilUpdates
            1,		 //minimalAllowedMeshSize
            1,		 //maximalAllowedMeshSize
            1,		 //activeLevel
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._omega))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._updateUMax))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._updateUH))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uMax))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uH))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._uGlobalH))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._timeStep))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._timeStepSize))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._time))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._activeLevel))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._maxLevel))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._omega))), 		&disp[24] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::heatequation::timestepping::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


