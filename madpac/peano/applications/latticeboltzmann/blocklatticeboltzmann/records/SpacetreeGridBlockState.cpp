#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockState.h"

#if defined(Parallel)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _level(level),
   _numberLevels(numberLevels),
   _dx(dx),
   _dt(dt),
   _numberTimesteps(numberTimesteps),
   _density(density),
   _dynamicGeometry(dynamicGeometry),
   _computeForces(computeForces),
   _collisionModelId(collisionModelId),
   _viscosityL(viscosityL),
   _bulkViscosityL(bulkViscosityL),
   _tau(tau),
   _boltzmannConstant(boltzmannConstant),
   _mu(mu),
   _gamma(gamma),
   _mrtHumieresGamma(mrtHumieresGamma),
   _timestep(timestep),
   _plotVtk(plotVtk),
   _numberTimestepsPerPlotting(numberTimestepsPerPlotting),
   _vtkFilename(vtkFilename),
   _measurePerformance(measurePerformance),
   _localNumberOfCells(localNumberOfCells),
   _globalNumberOfCells(globalNumberOfCells),
   _globalCpuTime(globalCpuTime),
   _lastLevel(lastLevel),
   _currentLevel(currentLevel),
   _nextLevel(nextLevel),
   _geometryChanged(geometryChanged),
   _cellCounter(cellCounter),
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
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::~SpacetreeGridBlockState() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::toString (std::ostream& out) const {
      out << "("; 
      out << "level:" << getLevel();
      out << ",";
      out << "numberLevels:" << getNumberLevels();
      out << ",";
      out << "dx:" << getDx();
      out << ",";
      out << "dt:" << getDt();
      out << ",";
      out << "numberTimesteps:" << getNumberTimesteps();
      out << ",";
      out << "density:" << getDensity();
      out << ",";
      out << "dynamicGeometry:" << getDynamicGeometry();
      out << ",";
      out << "computeForces:" << getComputeForces();
      out << ",";
      out << "collisionModelId:[";
   for (int i = 0; i < LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1; i++) {
      out << getCollisionModelId(i) << ",";
   }
   out << getCollisionModelId(LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1) << "]";
      out << ",";
      out << "viscosityL:" << getViscosityL();
      out << ",";
      out << "bulkViscosityL:" << getBulkViscosityL();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "boltzmannConstant:" << getBoltzmannConstant();
      out << ",";
      out << "mu:" << getMu();
      out << ",";
      out << "gamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getGamma(i) << ",";
   }
   out << getGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "mrtHumieresGamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getMrtHumieresGamma(i) << ",";
   }
   out << getMrtHumieresGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "timestep:" << getTimestep();
      out << ",";
      out << "plotVtk:" << getPlotVtk();
      out << ",";
      out << "numberTimestepsPerPlotting:" << getNumberTimestepsPerPlotting();
      out << ",";
      out << "vtkFilename:[";
   for (int i = 0; i < 128-1; i++) {
      out << getVtkFilename(i) << ",";
   }
   out << getVtkFilename(128-1) << "]";
      out << ",";
      out << "measurePerformance:" << getMeasurePerformance();
      out << ",";
      out << "localNumberOfCells:" << getLocalNumberOfCells();
      out << ",";
      out << "globalNumberOfCells:" << getGlobalNumberOfCells();
      out << ",";
      out << "globalCpuTime:" << getGlobalCpuTime();
      out << ",";
      out << "lastLevel:" << getLastLevel();
      out << ",";
      out << "currentLevel:" << getCurrentLevel();
      out << ",";
      out << "nextLevel:" << getNextLevel();
      out << ",";
      out << "geometryChanged:" << getGeometryChanged();
      out << ",";
      out << "cellCounter:" << getCellCounter();
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::convert() const{
      return SpacetreeGridBlockStatePacked(
         getLevel(),
         getNumberLevels(),
         getDx(),
         getDt(),
         getNumberTimesteps(),
         getDensity(),
         getDynamicGeometry(),
         getComputeForces(),
         getCollisionModelId(),
         getViscosityL(),
         getBulkViscosityL(),
         getTau(),
         getBoltzmannConstant(),
         getMu(),
         getGamma(),
         getMrtHumieresGamma(),
         getTimestep(),
         getPlotVtk(),
         getNumberTimestepsPerPlotting(),
         getVtkFilename(),
         getMeasurePerformance(),
         getLocalNumberOfCells(),
         getGlobalNumberOfCells(),
         getGlobalCpuTime(),
         getLastLevel(),
         getCurrentLevel(),
         getNextLevel(),
         getGeometryChanged(),
         getCellCounter(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::initDatatype() {
         const int Attributes = 39;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_INT,		 //numberLevels
            MPI_DOUBLE,		 //dx
            MPI_DOUBLE,		 //dt
            MPI_INT,		 //numberTimesteps
            MPI_DOUBLE,		 //density
            MPI_SHORT,		 //dynamicGeometry
            MPI_SHORT,		 //computeForces
            MPI_SHORT,		 //collisionModelId
            MPI_DOUBLE,		 //viscosityL
            MPI_DOUBLE,		 //bulkViscosityL
            MPI_DOUBLE,		 //tau
            MPI_DOUBLE,		 //boltzmannConstant
            MPI_DOUBLE,		 //mu
            MPI_DOUBLE,		 //gamma
            MPI_DOUBLE,		 //mrtHumieresGamma
            MPI_INT,		 //timestep
            MPI_SHORT,		 //plotVtk
            MPI_INT,		 //numberTimestepsPerPlotting
            MPI_SHORT,		 //measurePerformance
            MPI_INT,		 //localNumberOfCells
            MPI_INT,		 //globalNumberOfCells
            MPI_DOUBLE,		 //globalCpuTime
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
            1,		 //level
            1,		 //numberLevels
            1,		 //dx
            1,		 //dt
            1,		 //numberTimesteps
            1,		 //density
            1,		 //dynamicGeometry
            1,		 //computeForces
            LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,		 //collisionModelId
            1,		 //viscosityL
            1,		 //bulkViscosityL
            1,		 //tau
            1,		 //boltzmannConstant
            1,		 //mu
            LB_CURRENT_DIR,		 //gamma
            LB_CURRENT_DIR,		 //mrtHumieresGamma
            1,		 //timestep
            1,		 //plotVtk
            1,		 //numberTimestepsPerPlotting
            1,		 //measurePerformance
            1,		 //localNumberOfCells
            1,		 //globalNumberOfCells
            1,		 //globalCpuTime
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
         SpacetreeGridBlockState dummySpacetreeGridBlockState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._globalNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._globalCpuTime))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxLevel))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasRefined))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasErased))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[35] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._isTraversalInverted))), 		&disp[36] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[37] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[1]._persistentRecords._level))), 		&disp[38] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockState::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockState::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _level(level),
   _numberLevels(numberLevels),
   _dx(dx),
   _dt(dt),
   _numberTimesteps(numberTimesteps),
   _density(density),
   _dynamicGeometry(dynamicGeometry),
   _computeForces(computeForces),
   _collisionModelId(collisionModelId),
   _viscosityL(viscosityL),
   _bulkViscosityL(bulkViscosityL),
   _tau(tau),
   _boltzmannConstant(boltzmannConstant),
   _mu(mu),
   _gamma(gamma),
   _mrtHumieresGamma(mrtHumieresGamma),
   _timestep(timestep),
   _plotVtk(plotVtk),
   _numberTimestepsPerPlotting(numberTimestepsPerPlotting),
   _vtkFilename(vtkFilename),
   _measurePerformance(measurePerformance),
   _localNumberOfCells(localNumberOfCells),
   _globalNumberOfCells(globalNumberOfCells),
   _globalCpuTime(globalCpuTime),
   _lastLevel(lastLevel),
   _currentLevel(currentLevel),
   _nextLevel(nextLevel),
   _geometryChanged(geometryChanged),
   _cellCounter(cellCounter),
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
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::~SpacetreeGridBlockStatePacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "level:" << getLevel();
      out << ",";
      out << "numberLevels:" << getNumberLevels();
      out << ",";
      out << "dx:" << getDx();
      out << ",";
      out << "dt:" << getDt();
      out << ",";
      out << "numberTimesteps:" << getNumberTimesteps();
      out << ",";
      out << "density:" << getDensity();
      out << ",";
      out << "dynamicGeometry:" << getDynamicGeometry();
      out << ",";
      out << "computeForces:" << getComputeForces();
      out << ",";
      out << "collisionModelId:[";
   for (int i = 0; i < LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1; i++) {
      out << getCollisionModelId(i) << ",";
   }
   out << getCollisionModelId(LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1) << "]";
      out << ",";
      out << "viscosityL:" << getViscosityL();
      out << ",";
      out << "bulkViscosityL:" << getBulkViscosityL();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "boltzmannConstant:" << getBoltzmannConstant();
      out << ",";
      out << "mu:" << getMu();
      out << ",";
      out << "gamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getGamma(i) << ",";
   }
   out << getGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "mrtHumieresGamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getMrtHumieresGamma(i) << ",";
   }
   out << getMrtHumieresGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "timestep:" << getTimestep();
      out << ",";
      out << "plotVtk:" << getPlotVtk();
      out << ",";
      out << "numberTimestepsPerPlotting:" << getNumberTimestepsPerPlotting();
      out << ",";
      out << "vtkFilename:[";
   for (int i = 0; i < 128-1; i++) {
      out << getVtkFilename(i) << ",";
   }
   out << getVtkFilename(128-1) << "]";
      out << ",";
      out << "measurePerformance:" << getMeasurePerformance();
      out << ",";
      out << "localNumberOfCells:" << getLocalNumberOfCells();
      out << ",";
      out << "globalNumberOfCells:" << getGlobalNumberOfCells();
      out << ",";
      out << "globalCpuTime:" << getGlobalCpuTime();
      out << ",";
      out << "lastLevel:" << getLastLevel();
      out << ",";
      out << "currentLevel:" << getCurrentLevel();
      out << ",";
      out << "nextLevel:" << getNextLevel();
      out << ",";
      out << "geometryChanged:" << getGeometryChanged();
      out << ",";
      out << "cellCounter:" << getCellCounter();
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::convert() const{
      return SpacetreeGridBlockState(
         getLevel(),
         getNumberLevels(),
         getDx(),
         getDt(),
         getNumberTimesteps(),
         getDensity(),
         getDynamicGeometry(),
         getComputeForces(),
         getCollisionModelId(),
         getViscosityL(),
         getBulkViscosityL(),
         getTau(),
         getBoltzmannConstant(),
         getMu(),
         getGamma(),
         getMrtHumieresGamma(),
         getTimestep(),
         getPlotVtk(),
         getNumberTimestepsPerPlotting(),
         getVtkFilename(),
         getMeasurePerformance(),
         getLocalNumberOfCells(),
         getGlobalNumberOfCells(),
         getGlobalCpuTime(),
         getLastLevel(),
         getCurrentLevel(),
         getNextLevel(),
         getGeometryChanged(),
         getCellCounter(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::initDatatype() {
         const int Attributes = 35;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_INT,		 //numberLevels
            MPI_DOUBLE,		 //dx
            MPI_DOUBLE,		 //dt
            MPI_INT,		 //numberTimesteps
            MPI_DOUBLE,		 //density
            MPI_SHORT,		 //dynamicGeometry
            MPI_SHORT,		 //computeForces
            MPI_SHORT,		 //collisionModelId
            MPI_DOUBLE,		 //viscosityL
            MPI_DOUBLE,		 //bulkViscosityL
            MPI_DOUBLE,		 //tau
            MPI_DOUBLE,		 //boltzmannConstant
            MPI_DOUBLE,		 //mu
            MPI_DOUBLE,		 //gamma
            MPI_DOUBLE,		 //mrtHumieresGamma
            MPI_INT,		 //timestep
            MPI_SHORT,		 //plotVtk
            MPI_INT,		 //numberTimestepsPerPlotting
            MPI_SHORT,		 //measurePerformance
            MPI_INT,		 //localNumberOfCells
            MPI_INT,		 //globalNumberOfCells
            MPI_DOUBLE,		 //globalCpuTime
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
            1,		 //level
            1,		 //numberLevels
            1,		 //dx
            1,		 //dt
            1,		 //numberTimesteps
            1,		 //density
            1,		 //dynamicGeometry
            1,		 //computeForces
            LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,		 //collisionModelId
            1,		 //viscosityL
            1,		 //bulkViscosityL
            1,		 //tau
            1,		 //boltzmannConstant
            1,		 //mu
            LB_CURRENT_DIR,		 //gamma
            LB_CURRENT_DIR,		 //mrtHumieresGamma
            1,		 //timestep
            1,		 //plotVtk
            1,		 //numberTimestepsPerPlotting
            1,		 //measurePerformance
            1,		 //localNumberOfCells
            1,		 //globalNumberOfCells
            1,		 //globalCpuTime
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
         SpacetreeGridBlockStatePacked dummySpacetreeGridBlockStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._globalNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._globalCpuTime))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxLevel))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._deriveAdjacencyInformation))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[1]._persistentRecords._level))), 		&disp[34] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _level(level),
   _numberLevels(numberLevels),
   _dx(dx),
   _dt(dt),
   _numberTimesteps(numberTimesteps),
   _density(density),
   _dynamicGeometry(dynamicGeometry),
   _computeForces(computeForces),
   _collisionModelId(collisionModelId),
   _viscosityL(viscosityL),
   _bulkViscosityL(bulkViscosityL),
   _tau(tau),
   _boltzmannConstant(boltzmannConstant),
   _mu(mu),
   _gamma(gamma),
   _mrtHumieresGamma(mrtHumieresGamma),
   _timestep(timestep),
   _plotVtk(plotVtk),
   _numberTimestepsPerPlotting(numberTimestepsPerPlotting),
   _vtkFilename(vtkFilename),
   _measurePerformance(measurePerformance),
   _localNumberOfCells(localNumberOfCells),
   _lastLevel(lastLevel),
   _currentLevel(currentLevel),
   _nextLevel(nextLevel),
   _geometryChanged(geometryChanged),
   _cellCounter(cellCounter),
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
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::~SpacetreeGridBlockState() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::toString (std::ostream& out) const {
      out << "("; 
      out << "level:" << getLevel();
      out << ",";
      out << "numberLevels:" << getNumberLevels();
      out << ",";
      out << "dx:" << getDx();
      out << ",";
      out << "dt:" << getDt();
      out << ",";
      out << "numberTimesteps:" << getNumberTimesteps();
      out << ",";
      out << "density:" << getDensity();
      out << ",";
      out << "dynamicGeometry:" << getDynamicGeometry();
      out << ",";
      out << "computeForces:" << getComputeForces();
      out << ",";
      out << "collisionModelId:[";
   for (int i = 0; i < LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1; i++) {
      out << getCollisionModelId(i) << ",";
   }
   out << getCollisionModelId(LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1) << "]";
      out << ",";
      out << "viscosityL:" << getViscosityL();
      out << ",";
      out << "bulkViscosityL:" << getBulkViscosityL();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "boltzmannConstant:" << getBoltzmannConstant();
      out << ",";
      out << "mu:" << getMu();
      out << ",";
      out << "gamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getGamma(i) << ",";
   }
   out << getGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "mrtHumieresGamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getMrtHumieresGamma(i) << ",";
   }
   out << getMrtHumieresGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "timestep:" << getTimestep();
      out << ",";
      out << "plotVtk:" << getPlotVtk();
      out << ",";
      out << "numberTimestepsPerPlotting:" << getNumberTimestepsPerPlotting();
      out << ",";
      out << "vtkFilename:[";
   for (int i = 0; i < 128-1; i++) {
      out << getVtkFilename(i) << ",";
   }
   out << getVtkFilename(128-1) << "]";
      out << ",";
      out << "measurePerformance:" << getMeasurePerformance();
      out << ",";
      out << "localNumberOfCells:" << getLocalNumberOfCells();
      out << ",";
      out << "lastLevel:" << getLastLevel();
      out << ",";
      out << "currentLevel:" << getCurrentLevel();
      out << ",";
      out << "nextLevel:" << getNextLevel();
      out << ",";
      out << "geometryChanged:" << getGeometryChanged();
      out << ",";
      out << "cellCounter:" << getCellCounter();
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::convert() const{
      return SpacetreeGridBlockStatePacked(
         getLevel(),
         getNumberLevels(),
         getDx(),
         getDt(),
         getNumberTimesteps(),
         getDensity(),
         getDynamicGeometry(),
         getComputeForces(),
         getCollisionModelId(),
         getViscosityL(),
         getBulkViscosityL(),
         getTau(),
         getBoltzmannConstant(),
         getMu(),
         getGamma(),
         getMrtHumieresGamma(),
         getTimestep(),
         getPlotVtk(),
         getNumberTimestepsPerPlotting(),
         getVtkFilename(),
         getMeasurePerformance(),
         getLocalNumberOfCells(),
         getLastLevel(),
         getCurrentLevel(),
         getNextLevel(),
         getGeometryChanged(),
         getCellCounter(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::initDatatype() {
         const int Attributes = 36;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_INT,		 //numberLevels
            MPI_DOUBLE,		 //dx
            MPI_DOUBLE,		 //dt
            MPI_INT,		 //numberTimesteps
            MPI_DOUBLE,		 //density
            MPI_SHORT,		 //dynamicGeometry
            MPI_SHORT,		 //computeForces
            MPI_SHORT,		 //collisionModelId
            MPI_DOUBLE,		 //viscosityL
            MPI_DOUBLE,		 //bulkViscosityL
            MPI_DOUBLE,		 //tau
            MPI_DOUBLE,		 //boltzmannConstant
            MPI_DOUBLE,		 //mu
            MPI_DOUBLE,		 //gamma
            MPI_DOUBLE,		 //mrtHumieresGamma
            MPI_INT,		 //timestep
            MPI_SHORT,		 //plotVtk
            MPI_INT,		 //numberTimestepsPerPlotting
            MPI_SHORT,		 //measurePerformance
            MPI_INT,		 //localNumberOfCells
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
            1,		 //level
            1,		 //numberLevels
            1,		 //dx
            1,		 //dt
            1,		 //numberTimesteps
            1,		 //density
            1,		 //dynamicGeometry
            1,		 //computeForces
            LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,		 //collisionModelId
            1,		 //viscosityL
            1,		 //bulkViscosityL
            1,		 //tau
            1,		 //boltzmannConstant
            1,		 //mu
            LB_CURRENT_DIR,		 //gamma
            LB_CURRENT_DIR,		 //mrtHumieresGamma
            1,		 //timestep
            1,		 //plotVtk
            1,		 //numberTimestepsPerPlotting
            1,		 //measurePerformance
            1,		 //localNumberOfCells
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
         SpacetreeGridBlockState dummySpacetreeGridBlockState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxLevel))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasRefined))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasErased))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._isTraversalInverted))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[1]._persistentRecords._level))), 		&disp[35] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockState::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockState::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _level(level),
   _numberLevels(numberLevels),
   _dx(dx),
   _dt(dt),
   _numberTimesteps(numberTimesteps),
   _density(density),
   _dynamicGeometry(dynamicGeometry),
   _computeForces(computeForces),
   _collisionModelId(collisionModelId),
   _viscosityL(viscosityL),
   _bulkViscosityL(bulkViscosityL),
   _tau(tau),
   _boltzmannConstant(boltzmannConstant),
   _mu(mu),
   _gamma(gamma),
   _mrtHumieresGamma(mrtHumieresGamma),
   _timestep(timestep),
   _plotVtk(plotVtk),
   _numberTimestepsPerPlotting(numberTimestepsPerPlotting),
   _vtkFilename(vtkFilename),
   _measurePerformance(measurePerformance),
   _localNumberOfCells(localNumberOfCells),
   _lastLevel(lastLevel),
   _currentLevel(currentLevel),
   _nextLevel(nextLevel),
   _geometryChanged(geometryChanged),
   _cellCounter(cellCounter),
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
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::~SpacetreeGridBlockStatePacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "level:" << getLevel();
      out << ",";
      out << "numberLevels:" << getNumberLevels();
      out << ",";
      out << "dx:" << getDx();
      out << ",";
      out << "dt:" << getDt();
      out << ",";
      out << "numberTimesteps:" << getNumberTimesteps();
      out << ",";
      out << "density:" << getDensity();
      out << ",";
      out << "dynamicGeometry:" << getDynamicGeometry();
      out << ",";
      out << "computeForces:" << getComputeForces();
      out << ",";
      out << "collisionModelId:[";
   for (int i = 0; i < LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1; i++) {
      out << getCollisionModelId(i) << ",";
   }
   out << getCollisionModelId(LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS-1) << "]";
      out << ",";
      out << "viscosityL:" << getViscosityL();
      out << ",";
      out << "bulkViscosityL:" << getBulkViscosityL();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "boltzmannConstant:" << getBoltzmannConstant();
      out << ",";
      out << "mu:" << getMu();
      out << ",";
      out << "gamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getGamma(i) << ",";
   }
   out << getGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "mrtHumieresGamma:[";
   for (int i = 0; i < LB_CURRENT_DIR-1; i++) {
      out << getMrtHumieresGamma(i) << ",";
   }
   out << getMrtHumieresGamma(LB_CURRENT_DIR-1) << "]";
      out << ",";
      out << "timestep:" << getTimestep();
      out << ",";
      out << "plotVtk:" << getPlotVtk();
      out << ",";
      out << "numberTimestepsPerPlotting:" << getNumberTimestepsPerPlotting();
      out << ",";
      out << "vtkFilename:[";
   for (int i = 0; i < 128-1; i++) {
      out << getVtkFilename(i) << ",";
   }
   out << getVtkFilename(128-1) << "]";
      out << ",";
      out << "measurePerformance:" << getMeasurePerformance();
      out << ",";
      out << "localNumberOfCells:" << getLocalNumberOfCells();
      out << ",";
      out << "lastLevel:" << getLastLevel();
      out << ",";
      out << "currentLevel:" << getCurrentLevel();
      out << ",";
      out << "nextLevel:" << getNextLevel();
      out << ",";
      out << "geometryChanged:" << getGeometryChanged();
      out << ",";
      out << "cellCounter:" << getCellCounter();
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
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::convert() const{
      return SpacetreeGridBlockState(
         getLevel(),
         getNumberLevels(),
         getDx(),
         getDt(),
         getNumberTimesteps(),
         getDensity(),
         getDynamicGeometry(),
         getComputeForces(),
         getCollisionModelId(),
         getViscosityL(),
         getBulkViscosityL(),
         getTau(),
         getBoltzmannConstant(),
         getMu(),
         getGamma(),
         getMrtHumieresGamma(),
         getTimestep(),
         getPlotVtk(),
         getNumberTimestepsPerPlotting(),
         getVtkFilename(),
         getMeasurePerformance(),
         getLocalNumberOfCells(),
         getLastLevel(),
         getCurrentLevel(),
         getNextLevel(),
         getGeometryChanged(),
         getCellCounter(),
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
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::initDatatype() {
         const int Attributes = 32;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //level
            MPI_INT,		 //numberLevels
            MPI_DOUBLE,		 //dx
            MPI_DOUBLE,		 //dt
            MPI_INT,		 //numberTimesteps
            MPI_DOUBLE,		 //density
            MPI_SHORT,		 //dynamicGeometry
            MPI_SHORT,		 //computeForces
            MPI_SHORT,		 //collisionModelId
            MPI_DOUBLE,		 //viscosityL
            MPI_DOUBLE,		 //bulkViscosityL
            MPI_DOUBLE,		 //tau
            MPI_DOUBLE,		 //boltzmannConstant
            MPI_DOUBLE,		 //mu
            MPI_DOUBLE,		 //gamma
            MPI_DOUBLE,		 //mrtHumieresGamma
            MPI_INT,		 //timestep
            MPI_SHORT,		 //plotVtk
            MPI_INT,		 //numberTimestepsPerPlotting
            MPI_SHORT,		 //measurePerformance
            MPI_INT,		 //localNumberOfCells
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
            1,		 //level
            1,		 //numberLevels
            1,		 //dx
            1,		 //dt
            1,		 //numberTimesteps
            1,		 //density
            1,		 //dynamicGeometry
            1,		 //computeForces
            LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,		 //collisionModelId
            1,		 //viscosityL
            1,		 //bulkViscosityL
            1,		 //tau
            1,		 //boltzmannConstant
            1,		 //mu
            LB_CURRENT_DIR,		 //gamma
            LB_CURRENT_DIR,		 //mrtHumieresGamma
            1,		 //timestep
            1,		 //plotVtk
            1,		 //numberTimestepsPerPlotting
            1,		 //measurePerformance
            1,		 //localNumberOfCells
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
         SpacetreeGridBlockStatePacked dummySpacetreeGridBlockStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxLevel))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[1]._persistentRecords._level))), 		&disp[31] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


