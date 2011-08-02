#include "peano/applications/faxen/lbf/RegularGridBlockState.h"

#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"
#include "peano/utils/Loop.h"

tarch::logging::Log
peano::applications::faxen::lbf::RegularGridBlockState::RegularGridBlockState::_log(
		"peano::applications::faxen::lbf::RegularGridBlockState"
);


peano::applications::faxen::lbf::RegularGridBlockState::RegularGridBlockState():
						  Base() {
	/**
	 * Lattice Boltzmann component
	 */

	Base::_stateData.setTimestep(0);
	Base::_stateData.setNumberTimestepsPerPlotting(1);

	/**
	 * Faxen component
	 */
	_stateData.setFileNumber(0);
	_stateData.setT(0.0);
}


peano::applications::faxen::lbf::RegularGridBlockState::RegularGridBlockState(const Base::PersistentState& argument):
						  Base(argument) {

}


void peano::applications::faxen::lbf::RegularGridBlockState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>& checkpoint ) const {
}


void peano::applications::faxen::lbf::RegularGridBlockState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>& checkpoint ) {

}

/**
 * Implementation of functions of Lattice Boltzmann component
 */
void peano::applications::faxen::lbf::RegularGridBlockState::
setLevel(int level){
	Base::_stateData.setLevel(level);
}


int peano::applications::faxen::lbf::RegularGridBlockState::getLevel() const {
	return Base::_stateData.getLevel();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setNumberLevels(int numberLevels){
	Base::_stateData.setNumberLevels(numberLevels);
}


int peano::applications::faxen::lbf::RegularGridBlockState::
getNumberLevels() const {
	return Base::_stateData.getNumberLevels();
}


void peano::applications::faxen::lbf::RegularGridBlockState::setDynamicGeometry(bool reflag){
	Base::_stateData.setDynamicGeometry((short int) reflag);
}


bool peano::applications::faxen::lbf::RegularGridBlockState::hasDynamicGeometry() const {
	return (Base::_stateData.getDynamicGeometry() == 1);
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setComputeForces(bool computeForces){
	Base::_stateData.setComputeForces((short int) computeForces);
}


bool peano::applications::faxen::lbf::RegularGridBlockState::
computeForces() const {
	return (Base::_stateData.getComputeForces() == 1);
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setDx(double dx) {
	Base::_stateData.setDx(dx);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getDx() const {
	return Base::_stateData.getDx();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setDt(double dt) {
	Base::_stateData.setDt(dt);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getDt() const {
	return Base::_stateData.getDt();
}

void peano::applications::faxen::lbf::RegularGridBlockState::
setNumberTimesteps(int numberTimesteps) {
	Base::_stateData.setNumberTimesteps(numberTimesteps);
}


int peano::applications::faxen::lbf::RegularGridBlockState::
getNumberTimesteps() const {
	return Base::_stateData.getNumberTimesteps();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setDensity(double density){
	Base::_stateData.setDensity(density);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getDensity() const {
	return Base::_stateData.getDensity();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setCollisionModelId(
		tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelId
){
	Base::_stateData.setCollisionModelId(collisionModelId);
}


tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>
peano::applications::faxen::lbf::RegularGridBlockState::
getCollisionModelId() const {
	return Base::_stateData.getCollisionModelId();
}


short int peano::applications::faxen::lbf::RegularGridBlockState::
getCollisionModelId(int level) const {
	assertion(level-Base::_stateData.getLevel() > -1);
	assertion(level < Base::_stateData.getNumberLevels());
	return Base::_stateData.getCollisionModelId()(level-Base::_stateData.getLevel());
}

void peano::applications::faxen::lbf::RegularGridBlockState::
setViscosityL(double viscosity) {
	Base::_stateData.setViscosityL(viscosity);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getViscosityL() const {
	return Base::_stateData.getViscosityL();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setBulkViscosityL(double bulkViscosity) {
	Base::_stateData.setBulkViscosityL(bulkViscosity);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getBulkViscosityL() const {
	return Base::_stateData.getBulkViscosityL();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setTau(double tau) {
	Base::_stateData.setTau(tau);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getTau() const {
	return Base::_stateData.getTau();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setBoltzmannConstant(double kB) {
	Base::_stateData.setBoltzmannConstant(kB);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getBoltzmannConstant() const {
	return Base::_stateData.getBoltzmannConstant();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setMu(double mu) {
	Base::_stateData.setMu(mu);
}


double peano::applications::faxen::lbf::RegularGridBlockState::
getMu() const {
	return Base::_stateData.getMu();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
	Base::_stateData.setGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::faxen::lbf::RegularGridBlockState::
getGamma() const {
	return Base::_stateData.getGamma();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setMrtHumieresGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
	Base::_stateData.setMrtHumieresGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::faxen::lbf::RegularGridBlockState::
getMrtHumieresGamma() const {
	return Base::_stateData.getMrtHumieresGamma();
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setNumberTimestepsPerPlotting(int steps) {
	Base::_stateData.setNumberTimestepsPerPlotting(steps);
}


int peano::applications::faxen::lbf::RegularGridBlockState::
getNumberTimestepsPerPlotting() const {
	return Base::_stateData.getNumberTimestepsPerPlotting();
}


int peano::applications::faxen::lbf::RegularGridBlockState::
getTimestep() const {
	return Base::_stateData.getTimestep();
}

void peano::applications::faxen::lbf::RegularGridBlockState::
setTimestep(int timestep) {
	Base::_stateData.setTimestep(timestep);
}


bool peano::applications::faxen::lbf::RegularGridBlockState::
triggerPlotting(){
	if (plotVTK()){
		assertion(Base::_stateData.getNumberTimestepsPerPlotting() != 0);
		bool triggerPlotting = (Base::_stateData.getTimestep()%Base::_stateData.getNumberTimestepsPerPlotting() == 0);
		int t = Base::_stateData.getTimestep()+1;
		Base::_stateData.setTimestep(t);
		return triggerPlotting;
	} else {
		return false;
	}
}


bool peano::applications::faxen::lbf::RegularGridBlockState::plotVTK() const {
	return (Base::_stateData.getPlotVtk() == 1);
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setPlotVTK(bool plotVtk) {
	// reset timestep
	Base::_stateData.setTimestep(0);

	Base::_stateData.setPlotVtk((short int) plotVtk);
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setVTKFilename(std::string filename){
	if (filename.length() > 128){
		logError("setFilename()", "Filename too long!");
		exit(EXIT_FAILURE);
	}
	tarch::la::Vector<128,signed char> charName;
	for (unsigned int i = 0; i < filename.length(); i++){
		charName(i) = filename[i];
	}
	Base::_stateData.setVtkFilename(charName);
}


std::string peano::applications::faxen::lbf::RegularGridBlockState::
getVTKFilename() const {
	char array[128];
	for (int i = 0; i < 128; i++){
		array[i] = Base::_stateData.getVtkFilename()(i);
	}
	std::string filename(array);
	return filename;
}



void peano::applications::faxen::lbf::RegularGridBlockState::
setMeasurePerformance(bool measurePerformance){
	Base::_stateData.setMeasurePerformance((short int) measurePerformance);
}


bool peano::applications::faxen::lbf::RegularGridBlockState::
measurePerformance() const {
	return (Base::_stateData.getMeasurePerformance() == 1);
}


void peano::applications::faxen::lbf::RegularGridBlockState::
setLocalNumberOfCells(int cells){
	Base::_stateData.setLocalNumberOfCells(cells);
}


int peano::applications::faxen::lbf::RegularGridBlockState::
getLocalNumberOfCells() const {
	return Base::_stateData.getLocalNumberOfCells();
}



#ifdef Parallel
void peano::applications::faxen::lbf::RegularGridBlockState::setGlobalNumberOfCells(int cells){
	Base::_stateData.setGlobalNumberOfCells(cells);
}

int peano::applications::faxen::lbf::RegularGridBlockState::getGlobalNumberOfCells() const{
	return Base::_stateData.getGlobalNumberOfCells();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setGlobalCpuTime(double time){
	Base::_stateData.setGlobalCpuTime(time);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getGlobalCpuTime() const {
	return Base::_stateData.getGlobalCpuTime();
}
#endif


#ifdef Parallel
void peano::applications::faxen::lbf::RegularGridBlockState::mergeWithWorkerState(const RegularGridBlockState& workerState) {
	Base::mergeWithWorkerState(workerState);
	// merge global number of cells
	Base::_stateData.setGlobalNumberOfCells(Base::_stateData.getGlobalNumberOfCells()+workerState.getLocalNumberOfCells());

	// merge global cpu time
	if (Base::_stateData.getGlobalCpuTime() < workerState.getGlobalCpuTime()){
		Base::_stateData.setGlobalCpuTime(workerState.getGlobalCpuTime());
	}
}
#endif

/**
 *  Faxen component proxies implementation
 */


#ifdef Parallel
void peano::applications::faxen::lbf::RegularGridBlockState::mergeWithWorkerState(const RegularGridBlockState& workerState) {
	Base::mergeWithWorkerState(workerState);
	// @todo Insert your code here
}
#endif

/**
 * Implementation of proxies for the Faxen component
 */

double peano::applications::faxen::lbf::RegularGridBlockState::getRelaxationFactor() const{
	return _stateData.getOmega();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setRelaxationFactor(double omega){
	_stateData.setOmega(omega);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getUpwindDiffFactor() const{
	return _stateData.getFgamma();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setUpwindDiffFactor(double gamma){
	_stateData.setFgamma(gamma);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getTolerance() const{
	return _stateData.getEps();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setTolerance(double epsilon){
	_stateData.setEps(epsilon);
}

int peano::applications::faxen::lbf::RegularGridBlockState::getItermax() const{
	return _stateData.getItermax();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setItermax(int itermax){
	_stateData.setItermax(itermax);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getResidualNorm() const{
	return _stateData.getRes();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setResidualNorm(double res){
	_stateData.setRes(res);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getReynoldsNumber() const{
	return _stateData.getRe();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setReynoldsNumber(double Re){
	_stateData.setRe(Re);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getGravityX() const{
	return _stateData.getGX();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setGravityX(double GX){
	_stateData.setGX(GX);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getGravityY() const{
	return _stateData.getGY();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setGravityY(double GY){
	_stateData.setGY(GY);
}

void peano::applications::faxen::lbf::RegularGridBlockState::setGravity(tarch::la::Vector<DIMENSIONS, double>& gravity){
	if(DIMENSIONS < 2){
		_log.error("setGravity()","valid only for 2D problems!");
		return;
	}
	setGravityX(gravity(0));
	setGravityY(gravity(1));
}

double peano::applications::faxen::lbf::RegularGridBlockState::getInitialP() const{
	return _stateData.getPI();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setInitialP(double PI){
	_stateData.setPI(PI);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getInitialU() const{
	return _stateData.getVI();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setInitialU(double UI){
	_stateData.setUI(UI);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getInitialV() const{
	return _stateData.getUI();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setInitialV(double VI){
	_stateData.setVI(VI);
}

void peano::applications::faxen::lbf::RegularGridBlockState::setInitialVelocity(tarch::la::Vector<DIMENSIONS,double>& velocity){
	if(DIMENSIONS < 2){
		_log.error("setGravity()","valid only for 2D problems!");
		return;
	}
	setInitialU(velocity(0));
	setInitialV(velocity(1));
}

double peano::applications::faxen::lbf::RegularGridBlockState::getTime() const{
	return _stateData.getT();
}

void peano::applications::faxen::lbf::RegularGridBlockState::resetTime(){
	_stateData.setT(0.0);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getTimeSafetyFactor() const{
	return _stateData.getFtau();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setTimeSafetyFactor(double tau){
	_stateData.setFtau(tau);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getXlength() const{
	return _stateData.getXlength();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setXlength(double xlength){
	_stateData.setXlength(xlength);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getYlength() const{
	return _stateData.getYlength();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setYlength(double ylength){
	_stateData.setYlength(ylength);
}

void peano::applications::faxen::lbf::RegularGridBlockState::setDomainSize(tarch::la::Vector<DIMENSIONS, double>& domainSize){
	if(DIMENSIONS < 2){
		_log.error("setDomainSize()","valid only for 2D problems!");
		return;
	}
	setXlength(domainSize(0));
	setYlength(domainSize(1));
}

double peano::applications::faxen::lbf::RegularGridBlockState::getTEnd() const{
	return _stateData.getTEnd();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setTEnd(double tEnd){
	_stateData.setTEnd(tEnd);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getDelt() const{
	return _stateData.getDelt();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setDelt(double delt){
	_stateData.setDelt(delt);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getDelx() const{
	return _stateData.getDelx();
}

void peano::applications::faxen::lbf::RegularGridBlockState::
setThresDt(double thresDt) {
	return Base::_stateData.setThresdelt(thresDt);
}

double peano::applications::faxen::lbf::RegularGridBlockState::
getThresDt() const{
	return Base::_stateData.getThresdelt();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setDelx(double delx){
	_stateData.setDelx(delx);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getDely() const{
	return _stateData.getDely();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setDely(double dely){
	_stateData.setDely(dely);
}

void peano::applications::faxen::lbf::RegularGridBlockState::setMeshSize(tarch::la::Vector<DIMENSIONS, double>& meshSize){
	if(DIMENSIONS < 2){
		_log.error("setMeshSize()","valid only for 2D problems!");
		return;
	}
	setDelx(meshSize(0));
	setDely(meshSize(1));
}

int peano::applications::faxen::lbf::RegularGridBlockState::getFilenameCounterAndIncrementIt() {
	_stateData.setFileNumber( _stateData.getFileNumber()+1 );
	return _stateData.getFileNumber()-1;
}

double peano::applications::faxen::lbf::RegularGridBlockState::getVisDelt(){
	return _stateData.getVisDelt();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setVisDelt(double vis_delt){
	_stateData.setVisDelt(vis_delt);
}

bool peano::applications::faxen::lbf::RegularGridBlockState::isOnlyNSE(){
	return _stateData.getOnlyNse();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setOnlyNSE(bool onlyNSE){
	_stateData.setOnlyNse(onlyNSE);
}

double peano::applications::faxen::lbf::RegularGridBlockState::getAvrExtractedDensity(){
	return _stateData.getAvrExtractedDensity();
}

void peano::applications::faxen::lbf::RegularGridBlockState::setAvrExtractedDensity(double avrExtractedDensity){
	_stateData.setAvrExtractedDensity(avrExtractedDensity);
}
