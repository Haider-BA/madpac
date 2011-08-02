#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/RegularGridBlockState.h"

#if defined(Parallel)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _gridIsStationary(gridIsStationary) {
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGridIsStationary() const {
      return _gridIsStationary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      _gridIsStationary = gridIsStationary;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::~RegularGridBlockState() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGridIsStationary() const {
      return _persistentRecords._gridIsStationary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGridIsStationary(const bool& gridIsStationary) {
      _persistentRecords._gridIsStationary = gridIsStationary;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::toString (std::ostream& out) const {
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
      out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
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
      out << "gridIsStationary:" << getGridIsStationary();
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::convert() const{
      return RegularGridBlockStatePacked(
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
         getMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getGridIsStationary()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::initDatatype() {
         const int Attributes = 31;
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
            MPI_DOUBLE,		 //meshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_CHAR,		 //gridIsStationary
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
            DIMENSIONS,		 //meshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //gridIsStationary
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockState dummyRegularGridBlockState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._globalNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._globalCpuTime))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._meshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gridIsStationary))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[1]._persistentRecords._level))), 		&disp[30] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockState::Datatype );
         MPI_Type_commit( &RegularGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockState::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells) {
      setGridIsStationary(gridIsStationary);
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::~RegularGridBlockStatePacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::toString (std::ostream& out) const {
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
      out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
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
      out << "gridIsStationary:" << getGridIsStationary();
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::convert() const{
      return RegularGridBlockState(
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
         getMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getGridIsStationary()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::initDatatype() {
         const int Attributes = 31;
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
            MPI_DOUBLE,		 //meshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
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
            DIMENSIONS,		 //meshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockStatePacked dummyRegularGridBlockStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._globalNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._globalCpuTime))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[1]._persistentRecords._level))), 		&disp[30] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockStatePacked::Datatype );
         MPI_Type_commit( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _gridIsStationary(gridIsStationary) {
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::getGridIsStationary() const {
      return _gridIsStationary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      _gridIsStationary = gridIsStationary;
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState() {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::RegularGridBlockState(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::~RegularGridBlockState() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getGridIsStationary() const {
      return _persistentRecords._gridIsStationary;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::setGridIsStationary(const bool& gridIsStationary) {
      _persistentRecords._gridIsStationary = gridIsStationary;
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::toString (std::ostream& out) const {
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
      out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
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
      out << "gridIsStationary:" << getGridIsStationary();
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::convert() const{
      return RegularGridBlockStatePacked(
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
         getMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getGridIsStationary()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::initDatatype() {
         const int Attributes = 29;
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
            MPI_DOUBLE,		 //meshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
            MPI_CHAR,		 //gridIsStationary
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
            DIMENSIONS,		 //meshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //gridIsStationary
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockState dummyRegularGridBlockState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._meshWidth[0]))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gridIsStationary))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[1]._persistentRecords._level))), 		&disp[28] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockState::Datatype );
         MPI_Type_commit( &RegularGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockState::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells) {
      setGridIsStationary(gridIsStationary);
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::~RegularGridBlockStatePacked() { }
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   
   std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::toString (std::ostream& out) const {
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
      out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
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
      out << "gridIsStationary:" << getGridIsStationary();
      out <<  ")";
   }
   
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::PersistentRecords peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockState peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::convert() const{
      return RegularGridBlockState(
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
         getMeshWidth(),
         getNumberOfInnerVertices(),
         getNumberOfBoundaryVertices(),
         getNumberOfOuterVertices(),
         getNumberOfInnerCells(),
         getNumberOfOuterCells(),
         getGridIsStationary()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::initDatatype() {
         const int Attributes = 29;
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
            MPI_DOUBLE,		 //meshWidth
            MPI_DOUBLE,		 //numberOfInnerVertices
            MPI_DOUBLE,		 //numberOfBoundaryVertices
            MPI_DOUBLE,		 //numberOfOuterVertices
            MPI_DOUBLE,		 //numberOfInnerCells
            MPI_DOUBLE,		 //numberOfOuterCells
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
            DIMENSIONS,		 //meshWidth
            1,		 //numberOfInnerVertices
            1,		 //numberOfBoundaryVertices
            1,		 //numberOfOuterVertices
            1,		 //numberOfInnerCells
            1,		 //numberOfOuterCells
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockStatePacked dummyRegularGridBlockStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[1]._persistentRecords._level))), 		&disp[28] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockStatePacked::Datatype );
         MPI_Type_commit( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
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
      
      
      
      void peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked failed: "
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
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked",
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
      
      
      
      bool peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


