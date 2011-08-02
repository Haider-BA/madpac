#include "peano/applications/faxen/lbf/records/RegularGridBlockState.h"

#if defined(Parallel)
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _gridIsStationary(gridIsStationary) {
      
   }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGridIsStationary() const {
      return _gridIsStationary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      _gridIsStationary = gridIsStationary;
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::~RegularGridBlockState() { }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::RegularGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::getGridIsStationary() const {
      return _persistentRecords._gridIsStationary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGridIsStationary(const bool& gridIsStationary) {
      _persistentRecords._gridIsStationary = gridIsStationary;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::toString (std::ostream& out) const {
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
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked peano::applications::faxen::lbf::records::RegularGridBlockState::convert() const{
      return RegularGridBlockStatePacked(
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockState::_log( "peano::applications::faxen::lbf::records::RegularGridBlockState" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockState::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::initDatatype() {
         const int Attributes = 32;
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._globalNumberOfCells))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._globalCpuTime))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._meshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gridIsStationary))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[1]._persistentRecords._fileNumber))), 		&disp[31] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockState::Datatype );
         MPI_Type_commit( &RegularGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockState::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockState "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockState "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockState failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells) {
      setGridIsStationary(gridIsStationary);
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGlobalNumberOfCells() const {
      return _globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGlobalCpuTime() const {
      return _globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGlobalCpuTime(const double& globalCpuTime) {
      _globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._globalNumberOfCells, persistentRecords._globalCpuTime, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& globalNumberOfCells, const double& globalCpuTime, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, globalNumberOfCells, globalCpuTime, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::~RegularGridBlockStatePacked() { }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGlobalNumberOfCells() const {
      return _persistentRecords._globalNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGlobalNumberOfCells(const int& globalNumberOfCells) {
      _persistentRecords._globalNumberOfCells = globalNumberOfCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGlobalCpuTime() const {
      return _persistentRecords._globalCpuTime;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGlobalCpuTime(const double& globalCpuTime) {
      _persistentRecords._globalCpuTime = globalCpuTime;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockState peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::convert() const{
      return RegularGridBlockState(
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::initDatatype() {
         const int Attributes = 32;
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._globalNumberOfCells))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._globalCpuTime))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[1]._persistentRecords._fileNumber))), 		&disp[31] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockStatePacked::Datatype );
         MPI_Type_commit( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockStatePacked "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockStatePacked failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells),
   _gridIsStationary(gridIsStationary) {
      
   }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::getGridIsStationary() const {
      return _gridIsStationary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      _gridIsStationary = gridIsStationary;
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::RegularGridBlockState(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::~RegularGridBlockState() { }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockState::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockState::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::RegularGridBlockState::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockState::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockState::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockState::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockState::getGridIsStationary() const {
      return _persistentRecords._gridIsStationary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::setGridIsStationary(const bool& gridIsStationary) {
      _persistentRecords._gridIsStationary = gridIsStationary;
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockState::toString (std::ostream& out) const {
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
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockState::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked peano::applications::faxen::lbf::records::RegularGridBlockState::convert() const{
      return RegularGridBlockStatePacked(
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockState::_log( "peano::applications::faxen::lbf::records::RegularGridBlockState" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockState::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::initDatatype() {
         const int Attributes = 30;
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._meshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfInnerCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._numberOfOuterCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[0]._persistentRecords._gridIsStationary))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockState[1]._persistentRecords._fileNumber))), 		&disp[29] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockState::Datatype );
         MPI_Type_commit( &RegularGridBlockState::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockState::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockState "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockState "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockState failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockState",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::PersistentRecords(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
   _meshWidth(meshWidth),
   _numberOfInnerVertices(numberOfInnerVertices),
   _numberOfBoundaryVertices(numberOfBoundaryVertices),
   _numberOfOuterVertices(numberOfOuterVertices),
   _numberOfInnerCells(numberOfInnerCells),
   _numberOfOuterCells(numberOfOuterCells) {
      setGridIsStationary(gridIsStationary);
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getOnlyNse() const {
      return _onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setOnlyNse(const bool& onlyNse) {
      _onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getThresdelt() const {
      return _thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setThresdelt(const double& thresdelt) {
      _thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFtau() const {
      return _ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFtau(const double& ftau) {
      _ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVisDelt() const {
      return _visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVisDelt(const double& visDelt) {
      _visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFgamma() const {
      return _fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFgamma(const double& fgamma) {
      _fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getAvrExtractedDensity() const {
      return _avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberLevels() const {
      return _numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberLevels(const int& numberLevels) {
      _numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDx() const {
      return _dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDx(const double& dx) {
      _dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDt() const {
      return _dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDt(const double& dt) {
      _dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimesteps() const {
      return _numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimesteps(const int& numberTimesteps) {
      _numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDensity() const {
      return _density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDensity(const double& density) {
      _density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getDynamicGeometry() const {
      return _dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setDynamicGeometry(const short int& dynamicGeometry) {
      _dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getComputeForces() const {
      return _computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setComputeForces(const short int& computeForces) {
      _computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCollisionModelId() const {
      return _collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _collisionModelId = (collisionModelId);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getViscosityL() const {
      return _viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setViscosityL(const double& viscosityL) {
      _viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getBulkViscosityL() const {
      return _bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setBulkViscosityL(const double& bulkViscosityL) {
      _bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getBoltzmannConstant() const {
      return _boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setBoltzmannConstant(const double& boltzmannConstant) {
      _boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMu() const {
      return _mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMu(const double& mu) {
      _mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _gamma = (gamma);
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMrtHumieresGamma() const {
      return _mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getTimestep() const {
      return _timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setTimestep(const int& timestep) {
      _timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getPlotVtk() const {
      return _plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setPlotVtk(const short int& plotVtk) {
      _plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberTimestepsPerPlotting() const {
      return _numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getVtkFilename() const {
      return _vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _vtkFilename = (vtkFilename);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMeasurePerformance() const {
      return _measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMeasurePerformance(const short int& measurePerformance) {
      _measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLocalNumberOfCells() const {
      return _localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLocalNumberOfCells(const int& localNumberOfCells) {
      _localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getLastLevel() const {
      return _lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setLastLevel(const int& lastLevel) {
      _lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCurrentLevel() const {
      return _currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCurrentLevel(const int& currentLevel) {
      _currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNextLevel() const {
      return _nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNextLevel(const int& nextLevel) {
      _nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGeometryChanged() const {
      return _geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGeometryChanged(const short int& geometryChanged) {
      _geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getCellCounter() const {
      return _cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setCellCounter(const int& cellCounter) {
      _cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getMeshWidth() const {
      return _meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked() {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._onlyNse, persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._thresdelt, persistentRecords._delt, persistentRecords._ftau, persistentRecords._visDelt, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._fgamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._avrExtractedDensity, persistentRecords._fileNumber, persistentRecords._level, persistentRecords._numberLevels, persistentRecords._dx, persistentRecords._dt, persistentRecords._numberTimesteps, persistentRecords._density, persistentRecords._dynamicGeometry, persistentRecords._computeForces, persistentRecords._collisionModelId, persistentRecords._viscosityL, persistentRecords._bulkViscosityL, persistentRecords._tau, persistentRecords._boltzmannConstant, persistentRecords._mu, persistentRecords._gamma, persistentRecords._mrtHumieresGamma, persistentRecords._timestep, persistentRecords._plotVtk, persistentRecords._numberTimestepsPerPlotting, persistentRecords._vtkFilename, persistentRecords._measurePerformance, persistentRecords._localNumberOfCells, persistentRecords._lastLevel, persistentRecords._currentLevel, persistentRecords._nextLevel, persistentRecords._geometryChanged, persistentRecords._cellCounter, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::RegularGridBlockStatePacked(const bool& onlyNse, const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& thresdelt, const double& delt, const double& ftau, const double& visDelt, const int& itermax, const double& res, const double& eps, const double& omega, const double& fgamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const double& avrExtractedDensity, const int& fileNumber, const int& level, const int& numberLevels, const double& dx, const double& dt, const int& numberTimesteps, const double& density, const short int& dynamicGeometry, const short int& computeForces, const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId, const double& viscosityL, const double& bulkViscosityL, const double& tau, const double& boltzmannConstant, const double& mu, const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma, const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma, const int& timestep, const short int& plotVtk, const int& numberTimestepsPerPlotting, const tarch::la::Vector<128,signed char>& vtkFilename, const short int& measurePerformance, const int& localNumberOfCells, const int& lastLevel, const int& currentLevel, const int& nextLevel, const short int& geometryChanged, const int& cellCounter, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
   _persistentRecords(onlyNse, xlength, ylength, delx, dely, t, tEnd, thresdelt, delt, ftau, visDelt, itermax, res, eps, omega, fgamma, Re, GX, GY, UI, VI, PI, avrExtractedDensity, fileNumber, level, numberLevels, dx, dt, numberTimesteps, density, dynamicGeometry, computeForces, collisionModelId, viscosityL, bulkViscosityL, tau, boltzmannConstant, mu, gamma, mrtHumieresGamma, timestep, plotVtk, numberTimestepsPerPlotting, vtkFilename, measurePerformance, localNumberOfCells, lastLevel, currentLevel, nextLevel, geometryChanged, cellCounter, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
      assertion((1 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::~RegularGridBlockStatePacked() { }
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getOnlyNse() const {
      return _persistentRecords._onlyNse;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setOnlyNse(const bool& onlyNse) {
      _persistentRecords._onlyNse = onlyNse;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getThresdelt() const {
      return _persistentRecords._thresdelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setThresdelt(const double& thresdelt) {
      _persistentRecords._thresdelt = thresdelt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFtau() const {
      return _persistentRecords._ftau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFtau(const double& ftau) {
      _persistentRecords._ftau = ftau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVisDelt() const {
      return _persistentRecords._visDelt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVisDelt(const double& visDelt) {
      _persistentRecords._visDelt = visDelt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFgamma() const {
      return _persistentRecords._fgamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFgamma(const double& fgamma) {
      _persistentRecords._fgamma = fgamma;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getAvrExtractedDensity() const {
      return _persistentRecords._avrExtractedDensity;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setAvrExtractedDensity(const double& avrExtractedDensity) {
      _persistentRecords._avrExtractedDensity = avrExtractedDensity;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberLevels() const {
      return _persistentRecords._numberLevels;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberLevels(const int& numberLevels) {
      _persistentRecords._numberLevels = numberLevels;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDx() const {
      return _persistentRecords._dx;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDx(const double& dx) {
      _persistentRecords._dx = dx;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDt() const {
      return _persistentRecords._dt;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDt(const double& dt) {
      _persistentRecords._dt = dt;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberTimesteps() const {
      return _persistentRecords._numberTimesteps;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberTimesteps(const int& numberTimesteps) {
      _persistentRecords._numberTimesteps = numberTimesteps;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDensity() const {
      return _persistentRecords._density;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDensity(const double& density) {
      _persistentRecords._density = density;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getDynamicGeometry() const {
      return _persistentRecords._dynamicGeometry;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setDynamicGeometry(const short int& dynamicGeometry) {
      _persistentRecords._dynamicGeometry = dynamicGeometry;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getComputeForces() const {
      return _persistentRecords._computeForces;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setComputeForces(const short int& computeForces) {
      _persistentRecords._computeForces = computeForces;
   }
   
   
   
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCollisionModelId() const {
      return _persistentRecords._collisionModelId;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCollisionModelId(const tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>& collisionModelId) {
      _persistentRecords._collisionModelId = (collisionModelId);
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCollisionModelId(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      return _persistentRecords._collisionModelId[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCollisionModelId(int elementIndex, const short int& collisionModelId) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS);
      _persistentRecords._collisionModelId[elementIndex]= collisionModelId;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getViscosityL() const {
      return _persistentRecords._viscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setViscosityL(const double& viscosityL) {
      _persistentRecords._viscosityL = viscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getBulkViscosityL() const {
      return _persistentRecords._bulkViscosityL;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setBulkViscosityL(const double& bulkViscosityL) {
      _persistentRecords._bulkViscosityL = bulkViscosityL;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getBoltzmannConstant() const {
      return _persistentRecords._boltzmannConstant;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setBoltzmannConstant(const double& boltzmannConstant) {
      _persistentRecords._boltzmannConstant = boltzmannConstant;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMu() const {
      return _persistentRecords._mu;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMu(const double& mu) {
      _persistentRecords._mu = mu;
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& gamma) {
      _persistentRecords._gamma = (gamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._gamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGamma(int elementIndex, const double& gamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._gamma[elementIndex]= gamma;
      
   }
   
   
   
   tarch::la::Vector<LB_CURRENT_DIR,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMrtHumieresGamma() const {
      return _persistentRecords._mrtHumieresGamma;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMrtHumieresGamma(const tarch::la::Vector<LB_CURRENT_DIR,double>& mrtHumieresGamma) {
      _persistentRecords._mrtHumieresGamma = (mrtHumieresGamma);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMrtHumieresGamma(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      return _persistentRecords._mrtHumieresGamma[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMrtHumieresGamma(int elementIndex, const double& mrtHumieresGamma) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_CURRENT_DIR);
      _persistentRecords._mrtHumieresGamma[elementIndex]= mrtHumieresGamma;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getTimestep() const {
      return _persistentRecords._timestep;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setTimestep(const int& timestep) {
      _persistentRecords._timestep = timestep;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPlotVtk() const {
      return _persistentRecords._plotVtk;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setPlotVtk(const short int& plotVtk) {
      _persistentRecords._plotVtk = plotVtk;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberTimestepsPerPlotting() const {
      return _persistentRecords._numberTimestepsPerPlotting;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberTimestepsPerPlotting(const int& numberTimestepsPerPlotting) {
      _persistentRecords._numberTimestepsPerPlotting = numberTimestepsPerPlotting;
   }
   
   
   
   tarch::la::Vector<128,signed char> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVtkFilename() const {
      return _persistentRecords._vtkFilename;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVtkFilename(const tarch::la::Vector<128,signed char>& vtkFilename) {
      _persistentRecords._vtkFilename = (vtkFilename);
   }
   
   
   
   signed char peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getVtkFilename(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      return _persistentRecords._vtkFilename[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setVtkFilename(int elementIndex, const signed char& vtkFilename) {
      assertion(elementIndex>=0);
      assertion(elementIndex<128);
      _persistentRecords._vtkFilename[elementIndex]= vtkFilename;
      
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeasurePerformance() const {
      return _persistentRecords._measurePerformance;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeasurePerformance(const short int& measurePerformance) {
      _persistentRecords._measurePerformance = measurePerformance;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLocalNumberOfCells() const {
      return _persistentRecords._localNumberOfCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLocalNumberOfCells(const int& localNumberOfCells) {
      _persistentRecords._localNumberOfCells = localNumberOfCells;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getLastLevel() const {
      return _persistentRecords._lastLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setLastLevel(const int& lastLevel) {
      _persistentRecords._lastLevel = lastLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCurrentLevel() const {
      return _persistentRecords._currentLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCurrentLevel(const int& currentLevel) {
      _persistentRecords._currentLevel = currentLevel;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNextLevel() const {
      return _persistentRecords._nextLevel;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNextLevel(const int& nextLevel) {
      _persistentRecords._nextLevel = nextLevel;
   }
   
   
   
   short int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGeometryChanged() const {
      return _persistentRecords._geometryChanged;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGeometryChanged(const short int& geometryChanged) {
      _persistentRecords._geometryChanged = geometryChanged;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getCellCounter() const {
      return _persistentRecords._cellCounter;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setCellCounter(const int& cellCounter) {
      _persistentRecords._cellCounter = cellCounter;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeshWidth() const {
      return _persistentRecords._meshWidth;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
      _persistentRecords._meshWidth = (meshWidth);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._meshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._meshWidth[elementIndex]= meshWidth;
      
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getGridIsStationary() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::setGridIsStationary(const bool& gridIsStationary) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::toString (std::ostream& out) const {
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
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockState peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::convert() const{
      return RegularGridBlockState(
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
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::initDatatype() {
         const int Attributes = 30;
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberLevels))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dx))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dt))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimesteps))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._density))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._dynamicGeometry))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._computeForces))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._collisionModelId[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._viscosityL))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._bulkViscosityL))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._tau))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._boltzmannConstant))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mu))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._gamma[0]))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._mrtHumieresGamma[0]))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._timestep))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._plotVtk))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberTimestepsPerPlotting))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._measurePerformance))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._localNumberOfCells))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockStatePacked[1]._persistentRecords._fileNumber))), 		&disp[29] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockStatePacked::Datatype );
         MPI_Type_commit( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockStatePacked "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockStatePacked failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockStatePacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


