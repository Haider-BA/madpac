#include "peano/applications/navierstokes/prototype1/records/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#if defined(Parallel)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _elementType(elementType),
   _LGSMaxIterations(LGSMaxIterations),
   _LGSResidual(LGSResidual),
   _odeTimestepnumber(odeTimestepnumber),
   _odeTime(odeTime),
   _odeTau(odeTau),
   _numberOfVertices(numberOfVertices),
   _offset(offset),
   _size(size),
   _plotterPlotDebugInfo(plotterPlotDebugInfo),
   _plotVTKFiles(plotVTKFiles),
   _scenarioRe(scenarioRe),
   _scenarioEta(scenarioEta),
   _scenarioRho(scenarioRho),
   _scenarioCharacteristicLength(scenarioCharacteristicLength),
   _pL2h(pL2h),
   _pMax(pMax),
   _pImprovementL2h(pImprovementL2h),
   _pImprovementMax(pImprovementMax),
   _uL2h(uL2h),
   _uMax(uMax),
   _uImprovementL2h(uImprovementL2h),
   _uImprovementMax(uImprovementMax),
   _uMaxPerDimension(uMaxPerDimension),
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getElementType() const {
      return _elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setElementType(const DebugElementType& elementType) {
      _elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSMaxIterations() const {
      return _LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
      _LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSResidual() const {
      return _LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSResidual(const double& LGSResidual) {
      _LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTimestepnumber() const {
      return _odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTime() const {
      return _odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTime(const double& odeTime) {
      _odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTau() const {
      return _odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTau(const double& odeTau) {
      _odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfVertices() const {
      return _numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _numberOfVertices = (numberOfVertices);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOffset() const {
      return _offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _offset = (offset);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getSize() const {
      return _size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _size = (size);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotterPlotDebugInfo() const {
      return _plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotVTKFiles() const {
      return _plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
      _plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRe() const {
      return _scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRe(const double& scenarioRe) {
      _scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioEta() const {
      return _scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioEta(const double& scenarioEta) {
      _scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRho() const {
      return _scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRho(const double& scenarioRho) {
      _scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioCharacteristicLength() const {
      return _scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPL2h() const {
      return _pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPL2h(const double& pL2h) {
      _pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPMax() const {
      return _pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPMax(const double& pMax) {
      _pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementL2h() const {
      return _pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
      _pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementMax() const {
      return _pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
      _pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUL2h() const {
      return _uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUL2h(const double& uL2h) {
      _uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementL2h() const {
      return _uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
      _uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementMax() const {
      return _uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
      _uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMaxPerDimension() const {
      return _uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLoadBalancingFlag() const {
      return _loadBalancingFlag;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _loadBalancingFlag = loadBalancingFlag;
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted, persistentRecords._loadBalancingFlag) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, loadBalancingFlag) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getElementType() const {
      return _persistentRecords._elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setElementType(const DebugElementType& elementType) {
      _persistentRecords._elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSMaxIterations() const {
      return _persistentRecords._LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSMaxIterations(const int& LGSMaxIterations) {
      _persistentRecords._LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSResidual() const {
      return _persistentRecords._LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSResidual(const double& LGSResidual) {
      _persistentRecords._LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTimestepnumber() const {
      return _persistentRecords._odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _persistentRecords._odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTime() const {
      return _persistentRecords._odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTime(const double& odeTime) {
      _persistentRecords._odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTau() const {
      return _persistentRecords._odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTau(const double& odeTau) {
      _persistentRecords._odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices() const {
      return _persistentRecords._numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _persistentRecords._numberOfVertices = (numberOfVertices);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._numberOfVertices[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOffset() const {
      return _persistentRecords._offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _persistentRecords._offset = (offset);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOffset(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._offset[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(int elementIndex, const double& offset) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._offset[elementIndex]= offset;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSize() const {
      return _persistentRecords._size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _persistentRecords._size = (size);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSize(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._size[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setSize(int elementIndex, const double& size) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._size[elementIndex]= size;
      
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPlotterPlotDebugInfo() const {
      return _persistentRecords._plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPlotVTKFiles() const {
      return _persistentRecords._plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPlotVTKFiles(const bool& plotVTKFiles) {
      _persistentRecords._plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRe() const {
      return _persistentRecords._scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRe(const double& scenarioRe) {
      _persistentRecords._scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioEta() const {
      return _persistentRecords._scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioEta(const double& scenarioEta) {
      _persistentRecords._scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRho() const {
      return _persistentRecords._scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRho(const double& scenarioRho) {
      _persistentRecords._scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioCharacteristicLength() const {
      return _persistentRecords._scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPL2h() const {
      return _persistentRecords._pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPL2h(const double& pL2h) {
      _persistentRecords._pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPMax() const {
      return _persistentRecords._pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPMax(const double& pMax) {
      _persistentRecords._pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementL2h() const {
      return _persistentRecords._pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementL2h(const double& pImprovementL2h) {
      _persistentRecords._pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementMax() const {
      return _persistentRecords._pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementMax(const double& pImprovementMax) {
      _persistentRecords._pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUL2h() const {
      return _persistentRecords._uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUL2h(const double& uL2h) {
      _persistentRecords._uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementL2h() const {
      return _persistentRecords._uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementL2h(const double& uImprovementL2h) {
      _persistentRecords._uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementMax() const {
      return _persistentRecords._uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementMax(const double& uImprovementMax) {
      _persistentRecords._uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension() const {
      return _persistentRecords._uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._uMaxPerDimension[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLoadBalancingFlag() const {
      return _persistentRecords._loadBalancingFlag;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _persistentRecords._loadBalancingFlag = loadBalancingFlag;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString(const DebugElementType& param) {
//      switch (param) {
//         case DLinear: return "DLinear";
//         case DivFree: return "DebugDivFree";
//         case EnhancedDivFree: return "EnhancedDivFree";
//      }
      return "schwubbeldibu (to be fixed, when DastGen supports external enums)";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping() {
      return "DebugElementType(DebugDLinear=0,DebugDivFree=1,DebugEnhancedDivFree=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "elementType:" << toString(getElementType());
      out << ",";
      out << "LGSMaxIterations:" << getLGSMaxIterations();
      out << ",";
      out << "LGSResidual:" << getLGSResidual();
      out << ",";
      out << "odeTimestepnumber:" << getOdeTimestepnumber();
      out << ",";
      out << "odeTime:" << getOdeTime();
      out << ",";
      out << "odeTau:" << getOdeTau();
      out << ",";
      out << "numberOfVertices:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfVertices(i) << ",";
   }
   out << getNumberOfVertices(DIMENSIONS-1) << "]";
      out << ",";
      out << "offset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getOffset(i) << ",";
   }
   out << getOffset(DIMENSIONS-1) << "]";
      out << ",";
      out << "size:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getSize(i) << ",";
   }
   out << getSize(DIMENSIONS-1) << "]";
      out << ",";
      out << "plotterPlotDebugInfo:" << getPlotterPlotDebugInfo();
      out << ",";
      out << "plotVTKFiles:" << getPlotVTKFiles();
      out << ",";
      out << "scenarioRe:" << getScenarioRe();
      out << ",";
      out << "scenarioEta:" << getScenarioEta();
      out << ",";
      out << "scenarioRho:" << getScenarioRho();
      out << ",";
      out << "scenarioCharacteristicLength:" << getScenarioCharacteristicLength();
      out << ",";
      out << "pL2h:" << getPL2h();
      out << ",";
      out << "pMax:" << getPMax();
      out << ",";
      out << "pImprovementL2h:" << getPImprovementL2h();
      out << ",";
      out << "pImprovementMax:" << getPImprovementMax();
      out << ",";
      out << "uL2h:" << getUL2h();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uImprovementL2h:" << getUImprovementL2h();
      out << ",";
      out << "uImprovementMax:" << getUImprovementMax();
      out << ",";
      out << "uMaxPerDimension:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getUMaxPerDimension(i) << ",";
   }
   out << getUMaxPerDimension(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(
         getElementType(),
         getLGSMaxIterations(),
         getLGSResidual(),
         getOdeTimestepnumber(),
         getOdeTime(),
         getOdeTau(),
         getNumberOfVertices(),
         getOffset(),
         getSize(),
         getPlotterPlotDebugInfo(),
         getPlotVTKFiles(),
         getScenarioRe(),
         getScenarioEta(),
         getScenarioRho(),
         getScenarioCharacteristicLength(),
         getPL2h(),
         getPMax(),
         getPImprovementL2h(),
         getPImprovementMax(),
         getUL2h(),
         getUMax(),
         getUImprovementL2h(),
         getUImprovementMax(),
         getUMaxPerDimension(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 40;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //elementType
            MPI_INT,		 //LGSMaxIterations
            MPI_DOUBLE,		 //LGSResidual
            MPI_INT,		 //odeTimestepnumber
            MPI_DOUBLE,		 //odeTime
            MPI_DOUBLE,		 //odeTau
            MPI_INT,		 //numberOfVertices
            MPI_DOUBLE,		 //offset
            MPI_DOUBLE,		 //size
            MPI_CHAR,		 //plotterPlotDebugInfo
            MPI_CHAR,		 //plotVTKFiles
            MPI_DOUBLE,		 //scenarioRe
            MPI_DOUBLE,		 //scenarioEta
            MPI_DOUBLE,		 //scenarioRho
            MPI_DOUBLE,		 //scenarioCharacteristicLength
            MPI_DOUBLE,		 //pL2h
            MPI_DOUBLE,		 //pMax
            MPI_DOUBLE,		 //pImprovementL2h
            MPI_DOUBLE,		 //pImprovementMax
            MPI_DOUBLE,		 //uL2h
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uImprovementL2h
            MPI_DOUBLE,		 //uImprovementMax
            MPI_DOUBLE,		 //uMaxPerDimension
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
            1,		 //elementType
            1,		 //LGSMaxIterations
            1,		 //LGSResidual
            1,		 //odeTimestepnumber
            1,		 //odeTime
            1,		 //odeTau
            DIMENSIONS,		 //numberOfVertices
            DIMENSIONS,		 //offset
            DIMENSIONS,		 //size
            1,		 //plotterPlotDebugInfo
            1,		 //plotVTKFiles
            1,		 //scenarioRe
            1,		 //scenarioEta
            1,		 //scenarioRho
            1,		 //scenarioCharacteristicLength
            1,		 //pL2h
            1,		 //pMax
            1,		 //pImprovementL2h
            1,		 //pImprovementMax
            1,		 //uL2h
            1,		 //uMax
            1,		 //uImprovementL2h
            1,		 //uImprovementMax
            DIMENSIONS,		 //uMaxPerDimension
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
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._elementType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSResidual))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTime))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTau))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._offset[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._size[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRe))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioEta))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRho))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pL2h))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pMax))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uL2h))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMax))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasRefined))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasErased))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[35] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[36] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._isTraversalInverted))), 		&disp[37] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._loadBalancingFlag))), 		&disp[38] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[1]._persistentRecords._elementType))), 		&disp[39] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _elementType(elementType),
   _LGSMaxIterations(LGSMaxIterations),
   _LGSResidual(LGSResidual),
   _odeTimestepnumber(odeTimestepnumber),
   _odeTime(odeTime),
   _odeTau(odeTau),
   _numberOfVertices(numberOfVertices),
   _offset(offset),
   _size(size),
   _plotterPlotDebugInfo(plotterPlotDebugInfo),
   _plotVTKFiles(plotVTKFiles),
   _scenarioRe(scenarioRe),
   _scenarioEta(scenarioEta),
   _scenarioRho(scenarioRho),
   _scenarioCharacteristicLength(scenarioCharacteristicLength),
   _pL2h(pL2h),
   _pMax(pMax),
   _pImprovementL2h(pImprovementL2h),
   _pImprovementMax(pImprovementMax),
   _uL2h(uL2h),
   _uMax(uMax),
   _uImprovementL2h(uImprovementL2h),
   _uImprovementMax(uImprovementMax),
   _uMaxPerDimension(uMaxPerDimension),
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getElementType() const {
      return _elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setElementType(const DebugElementType& elementType) {
      _elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSMaxIterations() const {
      return _LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
      _LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSResidual() const {
      return _LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSResidual(const double& LGSResidual) {
      _LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTimestepnumber() const {
      return _odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTime() const {
      return _odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTime(const double& odeTime) {
      _odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTau() const {
      return _odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTau(const double& odeTau) {
      _odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfVertices() const {
      return _numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _numberOfVertices = (numberOfVertices);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOffset() const {
      return _offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _offset = (offset);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getSize() const {
      return _size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _size = (size);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotterPlotDebugInfo() const {
      return _plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotVTKFiles() const {
      return _plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
      _plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRe() const {
      return _scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRe(const double& scenarioRe) {
      _scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioEta() const {
      return _scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioEta(const double& scenarioEta) {
      _scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRho() const {
      return _scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRho(const double& scenarioRho) {
      _scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioCharacteristicLength() const {
      return _scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPL2h() const {
      return _pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPL2h(const double& pL2h) {
      _pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPMax() const {
      return _pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPMax(const double& pMax) {
      _pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementL2h() const {
      return _pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
      _pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementMax() const {
      return _pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
      _pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUL2h() const {
      return _uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUL2h(const double& uL2h) {
      _uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementL2h() const {
      return _uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
      _uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementMax() const {
      return _uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
      _uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMaxPerDimension() const {
      return _uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLoadBalancingFlag() const {
      return _loadBalancingFlag;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _loadBalancingFlag = loadBalancingFlag;
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted, persistentRecords._loadBalancingFlag) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted, const int& loadBalancingFlag):
   _persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted, loadBalancingFlag) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getElementType() const {
      return _persistentRecords._elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setElementType(const DebugElementType& elementType) {
      _persistentRecords._elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSMaxIterations() const {
      return _persistentRecords._LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSMaxIterations(const int& LGSMaxIterations) {
      _persistentRecords._LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSResidual() const {
      return _persistentRecords._LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSResidual(const double& LGSResidual) {
      _persistentRecords._LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTimestepnumber() const {
      return _persistentRecords._odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _persistentRecords._odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTime() const {
      return _persistentRecords._odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTime(const double& odeTime) {
      _persistentRecords._odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTau() const {
      return _persistentRecords._odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTau(const double& odeTau) {
      _persistentRecords._odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices() const {
      return _persistentRecords._numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _persistentRecords._numberOfVertices = (numberOfVertices);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._numberOfVertices[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset() const {
      return _persistentRecords._offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _persistentRecords._offset = (offset);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._offset[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(int elementIndex, const double& offset) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._offset[elementIndex]= offset;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize() const {
      return _persistentRecords._size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _persistentRecords._size = (size);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._size[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(int elementIndex, const double& size) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._size[elementIndex]= size;
      
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotterPlotDebugInfo() const {
      return _persistentRecords._plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotVTKFiles() const {
      return _persistentRecords._plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotVTKFiles(const bool& plotVTKFiles) {
      _persistentRecords._plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRe() const {
      return _persistentRecords._scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRe(const double& scenarioRe) {
      _persistentRecords._scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioEta() const {
      return _persistentRecords._scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioEta(const double& scenarioEta) {
      _persistentRecords._scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRho() const {
      return _persistentRecords._scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRho(const double& scenarioRho) {
      _persistentRecords._scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioCharacteristicLength() const {
      return _persistentRecords._scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPL2h() const {
      return _persistentRecords._pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPL2h(const double& pL2h) {
      _persistentRecords._pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPMax() const {
      return _persistentRecords._pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPMax(const double& pMax) {
      _persistentRecords._pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementL2h() const {
      return _persistentRecords._pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementL2h(const double& pImprovementL2h) {
      _persistentRecords._pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementMax() const {
      return _persistentRecords._pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementMax(const double& pImprovementMax) {
      _persistentRecords._pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUL2h() const {
      return _persistentRecords._uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUL2h(const double& uL2h) {
      _persistentRecords._uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementL2h() const {
      return _persistentRecords._uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementL2h(const double& uImprovementL2h) {
      _persistentRecords._uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementMax() const {
      return _persistentRecords._uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementMax(const double& uImprovementMax) {
      _persistentRecords._uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension() const {
      return _persistentRecords._uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._uMaxPerDimension[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLoadBalancingFlag() const {
      return _persistentRecords._loadBalancingFlag;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLoadBalancingFlag(const int& loadBalancingFlag) {
      _persistentRecords._loadBalancingFlag = loadBalancingFlag;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString(const DebugElementType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getDebugElementTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "elementType:" << toString(getElementType());
      out << ",";
      out << "LGSMaxIterations:" << getLGSMaxIterations();
      out << ",";
      out << "LGSResidual:" << getLGSResidual();
      out << ",";
      out << "odeTimestepnumber:" << getOdeTimestepnumber();
      out << ",";
      out << "odeTime:" << getOdeTime();
      out << ",";
      out << "odeTau:" << getOdeTau();
      out << ",";
      out << "numberOfVertices:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfVertices(i) << ",";
   }
   out << getNumberOfVertices(DIMENSIONS-1) << "]";
      out << ",";
      out << "offset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getOffset(i) << ",";
   }
   out << getOffset(DIMENSIONS-1) << "]";
      out << ",";
      out << "size:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getSize(i) << ",";
   }
   out << getSize(DIMENSIONS-1) << "]";
      out << ",";
      out << "plotterPlotDebugInfo:" << getPlotterPlotDebugInfo();
      out << ",";
      out << "plotVTKFiles:" << getPlotVTKFiles();
      out << ",";
      out << "scenarioRe:" << getScenarioRe();
      out << ",";
      out << "scenarioEta:" << getScenarioEta();
      out << ",";
      out << "scenarioRho:" << getScenarioRho();
      out << ",";
      out << "scenarioCharacteristicLength:" << getScenarioCharacteristicLength();
      out << ",";
      out << "pL2h:" << getPL2h();
      out << ",";
      out << "pMax:" << getPMax();
      out << ",";
      out << "pImprovementL2h:" << getPImprovementL2h();
      out << ",";
      out << "pImprovementMax:" << getPImprovementMax();
      out << ",";
      out << "uL2h:" << getUL2h();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uImprovementL2h:" << getUImprovementL2h();
      out << ",";
      out << "uImprovementMax:" << getUImprovementMax();
      out << ",";
      out << "uMaxPerDimension:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getUMaxPerDimension(i) << ",";
   }
   out << getUMaxPerDimension(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(
         getElementType(),
         getLGSMaxIterations(),
         getLGSResidual(),
         getOdeTimestepnumber(),
         getOdeTime(),
         getOdeTau(),
         getNumberOfVertices(),
         getOffset(),
         getSize(),
         getPlotterPlotDebugInfo(),
         getPlotVTKFiles(),
         getScenarioRe(),
         getScenarioEta(),
         getScenarioRho(),
         getScenarioCharacteristicLength(),
         getPL2h(),
         getPMax(),
         getPImprovementL2h(),
         getPImprovementMax(),
         getUL2h(),
         getUMax(),
         getUImprovementL2h(),
         getUImprovementMax(),
         getUMaxPerDimension(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 36;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //elementType
            MPI_INT,		 //LGSMaxIterations
            MPI_DOUBLE,		 //LGSResidual
            MPI_INT,		 //odeTimestepnumber
            MPI_DOUBLE,		 //odeTime
            MPI_DOUBLE,		 //odeTau
            MPI_INT,		 //numberOfVertices
            MPI_DOUBLE,		 //offset
            MPI_DOUBLE,		 //size
            MPI_CHAR,		 //plotterPlotDebugInfo
            MPI_CHAR,		 //plotVTKFiles
            MPI_DOUBLE,		 //scenarioRe
            MPI_DOUBLE,		 //scenarioEta
            MPI_DOUBLE,		 //scenarioRho
            MPI_DOUBLE,		 //scenarioCharacteristicLength
            MPI_DOUBLE,		 //pL2h
            MPI_DOUBLE,		 //pMax
            MPI_DOUBLE,		 //pImprovementL2h
            MPI_DOUBLE,		 //pImprovementMax
            MPI_DOUBLE,		 //uL2h
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uImprovementL2h
            MPI_DOUBLE,		 //uImprovementMax
            MPI_DOUBLE,		 //uMaxPerDimension
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
            1,		 //elementType
            1,		 //LGSMaxIterations
            1,		 //LGSResidual
            1,		 //odeTimestepnumber
            1,		 //odeTime
            1,		 //odeTau
            DIMENSIONS,		 //numberOfVertices
            DIMENSIONS,		 //offset
            DIMENSIONS,		 //size
            1,		 //plotterPlotDebugInfo
            1,		 //plotVTKFiles
            1,		 //scenarioRe
            1,		 //scenarioEta
            1,		 //scenarioRho
            1,		 //scenarioCharacteristicLength
            1,		 //pL2h
            1,		 //pMax
            1,		 //pImprovementL2h
            1,		 //pImprovementMax
            1,		 //uL2h
            1,		 //uMax
            1,		 //uImprovementL2h
            1,		 //uImprovementMax
            DIMENSIONS,		 //uMaxPerDimension
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
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._elementType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSResidual))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTime))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTau))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._offset[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._size[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRe))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioEta))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRho))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pL2h))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pMax))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uL2h))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMax))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._isTraversalInverted))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._loadBalancingFlag))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._elementType))), 		&disp[35] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif !defined(Parallel)
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _elementType(elementType),
   _LGSMaxIterations(LGSMaxIterations),
   _LGSResidual(LGSResidual),
   _odeTimestepnumber(odeTimestepnumber),
   _odeTime(odeTime),
   _odeTau(odeTau),
   _numberOfVertices(numberOfVertices),
   _offset(offset),
   _size(size),
   _plotterPlotDebugInfo(plotterPlotDebugInfo),
   _plotVTKFiles(plotVTKFiles),
   _scenarioRe(scenarioRe),
   _scenarioEta(scenarioEta),
   _scenarioRho(scenarioRho),
   _scenarioCharacteristicLength(scenarioCharacteristicLength),
   _pL2h(pL2h),
   _pMax(pMax),
   _pImprovementL2h(pImprovementL2h),
   _pImprovementMax(pImprovementMax),
   _uL2h(uL2h),
   _uMax(uMax),
   _uImprovementL2h(uImprovementL2h),
   _uImprovementMax(uImprovementMax),
   _uMaxPerDimension(uMaxPerDimension),
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getElementType() const {
      return _elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setElementType(const DebugElementType& elementType) {
      _elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSMaxIterations() const {
      return _LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
      _LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSResidual() const {
      return _LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSResidual(const double& LGSResidual) {
      _LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTimestepnumber() const {
      return _odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTime() const {
      return _odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTime(const double& odeTime) {
      _odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTau() const {
      return _odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTau(const double& odeTau) {
      _odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfVertices() const {
      return _numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _numberOfVertices = (numberOfVertices);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOffset() const {
      return _offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _offset = (offset);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getSize() const {
      return _size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _size = (size);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotterPlotDebugInfo() const {
      return _plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotVTKFiles() const {
      return _plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
      _plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRe() const {
      return _scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRe(const double& scenarioRe) {
      _scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioEta() const {
      return _scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioEta(const double& scenarioEta) {
      _scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRho() const {
      return _scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRho(const double& scenarioRho) {
      _scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioCharacteristicLength() const {
      return _scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPL2h() const {
      return _pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPL2h(const double& pL2h) {
      _pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPMax() const {
      return _pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPMax(const double& pMax) {
      _pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementL2h() const {
      return _pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
      _pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementMax() const {
      return _pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
      _pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUL2h() const {
      return _uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUL2h(const double& uL2h) {
      _uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementL2h() const {
      return _uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
      _uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementMax() const {
      return _uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
      _uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMaxPerDimension() const {
      return _uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasRefined() const {
      return _hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasRefined(const bool& hasRefined) {
      _hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      return _hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasErased() const {
      return _hasErased;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasErased(const bool& hasErased) {
      _hasErased = hasErased;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      return _hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getHasChangedVertexOrCellState() const {
      return _hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords._hasRefined, persistentRecords._hasTriggeredRefinementForNextIteration, persistentRecords._hasErased, persistentRecords._hasTriggeredEraseForNextIteration, persistentRecords._hasChangedVertexOrCellState, persistentRecords._isTraversalInverted) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getElementType() const {
      return _persistentRecords._elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setElementType(const DebugElementType& elementType) {
      _persistentRecords._elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSMaxIterations() const {
      return _persistentRecords._LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSMaxIterations(const int& LGSMaxIterations) {
      _persistentRecords._LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSResidual() const {
      return _persistentRecords._LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSResidual(const double& LGSResidual) {
      _persistentRecords._LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTimestepnumber() const {
      return _persistentRecords._odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _persistentRecords._odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTime() const {
      return _persistentRecords._odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTime(const double& odeTime) {
      _persistentRecords._odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTau() const {
      return _persistentRecords._odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTau(const double& odeTau) {
      _persistentRecords._odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices() const {
      return _persistentRecords._numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _persistentRecords._numberOfVertices = (numberOfVertices);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._numberOfVertices[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOffset() const {
      return _persistentRecords._offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _persistentRecords._offset = (offset);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOffset(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._offset[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(int elementIndex, const double& offset) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._offset[elementIndex]= offset;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSize() const {
      return _persistentRecords._size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _persistentRecords._size = (size);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSize(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._size[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setSize(int elementIndex, const double& size) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._size[elementIndex]= size;
      
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPlotterPlotDebugInfo() const {
      return _persistentRecords._plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPlotVTKFiles() const {
      return _persistentRecords._plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPlotVTKFiles(const bool& plotVTKFiles) {
      _persistentRecords._plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRe() const {
      return _persistentRecords._scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRe(const double& scenarioRe) {
      _persistentRecords._scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioEta() const {
      return _persistentRecords._scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioEta(const double& scenarioEta) {
      _persistentRecords._scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRho() const {
      return _persistentRecords._scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRho(const double& scenarioRho) {
      _persistentRecords._scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioCharacteristicLength() const {
      return _persistentRecords._scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPL2h() const {
      return _persistentRecords._pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPL2h(const double& pL2h) {
      _persistentRecords._pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPMax() const {
      return _persistentRecords._pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPMax(const double& pMax) {
      _persistentRecords._pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementL2h() const {
      return _persistentRecords._pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementL2h(const double& pImprovementL2h) {
      _persistentRecords._pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementMax() const {
      return _persistentRecords._pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementMax(const double& pImprovementMax) {
      _persistentRecords._pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUL2h() const {
      return _persistentRecords._uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUL2h(const double& uL2h) {
      _persistentRecords._uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementL2h() const {
      return _persistentRecords._uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementL2h(const double& uImprovementL2h) {
      _persistentRecords._uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementMax() const {
      return _persistentRecords._uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementMax(const double& uImprovementMax) {
      _persistentRecords._uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension() const {
      return _persistentRecords._uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._uMaxPerDimension[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasRefined() const {
      return _persistentRecords._hasRefined;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasRefined(const bool& hasRefined) {
      _persistentRecords._hasRefined = hasRefined;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredRefinementForNextIteration() const {
      return _persistentRecords._hasTriggeredRefinementForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      _persistentRecords._hasTriggeredRefinementForNextIteration = hasTriggeredRefinementForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasErased() const {
      return _persistentRecords._hasErased;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasErased(const bool& hasErased) {
      _persistentRecords._hasErased = hasErased;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasTriggeredEraseForNextIteration() const {
      return _persistentRecords._hasTriggeredEraseForNextIteration;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      _persistentRecords._hasTriggeredEraseForNextIteration = hasTriggeredEraseForNextIteration;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getHasChangedVertexOrCellState() const {
      return _persistentRecords._hasChangedVertexOrCellState;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      _persistentRecords._hasChangedVertexOrCellState = hasChangedVertexOrCellState;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString(const DebugElementType& param) {
      return "Schubbelbubbel (to be replaced)";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping() {
      return "DebugElementType(DebugDLinear=0,DebugDivFree=1,DebugEnhancedDivFree=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "elementType:" << toString(getElementType());
      out << ",";
      out << "LGSMaxIterations:" << getLGSMaxIterations();
      out << ",";
      out << "LGSResidual:" << getLGSResidual();
      out << ",";
      out << "odeTimestepnumber:" << getOdeTimestepnumber();
      out << ",";
      out << "odeTime:" << getOdeTime();
      out << ",";
      out << "odeTau:" << getOdeTau();
      out << ",";
      out << "numberOfVertices:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfVertices(i) << ",";
   }
   out << getNumberOfVertices(DIMENSIONS-1) << "]";
      out << ",";
      out << "offset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getOffset(i) << ",";
   }
   out << getOffset(DIMENSIONS-1) << "]";
      out << ",";
      out << "size:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getSize(i) << ",";
   }
   out << getSize(DIMENSIONS-1) << "]";
      out << ",";
      out << "plotterPlotDebugInfo:" << getPlotterPlotDebugInfo();
      out << ",";
      out << "plotVTKFiles:" << getPlotVTKFiles();
      out << ",";
      out << "scenarioRe:" << getScenarioRe();
      out << ",";
      out << "scenarioEta:" << getScenarioEta();
      out << ",";
      out << "scenarioRho:" << getScenarioRho();
      out << ",";
      out << "scenarioCharacteristicLength:" << getScenarioCharacteristicLength();
      out << ",";
      out << "pL2h:" << getPL2h();
      out << ",";
      out << "pMax:" << getPMax();
      out << ",";
      out << "pImprovementL2h:" << getPImprovementL2h();
      out << ",";
      out << "pImprovementMax:" << getPImprovementMax();
      out << ",";
      out << "uL2h:" << getUL2h();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uImprovementL2h:" << getUImprovementL2h();
      out << ",";
      out << "uImprovementMax:" << getUImprovementMax();
      out << ",";
      out << "uMaxPerDimension:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getUMaxPerDimension(i) << ",";
   }
   out << getUMaxPerDimension(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(
         getElementType(),
         getLGSMaxIterations(),
         getLGSResidual(),
         getOdeTimestepnumber(),
         getOdeTime(),
         getOdeTau(),
         getNumberOfVertices(),
         getOffset(),
         getSize(),
         getPlotterPlotDebugInfo(),
         getPlotVTKFiles(),
         getScenarioRe(),
         getScenarioEta(),
         getScenarioRho(),
         getScenarioCharacteristicLength(),
         getPL2h(),
         getPMax(),
         getPImprovementL2h(),
         getPImprovementMax(),
         getUL2h(),
         getUMax(),
         getUImprovementL2h(),
         getUImprovementMax(),
         getUMaxPerDimension(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 39;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //elementType
            MPI_INT,		 //LGSMaxIterations
            MPI_DOUBLE,		 //LGSResidual
            MPI_INT,		 //odeTimestepnumber
            MPI_DOUBLE,		 //odeTime
            MPI_DOUBLE,		 //odeTau
            MPI_INT,		 //numberOfVertices
            MPI_DOUBLE,		 //offset
            MPI_DOUBLE,		 //size
            MPI_CHAR,		 //plotterPlotDebugInfo
            MPI_CHAR,		 //plotVTKFiles
            MPI_DOUBLE,		 //scenarioRe
            MPI_DOUBLE,		 //scenarioEta
            MPI_DOUBLE,		 //scenarioRho
            MPI_DOUBLE,		 //scenarioCharacteristicLength
            MPI_DOUBLE,		 //pL2h
            MPI_DOUBLE,		 //pMax
            MPI_DOUBLE,		 //pImprovementL2h
            MPI_DOUBLE,		 //pImprovementMax
            MPI_DOUBLE,		 //uL2h
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uImprovementL2h
            MPI_DOUBLE,		 //uImprovementMax
            MPI_DOUBLE,		 //uMaxPerDimension
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
            1,		 //elementType
            1,		 //LGSMaxIterations
            1,		 //LGSResidual
            1,		 //odeTimestepnumber
            1,		 //odeTime
            1,		 //odeTau
            DIMENSIONS,		 //numberOfVertices
            DIMENSIONS,		 //offset
            DIMENSIONS,		 //size
            1,		 //plotterPlotDebugInfo
            1,		 //plotVTKFiles
            1,		 //scenarioRe
            1,		 //scenarioEta
            1,		 //scenarioRho
            1,		 //scenarioCharacteristicLength
            1,		 //pL2h
            1,		 //pMax
            1,		 //pImprovementL2h
            1,		 //pImprovementMax
            1,		 //uL2h
            1,		 //uMax
            1,		 //uImprovementL2h
            1,		 //uImprovementMax
            DIMENSIONS,		 //uMaxPerDimension
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
         SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._elementType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSResidual))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTime))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTau))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._offset[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._size[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRe))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioEta))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRho))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pL2h))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pMax))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uL2h))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMax))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasRefined))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredRefinementForNextIteration))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasErased))), 		&disp[34] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasTriggeredEraseForNextIteration))), 		&disp[35] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._hasChangedVertexOrCellState))), 		&disp[36] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._isTraversalInverted))), 		&disp[37] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicit[1]._persistentRecords._elementType))), 		&disp[38] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _elementType(elementType),
   _LGSMaxIterations(LGSMaxIterations),
   _LGSResidual(LGSResidual),
   _odeTimestepnumber(odeTimestepnumber),
   _odeTime(odeTime),
   _odeTau(odeTau),
   _numberOfVertices(numberOfVertices),
   _offset(offset),
   _size(size),
   _plotterPlotDebugInfo(plotterPlotDebugInfo),
   _plotVTKFiles(plotVTKFiles),
   _scenarioRe(scenarioRe),
   _scenarioEta(scenarioEta),
   _scenarioRho(scenarioRho),
   _scenarioCharacteristicLength(scenarioCharacteristicLength),
   _pL2h(pL2h),
   _pMax(pMax),
   _pImprovementL2h(pImprovementL2h),
   _pImprovementMax(pImprovementMax),
   _uL2h(uL2h),
   _uMax(uMax),
   _uImprovementL2h(uImprovementL2h),
   _uImprovementMax(uImprovementMax),
   _uMaxPerDimension(uMaxPerDimension),
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getElementType() const {
      return _elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setElementType(const DebugElementType& elementType) {
      _elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSMaxIterations() const {
      return _LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
      _LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSResidual() const {
      return _LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSResidual(const double& LGSResidual) {
      _LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTimestepnumber() const {
      return _odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTime() const {
      return _odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTime(const double& odeTime) {
      _odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTau() const {
      return _odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTau(const double& odeTau) {
      _odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfVertices() const {
      return _numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _numberOfVertices = (numberOfVertices);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOffset() const {
      return _offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _offset = (offset);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getSize() const {
      return _size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _size = (size);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotterPlotDebugInfo() const {
      return _plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotVTKFiles() const {
      return _plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
      _plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRe() const {
      return _scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRe(const double& scenarioRe) {
      _scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioEta() const {
      return _scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioEta(const double& scenarioEta) {
      _scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRho() const {
      return _scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRho(const double& scenarioRho) {
      _scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioCharacteristicLength() const {
      return _scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPL2h() const {
      return _pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPL2h(const double& pL2h) {
      _pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPMax() const {
      return _pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPMax(const double& pMax) {
      _pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementL2h() const {
      return _pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
      _pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementMax() const {
      return _pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
      _pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUL2h() const {
      return _uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUL2h(const double& uL2h) {
      _uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMax() const {
      return _uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMax(const double& uMax) {
      _uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementL2h() const {
      return _uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
      _uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementMax() const {
      return _uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
      _uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMaxPerDimension() const {
      return _uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMinMeshWidth() const {
      return _minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _minMeshWidth = (minMeshWidth);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxMeshWidth() const {
      return _maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerVertices() const {
      return _numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfBoundaryVertices() const {
      return _numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterVertices() const {
      return _numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerCells() const {
      return _numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterCells() const {
      return _numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMaxLevel() const {
      return _maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMaxLevel(const int& maxLevel) {
      _maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _packedRecords0 = hasRefined ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _packedRecords0 = hasTriggeredRefinementForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _packedRecords0 = hasErased ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _packedRecords0 = hasTriggeredEraseForNextIteration ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _packedRecords0 = hasChangedVertexOrCellState ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getIsTraversalInverted() const {
      return _isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setIsTraversalInverted(const bool& isTraversalInverted) {
      _isTraversalInverted = isTraversalInverted;
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._minMeshWidth, persistentRecords._maxMeshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._maxLevel, persistentRecords.getHasRefined(), persistentRecords.getHasTriggeredRefinementForNextIteration(), persistentRecords.getHasErased(), persistentRecords.getHasTriggeredEraseForNextIteration(), persistentRecords.getHasChangedVertexOrCellState(), persistentRecords._isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth, const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const int& maxLevel, const bool& hasRefined, const bool& hasTriggeredRefinementForNextIteration, const bool& hasErased, const bool& hasTriggeredEraseForNextIteration, const bool& hasChangedVertexOrCellState, const bool& isTraversalInverted):
   _persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, minMeshWidth, maxMeshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, maxLevel, hasRefined, hasTriggeredRefinementForNextIteration, hasErased, hasTriggeredEraseForNextIteration, hasChangedVertexOrCellState, isTraversalInverted) {
      assertion((5 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::~SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getElementType() const {
      return _persistentRecords._elementType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setElementType(const DebugElementType& elementType) {
      _persistentRecords._elementType = elementType;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSMaxIterations() const {
      return _persistentRecords._LGSMaxIterations;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSMaxIterations(const int& LGSMaxIterations) {
      _persistentRecords._LGSMaxIterations = LGSMaxIterations;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSResidual() const {
      return _persistentRecords._LGSResidual;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSResidual(const double& LGSResidual) {
      _persistentRecords._LGSResidual = LGSResidual;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTimestepnumber() const {
      return _persistentRecords._odeTimestepnumber;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTimestepnumber(const int& odeTimestepnumber) {
      _persistentRecords._odeTimestepnumber = odeTimestepnumber;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTime() const {
      return _persistentRecords._odeTime;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTime(const double& odeTime) {
      _persistentRecords._odeTime = odeTime;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTau() const {
      return _persistentRecords._odeTau;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTau(const double& odeTau) {
      _persistentRecords._odeTau = odeTau;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices() const {
      return _persistentRecords._numberOfVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
      _persistentRecords._numberOfVertices = (numberOfVertices);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._numberOfVertices[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset() const {
      return _persistentRecords._offset;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
      _persistentRecords._offset = (offset);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._offset[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(int elementIndex, const double& offset) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._offset[elementIndex]= offset;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize() const {
      return _persistentRecords._size;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
      _persistentRecords._size = (size);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._size[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(int elementIndex, const double& size) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._size[elementIndex]= size;
      
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotterPlotDebugInfo() const {
      return _persistentRecords._plotterPlotDebugInfo;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
      _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotVTKFiles() const {
      return _persistentRecords._plotVTKFiles;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotVTKFiles(const bool& plotVTKFiles) {
      _persistentRecords._plotVTKFiles = plotVTKFiles;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRe() const {
      return _persistentRecords._scenarioRe;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRe(const double& scenarioRe) {
      _persistentRecords._scenarioRe = scenarioRe;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioEta() const {
      return _persistentRecords._scenarioEta;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioEta(const double& scenarioEta) {
      _persistentRecords._scenarioEta = scenarioEta;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRho() const {
      return _persistentRecords._scenarioRho;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRho(const double& scenarioRho) {
      _persistentRecords._scenarioRho = scenarioRho;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioCharacteristicLength() const {
      return _persistentRecords._scenarioCharacteristicLength;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
      _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPL2h() const {
      return _persistentRecords._pL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPL2h(const double& pL2h) {
      _persistentRecords._pL2h = pL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPMax() const {
      return _persistentRecords._pMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPMax(const double& pMax) {
      _persistentRecords._pMax = pMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementL2h() const {
      return _persistentRecords._pImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementL2h(const double& pImprovementL2h) {
      _persistentRecords._pImprovementL2h = pImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementMax() const {
      return _persistentRecords._pImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementMax(const double& pImprovementMax) {
      _persistentRecords._pImprovementMax = pImprovementMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUL2h() const {
      return _persistentRecords._uL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUL2h(const double& uL2h) {
      _persistentRecords._uL2h = uL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMax() const {
      return _persistentRecords._uMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMax(const double& uMax) {
      _persistentRecords._uMax = uMax;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementL2h() const {
      return _persistentRecords._uImprovementL2h;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementL2h(const double& uImprovementL2h) {
      _persistentRecords._uImprovementL2h = uImprovementL2h;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementMax() const {
      return _persistentRecords._uImprovementMax;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementMax(const double& uImprovementMax) {
      _persistentRecords._uImprovementMax = uImprovementMax;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension() const {
      return _persistentRecords._uMaxPerDimension;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
      _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._uMaxPerDimension[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth() const {
      return _persistentRecords._minMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& minMeshWidth) {
      _persistentRecords._minMeshWidth = (minMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMinMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._minMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMinMeshWidth(int elementIndex, const double& minMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._minMeshWidth[elementIndex]= minMeshWidth;
      
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth() const {
      return _persistentRecords._maxMeshWidth;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& maxMeshWidth) {
      _persistentRecords._maxMeshWidth = (maxMeshWidth);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxMeshWidth(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._maxMeshWidth[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxMeshWidth(int elementIndex, const double& maxMeshWidth) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._maxMeshWidth[elementIndex]= maxMeshWidth;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerVertices() const {
      return _persistentRecords._numberOfInnerVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
      _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfBoundaryVertices() const {
      return _persistentRecords._numberOfBoundaryVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
      _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterVertices() const {
      return _persistentRecords._numberOfOuterVertices;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
      _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerCells() const {
      return _persistentRecords._numberOfInnerCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
      _persistentRecords._numberOfInnerCells = numberOfInnerCells;
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterCells() const {
      return _persistentRecords._numberOfOuterCells;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
      _persistentRecords._numberOfOuterCells = numberOfOuterCells;
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMaxLevel() const {
      return _persistentRecords._maxLevel;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMaxLevel(const int& maxLevel) {
      _persistentRecords._maxLevel = maxLevel;
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasRefined() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasRefined(const bool& hasRefined) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = hasRefined ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredRefinementForNextIteration() const {
      short int mask = 1 << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredRefinementForNextIteration(const bool& hasTriggeredRefinementForNextIteration) {
      short int mask = 1 << (1);
   _persistentRecords._packedRecords0 = hasTriggeredRefinementForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasErased() const {
      short int mask = 1 << (2);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasErased(const bool& hasErased) {
      short int mask = 1 << (2);
   _persistentRecords._packedRecords0 = hasErased ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasTriggeredEraseForNextIteration() const {
      short int mask = 1 << (3);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasTriggeredEraseForNextIteration(const bool& hasTriggeredEraseForNextIteration) {
      short int mask = 1 << (3);
   _persistentRecords._packedRecords0 = hasTriggeredEraseForNextIteration ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getHasChangedVertexOrCellState() const {
      short int mask = 1 << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setHasChangedVertexOrCellState(const bool& hasChangedVertexOrCellState) {
      short int mask = 1 << (4);
   _persistentRecords._packedRecords0 = hasChangedVertexOrCellState ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getIsTraversalInverted() const {
      return _persistentRecords._isTraversalInverted;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::setIsTraversalInverted(const bool& isTraversalInverted) {
      _persistentRecords._isTraversalInverted = isTraversalInverted;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString(const DebugElementType& param) {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getDebugElementTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "elementType:" << toString(getElementType());
      out << ",";
      out << "LGSMaxIterations:" << getLGSMaxIterations();
      out << ",";
      out << "LGSResidual:" << getLGSResidual();
      out << ",";
      out << "odeTimestepnumber:" << getOdeTimestepnumber();
      out << ",";
      out << "odeTime:" << getOdeTime();
      out << ",";
      out << "odeTau:" << getOdeTau();
      out << ",";
      out << "numberOfVertices:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfVertices(i) << ",";
   }
   out << getNumberOfVertices(DIMENSIONS-1) << "]";
      out << ",";
      out << "offset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getOffset(i) << ",";
   }
   out << getOffset(DIMENSIONS-1) << "]";
      out << ",";
      out << "size:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getSize(i) << ",";
   }
   out << getSize(DIMENSIONS-1) << "]";
      out << ",";
      out << "plotterPlotDebugInfo:" << getPlotterPlotDebugInfo();
      out << ",";
      out << "plotVTKFiles:" << getPlotVTKFiles();
      out << ",";
      out << "scenarioRe:" << getScenarioRe();
      out << ",";
      out << "scenarioEta:" << getScenarioEta();
      out << ",";
      out << "scenarioRho:" << getScenarioRho();
      out << ",";
      out << "scenarioCharacteristicLength:" << getScenarioCharacteristicLength();
      out << ",";
      out << "pL2h:" << getPL2h();
      out << ",";
      out << "pMax:" << getPMax();
      out << ",";
      out << "pImprovementL2h:" << getPImprovementL2h();
      out << ",";
      out << "pImprovementMax:" << getPImprovementMax();
      out << ",";
      out << "uL2h:" << getUL2h();
      out << ",";
      out << "uMax:" << getUMax();
      out << ",";
      out << "uImprovementL2h:" << getUImprovementL2h();
      out << ",";
      out << "uImprovementMax:" << getUImprovementMax();
      out << ",";
      out << "uMaxPerDimension:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getUMaxPerDimension(i) << ",";
   }
   out << getUMaxPerDimension(DIMENSIONS-1) << "]";
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
   
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::convert() const{
      return SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(
         getElementType(),
         getLGSMaxIterations(),
         getLGSResidual(),
         getOdeTimestepnumber(),
         getOdeTime(),
         getOdeTau(),
         getNumberOfVertices(),
         getOffset(),
         getSize(),
         getPlotterPlotDebugInfo(),
         getPlotVTKFiles(),
         getScenarioRe(),
         getScenarioEta(),
         getScenarioRho(),
         getScenarioCharacteristicLength(),
         getPL2h(),
         getPMax(),
         getPImprovementL2h(),
         getPImprovementMax(),
         getUL2h(),
         getUMax(),
         getUImprovementL2h(),
         getUImprovementMax(),
         getUMaxPerDimension(),
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
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 35;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //elementType
            MPI_INT,		 //LGSMaxIterations
            MPI_DOUBLE,		 //LGSResidual
            MPI_INT,		 //odeTimestepnumber
            MPI_DOUBLE,		 //odeTime
            MPI_DOUBLE,		 //odeTau
            MPI_INT,		 //numberOfVertices
            MPI_DOUBLE,		 //offset
            MPI_DOUBLE,		 //size
            MPI_CHAR,		 //plotterPlotDebugInfo
            MPI_CHAR,		 //plotVTKFiles
            MPI_DOUBLE,		 //scenarioRe
            MPI_DOUBLE,		 //scenarioEta
            MPI_DOUBLE,		 //scenarioRho
            MPI_DOUBLE,		 //scenarioCharacteristicLength
            MPI_DOUBLE,		 //pL2h
            MPI_DOUBLE,		 //pMax
            MPI_DOUBLE,		 //pImprovementL2h
            MPI_DOUBLE,		 //pImprovementMax
            MPI_DOUBLE,		 //uL2h
            MPI_DOUBLE,		 //uMax
            MPI_DOUBLE,		 //uImprovementL2h
            MPI_DOUBLE,		 //uImprovementMax
            MPI_DOUBLE,		 //uMaxPerDimension
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
            1,		 //elementType
            1,		 //LGSMaxIterations
            1,		 //LGSResidual
            1,		 //odeTimestepnumber
            1,		 //odeTime
            1,		 //odeTau
            DIMENSIONS,		 //numberOfVertices
            DIMENSIONS,		 //offset
            DIMENSIONS,		 //size
            1,		 //plotterPlotDebugInfo
            1,		 //plotVTKFiles
            1,		 //scenarioRe
            1,		 //scenarioEta
            1,		 //scenarioRho
            1,		 //scenarioCharacteristicLength
            1,		 //pL2h
            1,		 //pMax
            1,		 //pImprovementL2h
            1,		 //pImprovementMax
            1,		 //uL2h
            1,		 //uMax
            1,		 //uImprovementL2h
            1,		 //uImprovementMax
            DIMENSIONS,		 //uMaxPerDimension
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
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._elementType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSResidual))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTime))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTau))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._offset[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._size[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRe))), 		&disp[11] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioEta))), 		&disp[12] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRho))), 		&disp[13] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pL2h))), 		&disp[15] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pMax))), 		&disp[16] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uL2h))), 		&disp[19] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMax))), 		&disp[20] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._minMeshWidth[0]))), 		&disp[24] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxMeshWidth[0]))), 		&disp[25] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[26] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[27] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[28] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[29] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[30] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._maxLevel))), 		&disp[31] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._isTraversalInverted))), 		&disp[32] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[33] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._elementType))), 		&disp[34] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#endif


