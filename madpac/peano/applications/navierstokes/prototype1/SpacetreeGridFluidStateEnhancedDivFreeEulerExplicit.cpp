#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit" );

peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::mergeWithWorkerState(const SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
/// start manually introduced
peano::applications::navierstokes::prototype1::ElementType
peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getElementType() const{
  return Base::_stateData.getElementType();
}

void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setElementType
(
  const peano::applications::navierstokes::prototype1::ElementType newValue
) {
  Base::_stateData.setElementType(
      newValue
  );
}


int peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSMaxIterations() const {
  return Base::_stateData.getLGSMaxIterations();
}

void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSMaxIterations(
  const int newValue
) {
  Base::_stateData.setLGSMaxIterations(newValue);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getLGSResidual() const {
  return Base::_stateData.getLGSResidual();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setLGSResidual(
  const double newValue
) {
  Base::_stateData.setLGSResidual(newValue);
}


int peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTimestepnumber() const {
  return Base::_stateData.getOdeTimestepnumber();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTimestepnumber(
  const int newValue
) {
  Base::_stateData.setOdeTimestepnumber(newValue);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTime() const {
  return Base::_stateData.getOdeTime();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTime(
  const double newValue
) {
  Base::_stateData.setOdeTime(newValue);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTau() const {
  return Base::_stateData.getOdeTau();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTau(
  const double newValue
) {
  Base::_stateData.setOdeTau(newValue);
}


bool peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPlotterPlotDebugInfo() const {
  return Base::_stateData.getPlotterPlotDebugInfo();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPlotterPlotDebugInfo(
  const bool newValue
) {
  Base::_stateData.setPlotterPlotDebugInfo(newValue);
}

void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUseVTKFiles
(
  bool newValue
) {
  Base::_stateData.setPlotVTKFiles(newValue);
}

bool peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::useVTKFiles()
{
  return Base::_stateData.getPlotVTKFiles();
}

double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRe() const {
  return Base::_stateData.getScenarioRe();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRe(
  const double& newScenarioRe
) {
  Base::_stateData.setScenarioRe(newScenarioRe);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioEta() const {
  return Base::_stateData.getScenarioEta();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioEta(
  const double& newScenarioEta
) {
  Base::_stateData.setScenarioEta(newScenarioEta);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRho() const {
  return Base::_stateData.getScenarioRho();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRho(
  const double& newScenarioRho
) {
  Base::_stateData.setScenarioRho(newScenarioRho);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioCharacteristicLength() const {
  return Base::_stateData.getScenarioCharacteristicLength();
}


void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioCharacteristicLength(
  const double& newScenarioCharacteristicLength
) {
  Base::_stateData.setScenarioCharacteristicLength(newScenarioCharacteristicLength);
}


double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPL2h() const {
  return Base::_stateData.getPL2h();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPMax() const {
  return Base::_stateData.getPMax();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementL2h() const {
  return Base::_stateData.getPImprovementL2h();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementMax() const {
  return Base::_stateData.getPImprovementMax();
}
void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setPMeasurementData(
  const double pL2h,
  const double pMax,
  const double pL2hImprovement,
  const double pMaxImprovement
) {
  Base::_stateData.setPL2h(pL2h);
  Base::_stateData.setPMax(pMax);
  Base::_stateData.setPImprovementL2h(pL2hImprovement);
  Base::_stateData.setPImprovementMax(pMaxImprovement);
}

double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUL2h() const {
  return Base::_stateData.getUL2h();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMax() const {
  return Base::_stateData.getUMax();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementL2h() const {
  return Base::_stateData.getUImprovementL2h();
}
double peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementMax() const {
  return Base::_stateData.getUImprovementMax();
}
Vector peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension() const {
  return Base::_stateData.getUMaxPerDimension();
}
void peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::setUMeasurementData(
  const double uL2h,
  const double uMax,
  const double uL2hImprovement,
  const double uMaxImprovement,
  const double uMaxPerDimension
) {
  Base::_stateData.setUL2h(uL2h);
  Base::_stateData.setUMax(uMax);
  Base::_stateData.setUImprovementL2h(uL2hImprovement);
  Base::_stateData.setUImprovementMax(uMaxImprovement);
  Base::_stateData.setUMaxPerDimension(Vector(uMaxPerDimension));
}
 
