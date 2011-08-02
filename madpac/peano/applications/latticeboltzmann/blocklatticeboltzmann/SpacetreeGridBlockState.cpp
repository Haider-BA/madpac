#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockState.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::SpacetreeGridBlockState::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::SpacetreeGridBlockState():
  Base() {
  Base::_stateData.setTimestep(0);
  Base::_stateData.setNumberTimestepsPerPlotting(1);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::SpacetreeGridBlockState(const Base::PersistentState& argument):
  Base(argument) {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>& checkpoint ) const {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>& checkpoint ) {
}


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::mergeWithWorkerState(const SpacetreeGridBlockState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // merge global number of cells
  Base::_stateData.setGlobalNumberOfCells(Base::_stateData.getGlobalNumberOfCells()+workerState.getLocalNumberOfCells());

  // merge global cpu time
  if (Base::_stateData.getGlobalCpuTime() < workerState.getGlobalCpuTime()){
    Base::_stateData.setGlobalCpuTime(workerState.getGlobalCpuTime());
  }
}
#endif



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setLevel(int level){
  Base::_stateData.setLevel(level);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::getLevel() const {
  return Base::_stateData.getLevel();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setNumberLevels(int numberLevels){
  Base::_stateData.setNumberLevels(numberLevels);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getNumberLevels() const {
  return Base::_stateData.getNumberLevels();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::setDynamicGeometry(bool reflag){
  Base::_stateData.setDynamicGeometry((short int) reflag);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::hasDynamicGeometry() const {
  return (Base::_stateData.getDynamicGeometry() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setComputeForces(bool computeForces){
  Base::_stateData.setComputeForces((short int) computeForces);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
computeForces() const {
  return (Base::_stateData.getComputeForces() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setDx(double dx) {
  Base::_stateData.setDx(dx);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getDx() const {
  return Base::_stateData.getDx();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setDt(double dt) {
  Base::_stateData.setDt(dt);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getDt() const {
  return Base::_stateData.getDt();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setNumberTimesteps(int numberTimesteps) {
  Base::_stateData.setNumberTimesteps(numberTimesteps);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getNumberTimesteps() const {
  return Base::_stateData.getNumberTimesteps();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setDensity(double density){
  Base::_stateData.setDensity(density);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getDensity() const {
  return Base::_stateData.getDensity();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setCollisionModelId(
tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelId
){
  Base::_stateData.setCollisionModelId(collisionModelId);
}


tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getCollisionModelId() const {
  return Base::_stateData.getCollisionModelId();
}


short int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getCollisionModelId(int level) const {
  assertion(level-Base::_stateData.getLevel() > -1);
  assertion(level < Base::_stateData.getNumberLevels());
  return Base::_stateData.getCollisionModelId()(level-Base::_stateData.getLevel());
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setViscosityL(double viscosity) {
  Base::_stateData.setViscosityL(viscosity);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getViscosityL() const {
  return Base::_stateData.getViscosityL();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setBulkViscosityL(double bulkViscosity) {
  Base::_stateData.setBulkViscosityL(bulkViscosity);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getBulkViscosityL() const {
  return Base::_stateData.getBulkViscosityL();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setTau(double tau) {
  Base::_stateData.setTau(tau);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getTau() const {
  return Base::_stateData.getTau();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setBoltzmannConstant(double kB) {
  Base::_stateData.setBoltzmannConstant(kB);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getBoltzmannConstant() const {
  return Base::_stateData.getBoltzmannConstant();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setMu(double mu) {
  Base::_stateData.setMu(mu);
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getMu() const {
  return Base::_stateData.getMu();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
  Base::_stateData.setGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getGamma() const {
  return Base::_stateData.getGamma();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setMrtHumieresGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
  Base::_stateData.setMrtHumieresGamma(gamma);
}


tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getMrtHumieresGamma() const {
  return Base::_stateData.getMrtHumieresGamma();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setNumberTimestepsPerPlotting(int steps) {
  Base::_stateData.setNumberTimestepsPerPlotting(steps);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getNumberTimestepsPerPlotting() const {
  return Base::_stateData.getNumberTimestepsPerPlotting();
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getTimestep() const {
  return Base::_stateData.getTimestep();
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
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


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::plotVTK() const {
  return (Base::_stateData.getPlotVtk() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setPlotVTK(bool plotVtk) {
  // reset timestep
  Base::_stateData.setTimestep(0);

  Base::_stateData.setPlotVtk((short int) plotVtk);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
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


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getVTKFilename() const {
  char array[128];
  for (int i = 0; i < 128; i++){
    array[i] = Base::_stateData.getVtkFilename()(i);
  }
  std::string filename(array);
  return filename;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setMeasurePerformance(bool measurePerformance){
  Base::_stateData.setMeasurePerformance((short int) measurePerformance);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
measurePerformance() const {
  return (Base::_stateData.getMeasurePerformance() == 1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
setLocalNumberOfCells(int cells){
  Base::_stateData.setLocalNumberOfCells(cells);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::
getLocalNumberOfCells() const {
  return Base::_stateData.getLocalNumberOfCells();
}



#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::setGlobalNumberOfCells(int cells){
  Base::_stateData.setGlobalNumberOfCells(cells);
}

int peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::getGlobalNumberOfCells() const{
  return Base::_stateData.getGlobalNumberOfCells();
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::setGlobalCpuTime(double time){
  Base::_stateData.setGlobalCpuTime(time);
}

double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState::getGlobalCpuTime() const {
  return Base::_stateData.getGlobalCpuTime();
}
#endif
