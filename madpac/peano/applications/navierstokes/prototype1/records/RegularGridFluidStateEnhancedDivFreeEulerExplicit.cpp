#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells),
_gridIsStationary(gridIsStationary) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getElementType() const {
   return _elementType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setElementType(const DebugElementType& elementType) {
   _elementType = elementType;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSMaxIterations() const {
   return _LGSMaxIterations;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
   _LGSMaxIterations = LGSMaxIterations;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getLGSResidual() const {
   return _LGSResidual;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setLGSResidual(const double& LGSResidual) {
   _LGSResidual = LGSResidual;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTimestepnumber() const {
   return _odeTimestepnumber;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
   _odeTimestepnumber = odeTimestepnumber;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTime() const {
   return _odeTime;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTime(const double& odeTime) {
   _odeTime = odeTime;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOdeTau() const {
   return _odeTau;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOdeTau(const double& odeTau) {
   _odeTau = odeTau;
}



tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfVertices() const {
   return _numberOfVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
   _numberOfVertices = (numberOfVertices);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getOffset() const {
   return _offset;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
   _offset = (offset);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getSize() const {
   return _size;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
   _size = (size);
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotterPlotDebugInfo() const {
   return _plotterPlotDebugInfo;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
   _plotterPlotDebugInfo = plotterPlotDebugInfo;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPlotVTKFiles() const {
   return _plotVTKFiles;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
   _plotVTKFiles = plotVTKFiles;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRe() const {
   return _scenarioRe;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRe(const double& scenarioRe) {
   _scenarioRe = scenarioRe;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioEta() const {
   return _scenarioEta;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioEta(const double& scenarioEta) {
   _scenarioEta = scenarioEta;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioRho() const {
   return _scenarioRho;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioRho(const double& scenarioRho) {
   _scenarioRho = scenarioRho;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getScenarioCharacteristicLength() const {
   return _scenarioCharacteristicLength;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
   _scenarioCharacteristicLength = scenarioCharacteristicLength;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPL2h() const {
   return _pL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPL2h(const double& pL2h) {
   _pL2h = pL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPMax() const {
   return _pMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPMax(const double& pMax) {
   _pMax = pMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementL2h() const {
   return _pImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
   _pImprovementL2h = pImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getPImprovementMax() const {
   return _pImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
   _pImprovementMax = pImprovementMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUL2h() const {
   return _uL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUL2h(const double& uL2h) {
   _uL2h = uL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMax() const {
   return _uMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMax(const double& uMax) {
   _uMax = uMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementL2h() const {
   return _uImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
   _uImprovementL2h = uImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUImprovementMax() const {
   return _uImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
   _uImprovementMax = uImprovementMax;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getUMaxPerDimension() const {
   return _uMaxPerDimension;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
   _uMaxPerDimension = (uMaxPerDimension);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::getGridIsStationary() const {
   return _gridIsStationary;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   _gridIsStationary = gridIsStationary;
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::~RegularGridFluidStateEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getElementType() const {
   return _persistentRecords._elementType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setElementType(const DebugElementType& elementType) {
   _persistentRecords._elementType = elementType;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getLGSMaxIterations() const {
   return _persistentRecords._LGSMaxIterations;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setLGSMaxIterations(const int& LGSMaxIterations) {
   _persistentRecords._LGSMaxIterations = LGSMaxIterations;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getLGSResidual() const {
   return _persistentRecords._LGSResidual;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setLGSResidual(const double& LGSResidual) {
   _persistentRecords._LGSResidual = LGSResidual;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTimestepnumber() const {
   return _persistentRecords._odeTimestepnumber;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTimestepnumber(const int& odeTimestepnumber) {
   _persistentRecords._odeTimestepnumber = odeTimestepnumber;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTime() const {
   return _persistentRecords._odeTime;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTime(const double& odeTime) {
   _persistentRecords._odeTime = odeTime;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTau() const {
   return _persistentRecords._odeTau;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTau(const double& odeTau) {
   _persistentRecords._odeTau = odeTau;
}



tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices() const {
   return _persistentRecords._numberOfVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
   _persistentRecords._numberOfVertices = (numberOfVertices);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._numberOfVertices[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOffset() const {
   return _persistentRecords._offset;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
   _persistentRecords._offset = (offset);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._offset[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(int elementIndex, const double& offset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._offset[elementIndex]= offset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getSize() const {
   return _persistentRecords._size;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
   _persistentRecords._size = (size);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getSize(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._size[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setSize(int elementIndex, const double& size) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._size[elementIndex]= size;
   
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPlotterPlotDebugInfo() const {
   return _persistentRecords._plotterPlotDebugInfo;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
   _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPlotVTKFiles() const {
   return _persistentRecords._plotVTKFiles;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPlotVTKFiles(const bool& plotVTKFiles) {
   _persistentRecords._plotVTKFiles = plotVTKFiles;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRe() const {
   return _persistentRecords._scenarioRe;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRe(const double& scenarioRe) {
   _persistentRecords._scenarioRe = scenarioRe;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioEta() const {
   return _persistentRecords._scenarioEta;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioEta(const double& scenarioEta) {
   _persistentRecords._scenarioEta = scenarioEta;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRho() const {
   return _persistentRecords._scenarioRho;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRho(const double& scenarioRho) {
   _persistentRecords._scenarioRho = scenarioRho;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioCharacteristicLength() const {
   return _persistentRecords._scenarioCharacteristicLength;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
   _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPL2h() const {
   return _persistentRecords._pL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPL2h(const double& pL2h) {
   _persistentRecords._pL2h = pL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPMax() const {
   return _persistentRecords._pMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPMax(const double& pMax) {
   _persistentRecords._pMax = pMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementL2h() const {
   return _persistentRecords._pImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementL2h(const double& pImprovementL2h) {
   _persistentRecords._pImprovementL2h = pImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementMax() const {
   return _persistentRecords._pImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPImprovementMax(const double& pImprovementMax) {
   _persistentRecords._pImprovementMax = pImprovementMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUL2h() const {
   return _persistentRecords._uL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUL2h(const double& uL2h) {
   _persistentRecords._uL2h = uL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUMax() const {
   return _persistentRecords._uMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUMax(const double& uMax) {
   _persistentRecords._uMax = uMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementL2h() const {
   return _persistentRecords._uImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementL2h(const double& uImprovementL2h) {
   _persistentRecords._uImprovementL2h = uImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementMax() const {
   return _persistentRecords._uImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUImprovementMax(const double& uImprovementMax) {
   _persistentRecords._uImprovementMax = uImprovementMax;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension() const {
   return _persistentRecords._uMaxPerDimension;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
   _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._uMaxPerDimension[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getGridIsStationary() const {
   return _persistentRecords._gridIsStationary;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setGridIsStationary(const bool& gridIsStationary) {
   _persistentRecords._gridIsStationary = gridIsStationary;
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::toString(const DebugElementType& param) {
   return "Schubbelbubbel (to be replaced)";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping() {
   return "DebugElementType(DebugDLinear=0,DebugDivFree=1,DebugEnhancedDivFree=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::convert() const{
   return RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked(
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype() {
      const int Attributes = 32;
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
      RegularGridFluidStateEnhancedDivFreeEulerExplicit dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._elementType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._LGSResidual))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTime))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._odeTau))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._offset[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._size[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRe))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioEta))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioRho))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pL2h))), 		&disp[15] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pMax))), 		&disp[16] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uL2h))), 		&disp[19] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMax))), 		&disp[20] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._meshWidth[0]))), 		&disp[24] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[0]._persistentRecords._gridIsStationary))), 		&disp[30] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicit[1]._persistentRecords._elementType))), 		&disp[31] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &RegularGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidStateEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
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
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells) {
   setGridIsStationary(gridIsStationary);
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getElementType() const {
   return _elementType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setElementType(const DebugElementType& elementType) {
   _elementType = elementType;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSMaxIterations() const {
   return _LGSMaxIterations;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSMaxIterations(const int& LGSMaxIterations) {
   _LGSMaxIterations = LGSMaxIterations;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getLGSResidual() const {
   return _LGSResidual;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setLGSResidual(const double& LGSResidual) {
   _LGSResidual = LGSResidual;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTimestepnumber() const {
   return _odeTimestepnumber;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTimestepnumber(const int& odeTimestepnumber) {
   _odeTimestepnumber = odeTimestepnumber;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTime() const {
   return _odeTime;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTime(const double& odeTime) {
   _odeTime = odeTime;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOdeTau() const {
   return _odeTau;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOdeTau(const double& odeTau) {
   _odeTau = odeTau;
}



tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfVertices() const {
   return _numberOfVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
   _numberOfVertices = (numberOfVertices);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getOffset() const {
   return _offset;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
   _offset = (offset);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getSize() const {
   return _size;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
   _size = (size);
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotterPlotDebugInfo() const {
   return _plotterPlotDebugInfo;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
   _plotterPlotDebugInfo = plotterPlotDebugInfo;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPlotVTKFiles() const {
   return _plotVTKFiles;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPlotVTKFiles(const bool& plotVTKFiles) {
   _plotVTKFiles = plotVTKFiles;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRe() const {
   return _scenarioRe;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRe(const double& scenarioRe) {
   _scenarioRe = scenarioRe;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioEta() const {
   return _scenarioEta;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioEta(const double& scenarioEta) {
   _scenarioEta = scenarioEta;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioRho() const {
   return _scenarioRho;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioRho(const double& scenarioRho) {
   _scenarioRho = scenarioRho;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getScenarioCharacteristicLength() const {
   return _scenarioCharacteristicLength;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
   _scenarioCharacteristicLength = scenarioCharacteristicLength;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPL2h() const {
   return _pL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPL2h(const double& pL2h) {
   _pL2h = pL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPMax() const {
   return _pMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPMax(const double& pMax) {
   _pMax = pMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementL2h() const {
   return _pImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementL2h(const double& pImprovementL2h) {
   _pImprovementL2h = pImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getPImprovementMax() const {
   return _pImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setPImprovementMax(const double& pImprovementMax) {
   _pImprovementMax = pImprovementMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUL2h() const {
   return _uL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUL2h(const double& uL2h) {
   _uL2h = uL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMax() const {
   return _uMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMax(const double& uMax) {
   _uMax = uMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementL2h() const {
   return _uImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementL2h(const double& uImprovementL2h) {
   _uImprovementL2h = uImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUImprovementMax() const {
   return _uImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUImprovementMax(const double& uImprovementMax) {
   _uImprovementMax = uImprovementMax;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getUMaxPerDimension() const {
   return _uMaxPerDimension;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
   _uMaxPerDimension = (uMaxPerDimension);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._elementType, persistentRecords._LGSMaxIterations, persistentRecords._LGSResidual, persistentRecords._odeTimestepnumber, persistentRecords._odeTime, persistentRecords._odeTau, persistentRecords._numberOfVertices, persistentRecords._offset, persistentRecords._size, persistentRecords._plotterPlotDebugInfo, persistentRecords._plotVTKFiles, persistentRecords._scenarioRe, persistentRecords._scenarioEta, persistentRecords._scenarioRho, persistentRecords._scenarioCharacteristicLength, persistentRecords._pL2h, persistentRecords._pMax, persistentRecords._pImprovementL2h, persistentRecords._pImprovementMax, persistentRecords._uL2h, persistentRecords._uMax, persistentRecords._uImprovementL2h, persistentRecords._uImprovementMax, persistentRecords._uMaxPerDimension, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked(const ElementType& elementType, const int& LGSMaxIterations, const double& LGSResidual, const int& odeTimestepnumber, const double& odeTime, const double& odeTau, const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices, const tarch::la::Vector<DIMENSIONS,double>& offset, const tarch::la::Vector<DIMENSIONS,double>& size, const bool& plotterPlotDebugInfo, const bool& plotVTKFiles, const double& scenarioRe, const double& scenarioEta, const double& scenarioRho, const double& scenarioCharacteristicLength, const double& pL2h, const double& pMax, const double& pImprovementL2h, const double& pImprovementMax, const double& uL2h, const double& uMax, const double& uImprovementL2h, const double& uImprovementMax, const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(elementType, LGSMaxIterations, LGSResidual, odeTimestepnumber, odeTime, odeTau, numberOfVertices, offset, size, plotterPlotDebugInfo, plotVTKFiles, scenarioRe, scenarioEta, scenarioRho, scenarioCharacteristicLength, pL2h, pMax, pImprovementL2h, pImprovementMax, uL2h, uMax, uImprovementL2h, uImprovementMax, uMaxPerDimension, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::DebugElementType peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getElementType() const {
   return _persistentRecords._elementType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setElementType(const DebugElementType& elementType) {
   _persistentRecords._elementType = elementType;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSMaxIterations() const {
   return _persistentRecords._LGSMaxIterations;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSMaxIterations(const int& LGSMaxIterations) {
   _persistentRecords._LGSMaxIterations = LGSMaxIterations;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getLGSResidual() const {
   return _persistentRecords._LGSResidual;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setLGSResidual(const double& LGSResidual) {
   _persistentRecords._LGSResidual = LGSResidual;
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTimestepnumber() const {
   return _persistentRecords._odeTimestepnumber;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTimestepnumber(const int& odeTimestepnumber) {
   _persistentRecords._odeTimestepnumber = odeTimestepnumber;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTime() const {
   return _persistentRecords._odeTime;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTime(const double& odeTime) {
   _persistentRecords._odeTime = odeTime;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOdeTau() const {
   return _persistentRecords._odeTau;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOdeTau(const double& odeTau) {
   _persistentRecords._odeTau = odeTau;
}



tarch::la::Vector<DIMENSIONS,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices() const {
   return _persistentRecords._numberOfVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices) {
   _persistentRecords._numberOfVertices = (numberOfVertices);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfVertices(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._numberOfVertices[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfVertices(int elementIndex, const int& numberOfVertices) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._numberOfVertices[elementIndex]= numberOfVertices;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset() const {
   return _persistentRecords._offset;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset) {
   _persistentRecords._offset = (offset);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._offset[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setOffset(int elementIndex, const double& offset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._offset[elementIndex]= offset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize() const {
   return _persistentRecords._size;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(const tarch::la::Vector<DIMENSIONS,double>& size) {
   _persistentRecords._size = (size);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSize(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._size[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setSize(int elementIndex, const double& size) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._size[elementIndex]= size;
   
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotterPlotDebugInfo() const {
   return _persistentRecords._plotterPlotDebugInfo;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotterPlotDebugInfo(const bool& plotterPlotDebugInfo) {
   _persistentRecords._plotterPlotDebugInfo = plotterPlotDebugInfo;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPlotVTKFiles() const {
   return _persistentRecords._plotVTKFiles;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPlotVTKFiles(const bool& plotVTKFiles) {
   _persistentRecords._plotVTKFiles = plotVTKFiles;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRe() const {
   return _persistentRecords._scenarioRe;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRe(const double& scenarioRe) {
   _persistentRecords._scenarioRe = scenarioRe;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioEta() const {
   return _persistentRecords._scenarioEta;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioEta(const double& scenarioEta) {
   _persistentRecords._scenarioEta = scenarioEta;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioRho() const {
   return _persistentRecords._scenarioRho;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioRho(const double& scenarioRho) {
   _persistentRecords._scenarioRho = scenarioRho;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getScenarioCharacteristicLength() const {
   return _persistentRecords._scenarioCharacteristicLength;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setScenarioCharacteristicLength(const double& scenarioCharacteristicLength) {
   _persistentRecords._scenarioCharacteristicLength = scenarioCharacteristicLength;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPL2h() const {
   return _persistentRecords._pL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPL2h(const double& pL2h) {
   _persistentRecords._pL2h = pL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPMax() const {
   return _persistentRecords._pMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPMax(const double& pMax) {
   _persistentRecords._pMax = pMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementL2h() const {
   return _persistentRecords._pImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementL2h(const double& pImprovementL2h) {
   _persistentRecords._pImprovementL2h = pImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPImprovementMax() const {
   return _persistentRecords._pImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setPImprovementMax(const double& pImprovementMax) {
   _persistentRecords._pImprovementMax = pImprovementMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUL2h() const {
   return _persistentRecords._uL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUL2h(const double& uL2h) {
   _persistentRecords._uL2h = uL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMax() const {
   return _persistentRecords._uMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMax(const double& uMax) {
   _persistentRecords._uMax = uMax;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementL2h() const {
   return _persistentRecords._uImprovementL2h;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementL2h(const double& uImprovementL2h) {
   _persistentRecords._uImprovementL2h = uImprovementL2h;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUImprovementMax() const {
   return _persistentRecords._uImprovementMax;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUImprovementMax(const double& uImprovementMax) {
   _persistentRecords._uImprovementMax = uImprovementMax;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension() const {
   return _persistentRecords._uMaxPerDimension;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(const tarch::la::Vector<DIMENSIONS,double>& uMaxPerDimension) {
   _persistentRecords._uMaxPerDimension = (uMaxPerDimension);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getUMaxPerDimension(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._uMaxPerDimension[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setUMaxPerDimension(int elementIndex, const double& uMaxPerDimension) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._uMaxPerDimension[elementIndex]= uMaxPerDimension;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString(const DebugElementType& param) {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getDebugElementTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getDebugElementTypeMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::convert() const{
   return RegularGridFluidStateEnhancedDivFreeEulerExplicit(
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
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 32;
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
      RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._elementType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSMaxIterations))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._LGSResidual))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTimestepnumber))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTime))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._odeTau))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfVertices[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._offset[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._size[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotterPlotDebugInfo))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._plotVTKFiles))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRe))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioEta))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioRho))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._scenarioCharacteristicLength))), 		&disp[14] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pL2h))), 		&disp[15] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pMax))), 		&disp[16] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementL2h))), 		&disp[17] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._pImprovementMax))), 		&disp[18] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uL2h))), 		&disp[19] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMax))), 		&disp[20] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementL2h))), 		&disp[21] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uImprovementMax))), 		&disp[22] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._uMaxPerDimension[0]))), 		&disp[23] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._meshWidth[0]))), 		&disp[24] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[25] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[26] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[27] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[28] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[29] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[30] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidStateEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._elementType))), 		&disp[31] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidStateEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



