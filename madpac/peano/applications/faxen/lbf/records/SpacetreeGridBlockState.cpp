#include "peano/applications/faxen/lbf/records/SpacetreeGridBlockState.h"

#if defined(Parallel)
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _onlyNse(onlyNse),
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _thresdelt(thresdelt),
   _delt(delt),
   _ftau(ftau),
   _visDelt(visDelt),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _fgamma(fgamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _avrExtractedDensity(avrExtractedDensity),
   _fileNumber(fileNumber),
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
   _loadBalancingFlag(loadBalancingFlag) {
      
   }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLoadBalancingFlag() const {
      return _loadBalancingFlag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _loadBalancingFlag = loadBalancingFlag;
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._loadBalancingFlag) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, loadBalancingFlag) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::~SpacetreeGridBlockState() { }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLoadBalancingFlag() const {
      return _persistentRecords._loadBalancingFlag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _persistentRecords._loadBalancingFlag = loadBalancingFlag;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::toString (std::ostream& out) const {
      out << "("; 
      out << "only_nse:" << getOnlyNse();
      out << ",";
      out << "xlength:" << getXlength();
      out << ",";
      out << "ylength:" << getYlength();
      out << ",";
      out << "delx:" << getDelx();
      out << ",";
      out << "dely:" << getDely();
      out << ",";
      out << "t:" << getT();
      out << ",";
      out << "t_end:" << getTEnd();
      out << ",";
      out << "thresdelt:" << getThresdelt();
      out << ",";
      out << "delt:" << getDelt();
      out << ",";
      out << "ftau:" << getFtau();
      out << ",";
      out << "vis_delt:" << getVisDelt();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "fgamma:" << getFgamma();
      out << ",";
      out << "Re:" << getRe();
      out << ",";
      out << "GX:" << getGX();
      out << ",";
      out << "GY:" << getGY();
      out << ",";
      out << "UI:" << getUI();
      out << ",";
      out << "VI:" << getVI();
      out << ",";
      out << "PI:" << getPI();
      out << ",";
      out << "avrExtractedDensity:" << getAvrExtractedDensity();
      out << ",";
      out << "fileNumber:" << getFileNumber();
      out << ",";
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
      out << "loadBalancingFlag:" << getLoadBalancingFlag();
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked peano::applications::faxen::lbf::records::SpacetreeGridBlockState::convert() const{
      return SpacetreeGridBlockStatePacked(
         getOnlyNse(),
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getThresdelt(),
         getDelt(),
         getFtau(),
         getVisDelt(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getFgamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getAvrExtractedDensity(),
         getFileNumber(),
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
         getLoadBalancingFlag()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockState::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockState" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockState::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::initDatatype() {
         const int Attributes = 40;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            MPI_INT,		 //loadBalancingFlag
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fileNumber
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
            1,		 //loadBalancingFlag
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridBlockState dummySpacetreeGridBlockState[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._globalNumberOfCells))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._globalCpuTime))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasRefined))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasErased))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[35] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[36] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._isTraversalInverted))), 		&disp[37] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._loadBalancingFlag))), 		&disp[38] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[1]._persistentRecords._fileNumber))), 		&disp[39] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockState::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockState::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockState "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockState "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockState failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _onlyNse(onlyNse),
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _thresdelt(thresdelt),
   _delt(delt),
   _ftau(ftau),
   _visDelt(visDelt),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _fgamma(fgamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _avrExtractedDensity(avrExtractedDensity),
   _fileNumber(fileNumber),
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
   _loadBalancingFlag(loadBalancingFlag) {
      setHasRefined(hasRefined);
      setHasTriggeredRefinementForNextIteration(hasTriggeredRefinementForNextIteration);
      setHasErased(hasErased);
      setHasTriggeredEraseForNextIteration(hasTriggeredEraseForNextIteration);
      setHasChangedVertexOrCellState(hasChangedVertexOrCellState);
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLoadBalancingFlag() const {
      return _loadBalancingFlag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _loadBalancingFlag = loadBalancingFlag;
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._loadBalancingFlag) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, loadBalancingFlag) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::~SpacetreeGridBlockStatePacked() { }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLoadBalancingFlag() const {
      return _persistentRecords._loadBalancingFlag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _persistentRecords._loadBalancingFlag = loadBalancingFlag;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "only_nse:" << getOnlyNse();
      out << ",";
      out << "xlength:" << getXlength();
      out << ",";
      out << "ylength:" << getYlength();
      out << ",";
      out << "delx:" << getDelx();
      out << ",";
      out << "dely:" << getDely();
      out << ",";
      out << "t:" << getT();
      out << ",";
      out << "t_end:" << getTEnd();
      out << ",";
      out << "thresdelt:" << getThresdelt();
      out << ",";
      out << "delt:" << getDelt();
      out << ",";
      out << "ftau:" << getFtau();
      out << ",";
      out << "vis_delt:" << getVisDelt();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "fgamma:" << getFgamma();
      out << ",";
      out << "Re:" << getRe();
      out << ",";
      out << "GX:" << getGX();
      out << ",";
      out << "GY:" << getGY();
      out << ",";
      out << "UI:" << getUI();
      out << ",";
      out << "VI:" << getVI();
      out << ",";
      out << "PI:" << getPI();
      out << ",";
      out << "avrExtractedDensity:" << getAvrExtractedDensity();
      out << ",";
      out << "fileNumber:" << getFileNumber();
      out << ",";
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
      out << "loadBalancingFlag:" << getLoadBalancingFlag();
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::convert() const{
      return SpacetreeGridBlockState(
         getOnlyNse(),
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getThresdelt(),
         getDelt(),
         getFtau(),
         getVisDelt(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getFgamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getAvrExtractedDensity(),
         getFileNumber(),
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
         getLoadBalancingFlag()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::initDatatype() {
         const int Attributes = 36;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            MPI_INT,		 //loadBalancingFlag
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fileNumber
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
            1,		 //loadBalancingFlag
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridBlockStatePacked dummySpacetreeGridBlockStatePacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._globalNumberOfCells))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._globalCpuTime))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._loadBalancingFlag))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[1]._persistentRecords._fileNumber))), 		&disp[35] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _onlyNse(onlyNse),
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _thresdelt(thresdelt),
   _delt(delt),
   _ftau(ftau),
   _visDelt(visDelt),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _fgamma(fgamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _avrExtractedDensity(avrExtractedDensity),
   _fileNumber(fileNumber),
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
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState() {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::SpacetreeGridBlockState(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::~SpacetreeGridBlockState() { }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::toString (std::ostream& out) const {
      out << "("; 
      out << "only_nse:" << getOnlyNse();
      out << ",";
      out << "xlength:" << getXlength();
      out << ",";
      out << "ylength:" << getYlength();
      out << ",";
      out << "delx:" << getDelx();
      out << ",";
      out << "dely:" << getDely();
      out << ",";
      out << "t:" << getT();
      out << ",";
      out << "t_end:" << getTEnd();
      out << ",";
      out << "thresdelt:" << getThresdelt();
      out << ",";
      out << "delt:" << getDelt();
      out << ",";
      out << "ftau:" << getFtau();
      out << ",";
      out << "vis_delt:" << getVisDelt();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "fgamma:" << getFgamma();
      out << ",";
      out << "Re:" << getRe();
      out << ",";
      out << "GX:" << getGX();
      out << ",";
      out << "GY:" << getGY();
      out << ",";
      out << "UI:" << getUI();
      out << ",";
      out << "VI:" << getVI();
      out << ",";
      out << "PI:" << getPI();
      out << ",";
      out << "avrExtractedDensity:" << getAvrExtractedDensity();
      out << ",";
      out << "fileNumber:" << getFileNumber();
      out << ",";
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked peano::applications::faxen::lbf::records::SpacetreeGridBlockState::convert() const{
      return SpacetreeGridBlockStatePacked(
         getOnlyNse(),
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getThresdelt(),
         getDelt(),
         getFtau(),
         getVisDelt(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getFgamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getAvrExtractedDensity(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockState::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockState" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockState::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::initDatatype() {
         const int Attributes = 37;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            1,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._minMeshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._maxLevel))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasRefined))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasErased))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[0]._persistentRecords._isTraversalInverted))), 		&disp[35] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockState[1]._persistentRecords._fileNumber))), 		&disp[36] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockState::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockState::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockState "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockState "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockState failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockState",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _onlyNse(onlyNse),
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _thresdelt(thresdelt),
   _delt(delt),
   _ftau(ftau),
   _visDelt(visDelt),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _fgamma(fgamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _avrExtractedDensity(avrExtractedDensity),
   _fileNumber(fileNumber),
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
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::SpacetreeGridBlockStatePacked(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::~SpacetreeGridBlockStatePacked() { }
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::toString (std::ostream& out) const {
      out << "("; 
      out << "only_nse:" << getOnlyNse();
      out << ",";
      out << "xlength:" << getXlength();
      out << ",";
      out << "ylength:" << getYlength();
      out << ",";
      out << "delx:" << getDelx();
      out << ",";
      out << "dely:" << getDely();
      out << ",";
      out << "t:" << getT();
      out << ",";
      out << "t_end:" << getTEnd();
      out << ",";
      out << "thresdelt:" << getThresdelt();
      out << ",";
      out << "delt:" << getDelt();
      out << ",";
      out << "ftau:" << getFtau();
      out << ",";
      out << "vis_delt:" << getVisDelt();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "fgamma:" << getFgamma();
      out << ",";
      out << "Re:" << getRe();
      out << ",";
      out << "GX:" << getGX();
      out << ",";
      out << "GY:" << getGY();
      out << ",";
      out << "UI:" << getUI();
      out << ",";
      out << "VI:" << getVI();
      out << ",";
      out << "PI:" << getPI();
      out << ",";
      out << "avrExtractedDensity:" << getAvrExtractedDensity();
      out << ",";
      out << "fileNumber:" << getFileNumber();
      out << ",";
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
   
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::PersistentRecords peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::SpacetreeGridBlockState peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::convert() const{
      return SpacetreeGridBlockState(
         getOnlyNse(),
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getThresdelt(),
         getDelt(),
         getFtau(),
         getVisDelt(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getFgamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getAvrExtractedDensity(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::_log( "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::initDatatype() {
         const int Attributes = 33;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            1,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._maxLevel))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._isTraversalInverted))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridBlockStatePacked[1]._persistentRecords._fileNumber))), 		&disp[32] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridBlockStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked failed: "
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
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::SpacetreeGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


