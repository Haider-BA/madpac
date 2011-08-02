#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"


peano::applications::faxen::lbf::RegularGridBlockCell::RegularGridBlockCell():
Base() {
	// @todo Insert your code here
}


peano::applications::faxen::lbf::RegularGridBlockCell::RegularGridBlockCell(const Base::PersistentCell& argument):
				  Base(argument) {
	// @todo Insert your code here
}

/**
 * Implementation of proxies for the Faxen component
 */

double peano::applications::faxen::lbf::RegularGridBlockCell::getP() const {
	return Base::_cellData.getP();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setP(const double& P){
	Base::_cellData.setP(P);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getU() const {
	return Base::_cellData.getU();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setU(const double& U){
	Base::_cellData.setU(U);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getV() const {
	return Base::_cellData.getV();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setV(const double& V){
	Base::_cellData.setV(V);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getF() const {
	return Base::_cellData.getF();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setF(const double& F){
	Base::_cellData.setF(F);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getG() const {
	return Base::_cellData.getG();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setG(const double& G){
	Base::_cellData.setG(G);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getRhs() const {
	return Base::_cellData.getRhs();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setRhs(const double& rhs){
	Base::_cellData.setRhs(rhs);
}

double peano::applications::faxen::lbf::RegularGridBlockCell::getRes() const {
	return Base::_cellData.getRes();
}

void peano::applications::faxen::lbf::RegularGridBlockCell::setRes(const double& res){
	Base::_cellData.setRes(res);
}
