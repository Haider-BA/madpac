#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"


double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::_pL2h = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::_pMax = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::_pImprovementL2h = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::_pImprovementMax = 0.0;



peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::RegularGridFluidCellEnhancedDivFreeEulerExplicit():
  Base() { 
  setFluidCellType( Base::Records::NOT_INNER );
  setP(0.0);
  setRhsPPE(0.0);
}


peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::RegularGridFluidCellEnhancedDivFreeEulerExplicit(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}

void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::resetMeasurementMembers(){
  _pL2h = 0.0;
  _pMax = 0.0;
  _pImprovementL2h = 0.0;
  _pImprovementMax = 0.0;
}



void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setPAndCalculatePMeasurement(
  const double& newPressureValue,
  const Vector& h
  ) {
  assertion( getFluidCellType()==Base::Records::INNER );

  calculatePMeasurement(newPressureValue, getP(), h);

  setP( newPressureValue );
}



void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::calculatePMeasurement(
  const double& newPressureValue,
  const double& oldPressureValue,
  const Vector& h
  ) {
  assertion( getFluidCellType()==Base::Records::INNER);

  double pressureImprovement = std::abs((oldPressureValue) - (newPressureValue));

  double newP = std::abs(newPressureValue);

  if ( tarch::la::greater(newP, _pMax) ) {
    _pMax = newP;
  }
  if ( tarch::la::greater(pressureImprovement, _pImprovementMax) ) {
    _pImprovementMax = pressureImprovement;
  }

  newP = newP * newP;
  pressureImprovement = pressureImprovement * pressureImprovement;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( tarch::la::greater(h(d), 0.0) );
    newP                *= h(d);
    pressureImprovement *= h(d);
  }
  _pL2h            += newP;
  _pImprovementL2h += pressureImprovement;
}



double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getPL2h(){
  return std::sqrt(_pL2h);
}



double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getPMax(){
  return _pMax;
}



double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getPImprovementL2h(){
  return std::sqrt(_pImprovementL2h);
}



double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getPImprovementMax(){
  return _pImprovementMax;
}



peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::Base::Records::FluidCellType
peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getFluidCellType() const {
  return Base::_cellData.getFluidCellType();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setFluidCellType(const Base::Records::FluidCellType& fluidCellType) {
  Base::_cellData.setFluidCellType(fluidCellType);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getP() const {
  return Base::_cellData.getP();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setP(const double& p) {
  Base::_cellData.setP(p);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getRhsPPE() const {
  return Base::_cellData.getRhsPPE();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setRhsPPE(const double& rhsPPE) {
  Base::_cellData.setRhsPPE(rhsPPE);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::getResiduum() const {
  return Base::_cellData.getResiduum();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::setResiduum(
  const double& newValue
) {
  Base::_cellData.setResiduum(newValue);
}


void peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::resetResiduum() {
  Base::_cellData.setResiduum(0.0);
}
