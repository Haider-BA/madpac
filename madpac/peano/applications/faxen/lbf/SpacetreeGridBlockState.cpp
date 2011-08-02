#include "peano/applications/faxen/lbf/SpacetreeGridBlockState.h"

#include "peano/applications/faxen/lbf/SpacetreeGridBlockCell.h"
#include "peano/applications/faxen/lbf/SpacetreeGridBlockVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


tarch::logging::Log
peano::applications::faxen::lbf::SpacetreeGridBlockState::SpacetreeGridBlockState::_log(
  "peano::applications::faxen::lbf::SpacetreeGridBlockState"
);

peano::applications::faxen::lbf::SpacetreeGridBlockState::SpacetreeGridBlockState():
  Base() { 
	  Base::_stateData.setTimestep(0);
	  Base::_stateData.setNumberTimestepsPerPlotting(1);
}


peano::applications::faxen::lbf::SpacetreeGridBlockState::SpacetreeGridBlockState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::faxen::lbf::SpacetreeGridBlockState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::SpacetreeGridBlockVertex, peano::applications::faxen::lbf::SpacetreeGridBlockCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::faxen::lbf::SpacetreeGridBlockState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::SpacetreeGridBlockVertex, peano::applications::faxen::lbf::SpacetreeGridBlockCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::faxen::lbf::SpacetreeGridBlockState::mergeWithWorkerState(const SpacetreeGridBlockState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // merge global number of cells
   Base::_stateData.setGlobalNumberOfCells(Base::_stateData.getGlobalNumberOfCells()+workerState.getLocalNumberOfCells());

   // merge global cpu time
   if (Base::_stateData.getGlobalCpuTime() < workerState.getGlobalCpuTime()){
     Base::_stateData.setGlobalCpuTime(workerState.getGlobalCpuTime());
}
#endif

   /**
    * Lattice Boltzmann component functions' implementation
    */

   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setLevel(int level){
     Base::_stateData.setLevel(level);
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::getLevel() const {
     return Base::_stateData.getLevel();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setNumberLevels(int numberLevels){
     Base::_stateData.setNumberLevels(numberLevels);
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getNumberLevels() const {
     return Base::_stateData.getNumberLevels();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::setDynamicGeometry(bool reflag){
     Base::_stateData.setDynamicGeometry((short int) reflag);
   }


   bool peano::applications::faxen::lbf::SpacetreeGridBlockState::hasDynamicGeometry() const {
     return (Base::_stateData.getDynamicGeometry() == 1);
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setComputeForces(bool computeForces){
     Base::_stateData.setComputeForces((short int) computeForces);
   }


   bool peano::applications::faxen::lbf::SpacetreeGridBlockState::
   computeForces() const {
     return (Base::_stateData.getComputeForces() == 1);
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setDx(double dx) {
     Base::_stateData.setDx(dx);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getDx() const {
     return Base::_stateData.getDx();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setDt(double dt) {
     Base::_stateData.setDt(dt);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getDt() const {
     return Base::_stateData.getDt();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setNumberTimesteps(int numberTimesteps) {
     Base::_stateData.setNumberTimesteps(numberTimesteps);
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getNumberTimesteps() const {
     return Base::_stateData.getNumberTimesteps();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setDensity(double density){
     Base::_stateData.setDensity(density);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getDensity() const {
     return Base::_stateData.getDensity();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setCollisionModelId(
   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelId
   ){
     Base::_stateData.setCollisionModelId(collisionModelId);
   }


   tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>
   peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getCollisionModelId() const {
     return Base::_stateData.getCollisionModelId();
   }


   short int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getCollisionModelId(int level) const {
     assertion(level-Base::_stateData.getLevel() > -1);
     assertion(level < Base::_stateData.getNumberLevels());
     return Base::_stateData.getCollisionModelId()(level-Base::_stateData.getLevel());
   }

   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setViscosityL(double viscosity) {
     Base::_stateData.setViscosityL(viscosity);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getViscosityL() const {
     return Base::_stateData.getViscosityL();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setBulkViscosityL(double bulkViscosity) {
     Base::_stateData.setBulkViscosityL(bulkViscosity);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getBulkViscosityL() const {
     return Base::_stateData.getBulkViscosityL();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setTau(double tau) {
     Base::_stateData.setTau(tau);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getTau() const {
     return Base::_stateData.getTau();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setBoltzmannConstant(double kB) {
     Base::_stateData.setBoltzmannConstant(kB);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getBoltzmannConstant() const {
     return Base::_stateData.getBoltzmannConstant();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setMu(double mu) {
     Base::_stateData.setMu(mu);
   }


   double peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getMu() const {
     return Base::_stateData.getMu();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
     Base::_stateData.setGamma(gamma);
   }


   tarch::la::Vector<LB_CURRENT_DIR,double>
   peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getGamma() const {
     return Base::_stateData.getGamma();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setMrtHumieresGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) {
     Base::_stateData.setMrtHumieresGamma(gamma);
   }


   tarch::la::Vector<LB_CURRENT_DIR,double>
   peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getMrtHumieresGamma() const {
     return Base::_stateData.getMrtHumieresGamma();
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setNumberTimestepsPerPlotting(int steps) {
     Base::_stateData.setNumberTimestepsPerPlotting(steps);
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getNumberTimestepsPerPlotting() const {
     return Base::_stateData.getNumberTimestepsPerPlotting();
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getTimestep() const {
     return Base::_stateData.getTimestep();
   }


   bool peano::applications::faxen::lbf::SpacetreeGridBlockState::
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


   bool peano::applications::faxen::lbf::SpacetreeGridBlockState::plotVTK() const {
     return (Base::_stateData.getPlotVtk() == 1);
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setPlotVTK(bool plotVtk) {
     // reset timestep
     Base::_stateData.setTimestep(0);

     Base::_stateData.setPlotVtk((short int) plotVtk);
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
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


   std::string peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getVTKFilename() const {
     char array[128];
     for (int i = 0; i < 128; i++){
       array[i] = Base::_stateData.getVtkFilename()(i);
     }
     std::string filename(array);
     return filename;
   }



   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setMeasurePerformance(bool measurePerformance){
     Base::_stateData.setMeasurePerformance((short int) measurePerformance);
   }


   bool peano::applications::faxen::lbf::SpacetreeGridBlockState::
   measurePerformance() const {
     return (Base::_stateData.getMeasurePerformance() == 1);
   }


   void peano::applications::faxen::lbf::SpacetreeGridBlockState::
   setLocalNumberOfCells(int cells){
     Base::_stateData.setLocalNumberOfCells(cells);
   }


   int peano::applications::faxen::lbf::SpacetreeGridBlockState::
   getLocalNumberOfCells() const {
     return Base::_stateData.getLocalNumberOfCells();
   }



   #ifdef Parallel
   void peano::applications::faxen::lbf::SpacetreeGridBlockState::setGlobalNumberOfCells(int cells){
     Base::_stateData.setGlobalNumberOfCells(cells);
   }

   int peano::applications::faxen::lbf::SpacetreeGridBlockState::getGlobalNumberOfCells() const{
     return Base::_stateData.getGlobalNumberOfCells();
   }

   void peano::applications::faxen::lbf::SpacetreeGridBlockState::setGlobalCpuTime(double time){
     Base::_stateData.setGlobalCpuTime(time);
   }

   double peano::applications::faxen::lbf::SpacetreeGridBlockState::getGlobalCpuTime() const {
     return Base::_stateData.getGlobalCpuTime();
   }
   #endif

 
