#include "peano/applications/navierstokes/prototype1/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


//Manual includes
#include "tarch/la/DynamicVector.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit" );

peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) const {
  // @todo Insert your code here
  checkpoint.storeValueAsDouble( "state.numberOfInnerVertices", _stateData.getNumberOfInnerVertices());
  checkpoint.storeValueAsDouble( "state.numberOfBoundaryVertices", _stateData.getNumberOfBoundaryVertices());
  checkpoint.storeValueAsDouble( "state.numberOfOuterVertices", _stateData.getNumberOfOuterVertices());
  checkpoint.storeValueAsDouble( "state.numberOfInnerCells", _stateData.getNumberOfInnerCells());
  checkpoint.storeValueAsDouble( "state.numberOfOuterCells", _stateData.getNumberOfOuterCells());
  checkpoint.storeValueAsBool( "state.gridIsStationary", _stateData.getGridIsStationary());


  /**
   * Holds the maximum number of iterations for the linear solver.
   */

  checkpoint.storeValueAsInt( "state.lgMaxIterations", _stateData.getLGSMaxIterations() );

  /**
   * Current global residual of linear solver.
   */
  //persistent parallelise double LGSResidual;
  checkpoint.storeValueAsDouble( "state.lgResidual", _stateData.getLGSResidual());
  /**
   * Tolerances?
   */


  /*****************************************************************************
   * ode stuff
   */
  /**
   * Current time step number.
   */
  //persistent parallelise int odeTimestepnumber;
  checkpoint.storeValueAsInt( "state.odeTimestepnumber", _stateData.getOdeTimestepnumber());

  /**
   * Current time.
   */
  //persistent parallelise double odeTime;
  checkpoint.storeValueAsDouble( "state.odeTime", _stateData.getOdeTime());


  /**
   * Time step size.
   */
  //persistent parallelise double odeTau;
  checkpoint.storeValueAsDouble( "state.odeTau", _stateData.getOdeTau());


  /*****************************************************************************
   * plotter stuff
   */

  /**
   * File name with time step number information. No Strings!!!!
   */

  /**
   *
   */
  checkpoint.storeValueAsBool( "state.plotterPlotDebugInfo", _stateData.getPlotterPlotDebugInfo());


  /*****************************************************************************
   * Scenario stuff
   */
  /**
   * Stores the value of the Reynolds number.
   */
  //persistent parallelise double scenarioRe;
  checkpoint.storeValueAsDouble( "state.scenarioRe", _stateData.getScenarioRe());


  /**
   * Stores the value of the kinematic viscosity @f$ \eta @f$.
   */
  checkpoint.storeValueAsDouble( "state.scenarioEta", _stateData.getScenarioEta());


  /**
   * Stores the value of the density @f$ \rho @f$.
   */
  //persistent parallelise double scenarioRho;
  checkpoint.storeValueAsDouble( "state.scenarioRho", _stateData.getScenarioRho());


  /**
   * Stores the characteristic length.
   */
  //persistent parallelise double scenarioCharacteristicLength;
  checkpoint.storeValueAsDouble( "state.scenarioCharacteristicLength", _stateData.getScenarioCharacteristicLength());


  /**
   * L2h norm of p.
   */
  checkpoint.storeValueAsDouble( "state.pL2h", _stateData.getPL2h());

  /**
   * Maximum norm of p.
   */
  //persistent parallelise double pMax;
  checkpoint.storeValueAsDouble( "state.pMax", _stateData.getPMax());

  /**
   * Current improvement of p in L2h norm (@f$ \| p_{old} - p_{new}\|_{L2h} @f$).
   */
  //persistent parallelise double pImprovementL2h;
  checkpoint.storeValueAsDouble( "state.pImprovementL2h", _stateData.getPImprovementL2h());

  /**
   * Current improvement of p in maximum norm (@f$ max| p_{old} - p_{new}| @f$).
   */
  //persistent parallelise double pImprovementMax;
  checkpoint.storeValueAsDouble( "state.pImprovementMax", _stateData.getPImprovementMax());


  /**
   * L2h norm of velocities.
   */
  //persistent parallelise double uL2h;
  checkpoint.storeValueAsDouble( "state.uL2h", _stateData.getUL2h());

  /**
   * Maximum norm of velocities.
   */
  //persistent parallelise double uMax;
  checkpoint.storeValueAsDouble( "state.uMax", _stateData.getUMax());
  /**
   * Current improvement of velocities in L2h norm
   * (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
   */
  //persistent parallelise double uImprovementL2h;
  checkpoint.storeValueAsDouble( "state.uImprovementL2h", _stateData.getUImprovementL2h());

  /**
   * Current improvement of velocities in maximum norm
   * (@f$ max| u_{old} - u_{new}| @f$).
   */
  //persistent parallelise double uImprovementMax;
  checkpoint.storeValueAsDouble( "state.uImprovementMax", _stateData.getUImprovementMax());

  /**
   * Maximum absolute value of velocities in each dimension. Used for variable
   * time step criterion.
   */
  for(int i=0;i<DIMENSIONS;i++){
    checkpoint.storeValueAsDouble( "state.uMaxPerDimension_"+i, _stateData.getUMaxPerDimension(i));
    checkpoint.storeValueAsDouble( "state.meshWidth_"+i,_stateData.getMeshWidth(i));
  }
}

    
void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) {
  // @todo Insert your code here


  _stateData.setNumberOfInnerVertices(checkpoint.getValueAsDouble("state.numberOfInnerVertices"));
  _stateData.setNumberOfBoundaryVertices(checkpoint.getValueAsDouble("state.numberOfBoundaryVertices"));
  _stateData.setNumberOfOuterVertices(checkpoint.getValueAsDouble("state.numberOfOuterVertices"));
  _stateData.setNumberOfInnerCells(checkpoint.getValueAsDouble("state.numberOfInnerCells"));
  _stateData.setNumberOfOuterCells(checkpoint.getValueAsDouble("state.numberOfOuterCells"));
  _stateData.setGridIsStationary(checkpoint.getValueAsBool("state.gridIsStationary"));



  _stateData.setLGSMaxIterations(checkpoint.getValueAsInt("state.lgMaxIterations"));
  _stateData.setLGSResidual(checkpoint.getValueAsDouble("state.lgResidual"));
  _stateData.setOdeTimestepnumber(checkpoint.getValueAsInt("state.odeTimestepnumber"));
  _stateData.setOdeTime(checkpoint.getValueAsDouble("state.odeTime"));
  _stateData.setOdeTau(checkpoint.getValueAsDouble("state.odeTau"));
  _stateData.setPlotterPlotDebugInfo(checkpoint.getValueAsBool("state.plotterPlotDebugInfo"));
  _stateData.setScenarioRe(checkpoint.getValueAsDouble("state.scenarioRe"));
  _stateData.setScenarioEta(checkpoint.getValueAsDouble("state.scenarioEta"));
  _stateData.setScenarioRho(checkpoint.getValueAsDouble("state.scenarioRho"));
  _stateData.setScenarioCharacteristicLength(checkpoint.getValueAsDouble("state.scenarioCharacteristicLength"));
  _stateData.setPL2h(checkpoint.getValueAsDouble("state.pL2h"));
  _stateData.setPMax(checkpoint.getValueAsDouble("state.pMax"));
  _stateData.setPImprovementL2h(checkpoint.getValueAsDouble("state.pImprovementL2h"));
  _stateData.setPImprovementMax(checkpoint.getValueAsDouble("state.pImprovementMax"));
  _stateData.setUL2h(checkpoint.getValueAsDouble("state.uL2h"));
  _stateData.setUMax(checkpoint.getValueAsDouble("state.uMax"));
  _stateData.setUImprovementL2h(checkpoint.getValueAsDouble("state.uImprovementL2h"));
  _stateData.setUImprovementMax(checkpoint.getValueAsDouble("state.uImprovementMax"));
  /**
   * Maximum absolute value of velocities in each dimension. Used for variable
   * time step criterion.
   */
  for(int i=0;i<DIMENSIONS;i++){
    _stateData.setUMaxPerDimension(i,checkpoint.getValueAsDouble("state.uMaxPerDimension_"+i));
    _stateData.setMeshWidth(i,checkpoint.getValueAsDouble("state.meshWidth_"+i));

  }
}


#ifdef Parallel
void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::mergeWithWorkerState(const RegularGridFluidStateEnhancedDivFreeEulerExplicit& workerState) {
  Base::mergeWithWorkerState(workerState);

  setLGSResidual(getLGSResidual() + workerState.getLGSResidual());

}
#endif
 
/**
 * Generated
 */
tarch::la::Vector<DIMENSIONS,int>  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getNumberOfVertices() const{
  return Base::_stateData.getNumberOfVertices();
}

/**
 * Generated
 */
void  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setNumberOfVertices(const tarch::la::Vector<DIMENSIONS,int>& numberOfVertices){
  Base::_stateData.setNumberOfVertices(numberOfVertices);
}

/**
 * Generated
 */
tarch::la::Vector<DIMENSIONS,double>  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOffset() const{
  return Base::_stateData.getOffset();
}

/**
 * Generated
 */
void  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOffset(const tarch::la::Vector<DIMENSIONS,double>& offset){
  Base::_stateData.setOffset(offset);
}

/**
 * Generated
 */
tarch::la::Vector<DIMENSIONS,double>  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getSize() const{
  return Base::_stateData.getSize();
}

/**
 * Generated
 */
void  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setSize(const tarch::la::Vector<DIMENSIONS,double>& size){
  Base::_stateData.setSize(size);
}

/// start manually introduced
peano::applications::navierstokes::prototype1::ElementType
peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getElementType() const{
  return Base::_stateData.getElementType();
}

void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setElementType
(
  const peano::applications::navierstokes::prototype1::ElementType newValue
) {
  Base::_stateData.setElementType(
      newValue
  );
}


int peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getLGSMaxIterations() const {
  return Base::_stateData.getLGSMaxIterations();
}

void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setLGSMaxIterations(
    const int newValue
) {
  Base::_stateData.setLGSMaxIterations(newValue);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getLGSResidual() const {
  return Base::_stateData.getLGSResidual();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setLGSResidual(
    const double newValue
) {
  Base::_stateData.setLGSResidual(newValue);
}


int peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTimestepnumber() const {
  return Base::_stateData.getOdeTimestepnumber();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTimestepnumber(
    const int newValue
) {
  Base::_stateData.setOdeTimestepnumber(newValue);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTime() const {
  return Base::_stateData.getOdeTime();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTime(
    const double newValue
) {
  Base::_stateData.setOdeTime(newValue);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getOdeTau() const {
  return Base::_stateData.getOdeTau();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setOdeTau(
    const double newValue
) {
  Base::_stateData.setOdeTau(newValue);
}


bool peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPlotterPlotDebugInfo() const {
  return Base::_stateData.getPlotterPlotDebugInfo();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPlotterPlotDebugInfo(
    const bool newValue
) {
  Base::_stateData.setPlotterPlotDebugInfo(newValue);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUseVTKFiles
(
  bool newValue
) {
  Base::_stateData.setPlotVTKFiles(newValue);
}

bool peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::useVTKFiles()
{
  return Base::_stateData.getPlotVTKFiles();
}

double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRe() const {
  return Base::_stateData.getScenarioRe();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRe(
    const double& newScenarioRe
) {
  Base::_stateData.setScenarioRe(newScenarioRe);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioEta() const {
  return Base::_stateData.getScenarioEta();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioEta(
    const double& newScenarioEta
) {
  Base::_stateData.setScenarioEta(newScenarioEta);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioRho() const {
  return Base::_stateData.getScenarioRho();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioRho(
    const double& newScenarioRho
) {
  Base::_stateData.setScenarioRho(newScenarioRho);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getScenarioCharacteristicLength() const {
  return Base::_stateData.getScenarioCharacteristicLength();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setScenarioCharacteristicLength(
    const double& newScenarioCharacteristicLength
) {
  Base::_stateData.setScenarioCharacteristicLength(newScenarioCharacteristicLength);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPL2h() const {
  return Base::_stateData.getPL2h();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPMax() const {
  return Base::_stateData.getPMax();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementL2h() const {
  return Base::_stateData.getPImprovementL2h();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getPImprovementMax() const {
  return Base::_stateData.getPImprovementMax();
}
void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setPMeasurementData(
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

double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUL2h() const {
  return Base::_stateData.getUL2h();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUMax() const {
  return Base::_stateData.getUMax();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementL2h() const {
  return Base::_stateData.getUImprovementL2h();
}
double peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUImprovementMax() const {
  return Base::_stateData.getUImprovementMax();
}
Vector peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::getUMaxPerDimension() const {
  return Base::_stateData.getUMaxPerDimension();
}
void peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::setUMeasurementData(
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
