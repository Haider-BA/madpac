#include "peano/applications/faxen/records/SpacetreeGridState.h"

#if defined(Parallel)
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _delt(delt),
   _tau(tau),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _gamma(gamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _fileNumber(fileNumber),
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
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGamma(const double& gamma) {
      _gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGamma(const double& gamma) {
      _persistentRecords._gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
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
      out << "delt:" << getDelt();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "gamma:" << getGamma();
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
      out << "fileNumber:" << getFileNumber();
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
   
   
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords peano::applications::faxen::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridStatePacked peano::applications::faxen::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getDelt(),
         getTau(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getGamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridState::_log( "peano::applications::faxen::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 17;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            1,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._fileNumber))), 		&disp[0] );
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._fileNumber))), 		&disp[16] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridState "
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
               "peano::applications::faxen::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridState failed: "
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
               "peano::applications::faxen::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _delt(delt),
   _tau(tau),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _gamma(gamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _fileNumber(fileNumber),
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
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGamma(const double& gamma) {
      _gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDeriveAdjacencyInformation() const {
      return _deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const bool& deriveAdjacencyInformation):
   _persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, deriveAdjacencyInformation) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGamma(const double& gamma) {
      _persistentRecords._gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getDeriveAdjacencyInformation() const {
      return _persistentRecords._deriveAdjacencyInformation;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDeriveAdjacencyInformation(const bool& deriveAdjacencyInformation) {
      _persistentRecords._deriveAdjacencyInformation = deriveAdjacencyInformation;
   }
   
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
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
      out << "delt:" << getDelt();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "gamma:" << getGamma();
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
      out << "fileNumber:" << getFileNumber();
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
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridState peano::applications::faxen::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getDelt(),
         getTau(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getGamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridStatePacked::_log( "peano::applications::faxen::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 13;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
            1,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._fileNumber))), 		&disp[12] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridStatePacked "
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
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _delt(delt),
   _tau(tau),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _gamma(gamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _fileNumber(fileNumber),
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
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGamma(const double& gamma) {
      _gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState() {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::SpacetreeGridState(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridState::~SpacetreeGridState() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGamma(const double& gamma) {
      _persistentRecords._gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridState::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridState::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridState::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridState::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridState::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridState::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridState::toString (std::ostream& out) const {
      out << "("; 
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
      out << "delt:" << getDelt();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "gamma:" << getGamma();
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
      out << "fileNumber:" << getFileNumber();
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
   
   
   peano::applications::faxen::records::SpacetreeGridState::PersistentRecords peano::applications::faxen::records::SpacetreeGridState::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridStatePacked peano::applications::faxen::records::SpacetreeGridState::convert() const{
      return SpacetreeGridStatePacked(
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getDelt(),
         getTau(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getGamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridState::_log( "peano::applications::faxen::records::SpacetreeGridState" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridState::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridState::initDatatype() {
         const int Attributes = 16;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[0]._persistentRecords._fileNumber))), 		&disp[0] );
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridState[1]._persistentRecords._fileNumber))), 		&disp[15] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridState::Datatype );
         MPI_Type_commit( &SpacetreeGridState::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridState::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridState::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridState::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridState "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridState "
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
               "peano::applications::faxen::records::SpacetreeGridState",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridState",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridState::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridState from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridState failed: "
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
               "peano::applications::faxen::records::SpacetreeGridState",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridState",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridState::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridState::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _xlength(xlength),
   _ylength(ylength),
   _delx(delx),
   _dely(dely),
   _t(t),
   _tEnd(tEnd),
   _delt(delt),
   _tau(tau),
   _itermax(itermax),
   _res(res),
   _eps(eps),
   _omega(omega),
   _gamma(gamma),
   _Re(Re),
   _GX(GX),
   _GY(GY),
   _UI(UI),
   _VI(VI),
   _PI(PI),
   _fileNumber(fileNumber),
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
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getXlength() const {
      return _xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setXlength(const double& xlength) {
      _xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getYlength() const {
      return _ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setYlength(const double& ylength) {
      _ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDelx() const {
      return _delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDelx(const double& delx) {
      _delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDely() const {
      return _dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDely(const double& dely) {
      _dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getT() const {
      return _t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setT(const double& t) {
      _t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getTEnd() const {
      return _tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
      _tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getDelt() const {
      return _delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setDelt(const double& delt) {
      _delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getTau() const {
      return _tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setTau(const double& tau) {
      _tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getItermax() const {
      return _itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setItermax(const int& itermax) {
      _itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getRes() const {
      return _res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setRes(const double& res) {
      _res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getEps() const {
      return _eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setEps(const double& eps) {
      _eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getOmega() const {
      return _omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setOmega(const double& omega) {
      _omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGamma() const {
      return _gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGamma(const double& gamma) {
      _gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getRe() const {
      return _Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setRe(const double& Re) {
      _Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGX() const {
      return _GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGX(const double& GX) {
      _GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getGY() const {
      return _GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setGY(const double& GY) {
      _GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getUI() const {
      return _UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setUI(const double& UI) {
      _UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getVI() const {
      return _VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setVI(const double& VI) {
      _VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getPI() const {
      return _PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setPI(const double& PI) {
      _PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getFileNumber() const {
      return _fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
      _fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::SpacetreeGridStatePacked(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::~SpacetreeGridStatePacked() { }
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getXlength() const {
      return _persistentRecords._xlength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setXlength(const double& xlength) {
      _persistentRecords._xlength = xlength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getYlength() const {
      return _persistentRecords._ylength;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setYlength(const double& ylength) {
      _persistentRecords._ylength = ylength;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDelx() const {
      return _persistentRecords._delx;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDelx(const double& delx) {
      _persistentRecords._delx = delx;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDely() const {
      return _persistentRecords._dely;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDely(const double& dely) {
      _persistentRecords._dely = dely;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getT() const {
      return _persistentRecords._t;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setT(const double& t) {
      _persistentRecords._t = t;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getTEnd() const {
      return _persistentRecords._tEnd;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setTEnd(const double& tEnd) {
      _persistentRecords._tEnd = tEnd;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getDelt() const {
      return _persistentRecords._delt;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setDelt(const double& delt) {
      _persistentRecords._delt = delt;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getTau() const {
      return _persistentRecords._tau;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setTau(const double& tau) {
      _persistentRecords._tau = tau;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getItermax() const {
      return _persistentRecords._itermax;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setItermax(const int& itermax) {
      _persistentRecords._itermax = itermax;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getRes() const {
      return _persistentRecords._res;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setRes(const double& res) {
      _persistentRecords._res = res;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getEps() const {
      return _persistentRecords._eps;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setEps(const double& eps) {
      _persistentRecords._eps = eps;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getOmega() const {
      return _persistentRecords._omega;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setOmega(const double& omega) {
      _persistentRecords._omega = omega;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGamma() const {
      return _persistentRecords._gamma;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGamma(const double& gamma) {
      _persistentRecords._gamma = gamma;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getRe() const {
      return _persistentRecords._Re;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setRe(const double& Re) {
      _persistentRecords._Re = Re;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGX() const {
      return _persistentRecords._GX;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGX(const double& GX) {
      _persistentRecords._GX = GX;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getGY() const {
      return _persistentRecords._GY;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setGY(const double& GY) {
      _persistentRecords._GY = GY;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getUI() const {
      return _persistentRecords._UI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setUI(const double& UI) {
      _persistentRecords._UI = UI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getVI() const {
      return _persistentRecords._VI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setVI(const double& VI) {
      _persistentRecords._VI = VI;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getPI() const {
      return _persistentRecords._PI;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setPI(const double& PI) {
      _persistentRecords._PI = PI;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getFileNumber() const {
      return _persistentRecords._fileNumber;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setFileNumber(const int& fileNumber) {
      _persistentRecords._fileNumber = fileNumber;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::faxen::records::SpacetreeGridStatePacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::faxen::records::SpacetreeGridStatePacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::faxen::records::SpacetreeGridStatePacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   
   std::string peano::applications::faxen::records::SpacetreeGridStatePacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::records::SpacetreeGridStatePacked::toString (std::ostream& out) const {
      out << "("; 
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
      out << "delt:" << getDelt();
      out << ",";
      out << "tau:" << getTau();
      out << ",";
      out << "itermax:" << getItermax();
      out << ",";
      out << "res:" << getRes();
      out << ",";
      out << "eps:" << getEps();
      out << ",";
      out << "omega:" << getOmega();
      out << ",";
      out << "gamma:" << getGamma();
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
      out << "fileNumber:" << getFileNumber();
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
   
   
   peano::applications::faxen::records::SpacetreeGridStatePacked::PersistentRecords peano::applications::faxen::records::SpacetreeGridStatePacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::records::SpacetreeGridState peano::applications::faxen::records::SpacetreeGridStatePacked::convert() const{
      return SpacetreeGridState(
         getXlength(),
         getYlength(),
         getDelx(),
         getDely(),
         getT(),
         getTEnd(),
         getDelt(),
         getTau(),
         getItermax(),
         getRes(),
         getEps(),
         getOmega(),
         getGamma(),
         getRe(),
         getGX(),
         getGY(),
         getUI(),
         getVI(),
         getPI(),
         getFileNumber(),
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
      
      tarch::logging::Log peano::applications::faxen::records::SpacetreeGridStatePacked::_log( "peano::applications::faxen::records::SpacetreeGridStatePacked" );
      
      MPI_Datatype peano::applications::faxen::records::SpacetreeGridStatePacked::Datatype = 0;
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fileNumber
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridStatePacked[1]._persistentRecords._fileNumber))), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridStatePacked::Datatype );
         MPI_Type_commit( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridStatePacked::Datatype );
         
      }
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::records::SpacetreeGridStatePacked "
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
               msg << "testing for finished send task for peano::applications::faxen::records::SpacetreeGridStatePacked "
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
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
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
      
      
      
      void peano::applications::faxen::records::SpacetreeGridStatePacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::records::SpacetreeGridStatePacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::records::SpacetreeGridStatePacked failed: "
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
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::records::SpacetreeGridStatePacked",
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
      
      
      
      bool peano::applications::faxen::records::SpacetreeGridStatePacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::records::SpacetreeGridStatePacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


