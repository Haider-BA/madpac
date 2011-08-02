#include "peano/applications/faxen/RegularGridState.h"

#include "peano/applications/faxen/RegularGridCell.h"
#include "peano/applications/faxen/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::faxen::RegularGridState::RegularGridState():
Base() {
	_stateData.setFileNumber(0);
	_stateData.setT(0.0);
}

peano::applications::faxen::RegularGridState::RegularGridState(const Base::PersistentState& argument):
		  Base(argument) {
	// @todo Insert your code here
}


void peano::applications::faxen::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>& checkpoint ) const {
	// @todo Insert your code here
}


void peano::applications::faxen::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>& checkpoint ) {
	// @todo Insert your code here
}


double peano::applications::faxen::RegularGridState::getRelaxationFactor() const{
	return _stateData.getOmega();
}

void peano::applications::faxen::RegularGridState::setRelaxationFactor(double omega){
	_stateData.setOmega(omega);
}

double peano::applications::faxen::RegularGridState::getUpwindDiffFactor() const{
	return _stateData.getGamma();
}

void peano::applications::faxen::RegularGridState::setUpwindDiffFactor(double gamma){
	_stateData.setGamma(gamma);
}

double peano::applications::faxen::RegularGridState::getTolerance() const{
	return _stateData.getEps();
}

void peano::applications::faxen::RegularGridState::setTolerance(double epsilon){
	_stateData.setEps(epsilon);
}

int peano::applications::faxen::RegularGridState::getItermax() const{
	return _stateData.getItermax();
}

void peano::applications::faxen::RegularGridState::setItermax(int itermax){
	_stateData.setItermax(itermax);
}

double peano::applications::faxen::RegularGridState::getResidualNorm() const{
	return _stateData.getRes();
}

void peano::applications::faxen::RegularGridState::setResidualNorm(double res){
	_stateData.setRes(res);
}

double peano::applications::faxen::RegularGridState::getReynoldsNumber() const{
	return _stateData.getRe();
}

void peano::applications::faxen::RegularGridState::setReynoldsNumber(double Re){
	_stateData.setRe(Re);
}

double peano::applications::faxen::RegularGridState::getGravityX() const{
	return _stateData.getGX();
}

void peano::applications::faxen::RegularGridState::setGravityX(double GX){
	_stateData.setGX(GX);
}

double peano::applications::faxen::RegularGridState::getGravityY() const{
	return _stateData.getGY();
}

void peano::applications::faxen::RegularGridState::setGravityY(double GY){
	_stateData.setGY(GY);
}

double peano::applications::faxen::RegularGridState::getInitialP() const{
	return _stateData.getPI();
}

void peano::applications::faxen::RegularGridState::setInitialP(double PI){
	_stateData.setPI(PI);
}

double peano::applications::faxen::RegularGridState::getInitialU() const{
	return _stateData.getVI();
}

void peano::applications::faxen::RegularGridState::setInitialU(double UI){
	_stateData.setUI(UI);
}

double peano::applications::faxen::RegularGridState::getInitialV() const{
	return _stateData.getUI();
}

void peano::applications::faxen::RegularGridState::setInitialV(double VI){
	_stateData.setVI(VI);
}

double peano::applications::faxen::RegularGridState::getTime() const{
	return _stateData.getT();
}

void peano::applications::faxen::RegularGridState::resetTime(){
	_stateData.setT(0.0);
}

double peano::applications::faxen::RegularGridState::getTimeSafetyFactor() const{
	return _stateData.getTau();
}

void peano::applications::faxen::RegularGridState::setTimeSafetyFactor(double tau){
	_stateData.setTau(tau);
}

double peano::applications::faxen::RegularGridState::getXlength() const{
	return _stateData.getXlength();
}

void peano::applications::faxen::RegularGridState::setXlength(double xlength){
	_stateData.setXlength(xlength);
}

double peano::applications::faxen::RegularGridState::getYlength() const{
	return _stateData.getYlength();
}

void peano::applications::faxen::RegularGridState::setYlength(double ylength){
	_stateData.setYlength(ylength);
}

double peano::applications::faxen::RegularGridState::getTEnd() const{
	return _stateData.getTEnd();
}

void peano::applications::faxen::RegularGridState::setTEnd(double tEnd){
	_stateData.setTEnd(tEnd);
}

double peano::applications::faxen::RegularGridState::getDelt() const{
	return _stateData.getDelt();
}

void peano::applications::faxen::RegularGridState::setDelt(double delt){
	_stateData.setDelt(delt);
}

double peano::applications::faxen::RegularGridState::getDelx() const{
	return _stateData.getDelx();
}

void peano::applications::faxen::RegularGridState::setDelx(double delx){
	_stateData.setDelx(delx);
}

double peano::applications::faxen::RegularGridState::getDely() const{
	return _stateData.getDely();
}

void peano::applications::faxen::RegularGridState::setDely(double dely){
	_stateData.setDely(dely);
}

int peano::applications::faxen::RegularGridState::getFilenameCounterAndIncrementIt() {
  _stateData.setFileNumber( _stateData.getFileNumber()+1 );
  return _stateData.getFileNumber()-1;
}

#ifdef Parallel
void peano::applications::faxen::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
	Base::mergeWithWorkerState(workerState);
	// @todo Insert your code here
}
#endif

