#include "peano/applications/faxen/RegularGridCell.h"


peano::applications::faxen::RegularGridCell::RegularGridCell():
  Base() { 
  // @todo Insert your code here
}


peano::applications::faxen::RegularGridCell::RegularGridCell(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}

double peano::applications::faxen::RegularGridCell::getP() const {
	return Base::_cellData.getP();
}

void peano::applications::faxen::RegularGridCell::setP(const double& P){
	Base::_cellData.setP(P);
}

double peano::applications::faxen::RegularGridCell::getU() const {
	return Base::_cellData.getU();
}

void peano::applications::faxen::RegularGridCell::setU(const double& U){
	Base::_cellData.setU(U);
}

double peano::applications::faxen::RegularGridCell::getV() const {
	return Base::_cellData.getV();
}

void peano::applications::faxen::RegularGridCell::setV(const double& V){
	Base::_cellData.setV(V);
}

double peano::applications::faxen::RegularGridCell::getF() const {
	return Base::_cellData.getF();
}

void peano::applications::faxen::RegularGridCell::setF(const double& F){
	Base::_cellData.setF(F);
}

double peano::applications::faxen::RegularGridCell::getG() const {
	return Base::_cellData.getG();
}

void peano::applications::faxen::RegularGridCell::setG(const double& G){
	Base::_cellData.setG(G);
}

double peano::applications::faxen::RegularGridCell::getRhs() const {
	return Base::_cellData.getRhs();
}

void peano::applications::faxen::RegularGridCell::setRhs(const double& rhs){
	Base::_cellData.setRhs(rhs);
}

double peano::applications::faxen::RegularGridCell::getRes() const {
	return Base::_cellData.getRes();
}

void peano::applications::faxen::RegularGridCell::setRes(const double& res){
	Base::_cellData.setRes(res);
}
