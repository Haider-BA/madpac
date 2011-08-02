#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockState.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::RegularGridBlockState::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::RegularGridBlockState():
  Base() {
  Base::_stateData.setTimestep(0);
  Base::_stateData.setNumberTimestepsPerPlotting(1);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::RegularGridBlockState(const Base::PersistentState& argument):
  Base(argument) {

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>& checkpoint ) const {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>& checkpoint ) {

}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setLevel(int level){
  Base::_stateData.setLevel(level);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::getLevel() const {
  return Base::_stateData.getLevel();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setNumberLevels(int numberLevels){
  Base::_stateData.setNumberLevels(numberLevels);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getNumberLevels() const {
  return Base::_stateData.getNumberLevels();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::setDynamicGeometry(bool reflag){
  Base::_stateData.setDynamicGeometry((short int) reflag);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::hasDynamicGeometry() const {
  return (Base::_stateData.getDynamicGeometry() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setComputeForces(bool computeForces){
  Base::_stateData.setComputeForces((short int) computeForces);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
computeForces() const {
  return (Base::_stateData.getComputeForces() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setDx(double dx) {
  Base::_stateData.setDx(dx);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getDx() const {
  return Base::_stateData.getDx();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setDt(double dt) {
  Base::_stateData.setDt(dt);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getDt() const {
  return Base::_stateData.getDt();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setNumberTimesteps(int numberTimesteps) {
  Base::_stateData.setNumberTimesteps(numberTimesteps);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getNumberTimesteps() const {
  return Base::_stateData.getNumberTimesteps();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setDensity(double density){
  Base::_stateData.setDensity(density);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getDensity() const {
  return Base::_stateData.getDensity();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setCollisionModelId(
tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelId
){
  Base::_stateData.setCollisionModelId(collisionModelId);
}


tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getCollisionModelId() const {
  return Base::_stateData.getCollisionModelId();
}


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getCollisionModelId(int level) const {
  assertion(level-Base::_stateData.getLevel() > -1);
  assertion(level < Base::_stateData.getNumberLevels());
  return Base::_stateData.getCollisionModelId()(level-Base::_stateData.getLevel());
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setViscosityL(double viscosity) {
  Base::_stateData.setViscosityL(viscosity);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getViscosityL() const {
  return Base::_stateData.getViscosityL();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setBulkViscosityL(double bulkViscosity) {
  Base::_stateData.setBulkViscosityL(bulkViscosity);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getBulkViscosityL() const {
  return Base::_stateData.getBulkViscosityL();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setTau(double tau) {
  Base::_stateData.setTau(tau);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getTau() const {
  return Base::_stateData.getTau();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setBoltzmannConstant(double kB) {
  Base::_stateData.setBoltzmannConstant(kB);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getBoltzmannConstant() const {
  return Base::_stateData.getBoltzmannConstant();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setMu(double mu) {
  Base::_stateData.setMu(mu);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getMu() const {
  return Base::_stateData.getMu();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
  Base::_stateData.setGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getGamma() const {
  return Base::_stateData.getGamma();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setMrtHumieresGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
  Base::_stateData.setMrtHumieresGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getMrtHumieresGamma() const {
  return Base::_stateData.getMrtHumieresGamma();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setNumberTimestepsPerPlotting(int steps) {
  Base::_stateData.setNumberTimestepsPerPlotting(steps);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getNumberTimestepsPerPlotting() const {
  return Base::_stateData.getNumberTimestepsPerPlotting();
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getTimestep() const {
  return Base::_stateData.getTimestep();
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
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


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::plotVTK() const {
  return (Base::_stateData.getPlotVtk() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setPlotVTK(bool plotVtk) {
  // reset timestep
  Base::_stateData.setTimestep(0);

  Base::_stateData.setPlotVtk((short int) plotVtk);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setVTKFilename(std::string filename){
  if (filename.length() > 128){
    logError("setFilename()", "Filename too long!");
    assertion(false);
  }
  tarch::la::Vector<128,signed char> charName;
  for (unsigned int i = 0; i < filename.length(); i++){
    charName(i) = filename[i];
  }
  Base::_stateData.setVtkFilename(charName);
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getVTKFilename() const {
  char array[128];
  for (int i = 0; i < 128; i++){
    array[i] = Base::_stateData.getVtkFilename()(i);
  }
  std::string filename(array);
  return filename;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setMeasurePerformance(bool measurePerformance){
  Base::_stateData.setMeasurePerformance((short int) measurePerformance);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
measurePerformance() const {
  return (Base::_stateData.getMeasurePerformance() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
setLocalNumberOfCells(int cells){
  Base::_stateData.setLocalNumberOfCells(cells);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::
getLocalNumberOfCells() const {
  return Base::_stateData.getLocalNumberOfCells();
}



#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::setGlobalNumberOfCells(int cells){
  Base::_stateData.setGlobalNumberOfCells(cells);
}

int peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::getGlobalNumberOfCells() const{
  return Base::_stateData.getGlobalNumberOfCells();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::setGlobalCpuTime(double time){
  Base::_stateData.setGlobalCpuTime(time);
}

double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::getGlobalCpuTime() const {
  return Base::_stateData.getGlobalCpuTime();
}
#endif


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::mergeWithWorkerState(const RegularGridBlockState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // merge global number of cells
  Base::_stateData.setGlobalNumberOfCells(Base::_stateData.getGlobalNumberOfCells()+workerState.getLocalNumberOfCells());

  // merge global cpu time
  if (Base::_stateData.getGlobalCpuTime() < workerState.getGlobalCpuTime()){
    Base::_stateData.setGlobalCpuTime(workerState.getGlobalCpuTime());
  }
}
#endif
