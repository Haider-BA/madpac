#include "peano/applications/navierstokes/prototype1/FluidSimulation.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/ElementMatrices.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#endif

tarch::logging::Log peano::applications::navierstokes::prototype1::FluidSimulation::_log("peano::applications::navierstokes::prototype1::FluidSimulation");

double peano::applications::navierstokes::prototype1::FluidSimulation::_tauSecurityFactorGlobal  = 0.8;
double peano::applications::navierstokes::prototype1::FluidSimulation::_tauSecurityFactorVisc    = 0.5;
double peano::applications::navierstokes::prototype1::FluidSimulation::_tauSecurityFactorU       = 0.5;




peano::applications::navierstokes::prototype1::FluidSimulation::FluidSimulation(
  const bool            useDivergenceCorrection,
  const double          rTol,
  const bool            plotToVTK,
  repositories::PrototypeRepositoryForRegularGrid&  repository
) :
  _extendedWatchForTimeStep("FluidSimulation","runFluidSimulation",false),
  _extendedWatchForLGSSolution("peano::applications::navierstokes::prototype1::FluidSimulation","measure one LGS solution",false),
  _elapsedCpuTimePerTimeStep(0.0),
  _elapsedLGSTime(-1.0),
  _repository (repository),
  _useDivergenceCorrection(useDivergenceCorrection),
  _isValid(true),
  _useTimeDependentBoundaryConditions(false),
  _plotToVTK(plotToVTK),
  #if defined(ComponentPrecice)
  _maximalFSITimestepLength (0.0),
  #endif
  _userInterface(),
//  _fluidScenario(fluidScenario),
  _useExplicitAssembling(false),
  _forceDesired(false),
  _globalForce(Vector(0.0)),
  _globalForceDirichletBoundaryPartNumber(-1),
  _useMovingGeometry(false),
///DEC for file data
//  #if defined(ComponentPlotter)
//  _forceWriter(NULL),
//  _forceWriterTEC(NULL),
//  _iterationsWriter(NULL),
//  _boundaryFunctionWriter(NULL),
//  #endif
  _maximumGridDepth(0),
  _numberOfFluidCells(0),
  _numberOfFluidDoFNodes(0),
  _periodicBoundaryInUse(false),
  _rTol(rTol),
///DEC for PETSc usage
//  #if defined(ComponentPETSc)
//  _adaptMatrix(_fluidScenario, usePeanoGrid),
//  _adaptRHS(_fluidScenario, usePeanoGrid),
//  #endif
  _neededLGSIterations(-1),
  _plotNumberIterationsDesired(false)
///DEC for PETSc usage
//  #if defined(ComponentPETSc)
//  ,_PETScNonLinearSolver(NULL),
//  #endif
///DEC for non-linear usage
//  _useMatrixFreeJacobian(false),
//  _numberOfPerformedNonLinearIterations(-1),
//  #if defined(ComponentPlotter)
//  ,
//  _nonLinearIterationForceWriter(NULL)
//  #endif
  {

  init("./");
}


peano::applications::navierstokes::prototype1::FluidSimulation::~FluidSimulation() {
///DEC for file data
//  #if defined(ComponentPlotter)
//  if (_forceWriter!=NULL) {
//    delete _forceWriter;
//    _forceWriter = NULL;
//  }
//  if (_forceWriterTEC!=NULL) {
//      delete _forceWriterTEC;
//      _forceWriterTEC = NULL;
//  }
//  if(_iterationsWriter!=NULL){
//    delete _iterationsWriter;
//    _iterationsWriter = NULL;
//  }
//  if(_boundaryFunctionWriter!=NULL){
//    delete _boundaryFunctionWriter;
//    _boundaryFunctionWriter = NULL;
//  }
//  if (_nonLinearIterationForceWriter!=NULL) {
//    delete _nonLinearIterationForceWriter;
//    _nonLinearIterationForceWriter = NULL;
//  }
//  #endif

///DEC for PETSc usage non-linear
//  #if defined(ComponentPETSc)
//  if (_PETScNonLinearSolver!=NULL) {
//    delete _PETScNonLinearSolver;
//    _PETScNonLinearSolver = NULL;
//  }
//  #endif
}


void peano::applications::navierstokes::prototype1::FluidSimulation::init(const std::string forceOutputPath) {

  _isValid &= checkFluidSetting();

//  if ( access( forceOutputPath.c_str(), 0 ) != 0 ) {
//    _log.error("init(path)","invalid output path (directory does not exist): " + forceOutputPath);
//    _isValid = false;
//  }
  /// @todo check nur ein Pfad fuer alles!?! dann aber Global-plotter-tag mit Pfad,
  //        drunter einzelner plotter configs. Dann 2 Varianten: Textplotter als
  //        echte volle plotter, oder nur Pfad abholen.


//  if (_fluidScenario.arePeriodicBoundaryConditionsInUse()) {
//    _periodicBoundaryInUse = true;
//  }

//  if ( _scenarioName == fluidscenario::FluidObstacleInChannel::IDENTIFIER
//      || _scenarioName == fluidscenario::FluidObstacleInChannelWithSlipWalls::IDENTIFIER
//      || _scenarioName == fluidscenario::FluidObstacleInStationaryFlowField::IDENTIFIER
//      || _scenarioName == fluidscenario::FluidObstacleInDriftRatchet::IDENTIFIER) {
    _forceDesired = true;
    _plotNumberIterationsDesired = true;
//  }

///DEC for file data
//  #if defined(ComponentPlotter) &&  defined(ComponentFluidScenario)
//  if (_forceDesired) {
//    _forceWriter    = new tarch::plotter::TXTWriter_GlobalVectorData(forceOutputPath + "/forces");
//    _forceWriterTEC = new tarch::plotter::TECWriter_GlobalVectorData(forceOutputPath + "/forces");
//  }
//  if(_plotNumberIterationsDesired){
//    _iterationsWriter = new tarch::plotter::TXTWriter_ScalarData(forceOutputPath + "/iterationsPPE");
//  }
//  if (_useTimeDependentBoundaryConditions) {
//    _boundaryFunctionWriter = new tarch::plotter::TXTWriter_ScalarData(forceOutputPath + "/boundaryFunction");
//  }
//  #endif
//  #if defined(ComponentPlotter)
//  _nonLinearIterationForceWriter = new tarch::plotter::TXTWriter_GlobalVectorData(forceOutputPath + "/forces.steadyStateIts");
//  #endif
}


bool peano::applications::navierstokes::prototype1::FluidSimulation::checkFluidSetting(){

  bool result = true;

//  if ( !equals(_adjustmentFactor, 1.0) ) {
//    _log.error("checkFluidSetting()", "invalid attribute \"" + fluidscenario::FluidConfiguration::ATTRIBUTE_ADJUSTMENT_FACTOR + "\" for scenario setup; only 1.0 allowed." );
//    result = false;
//  }

//  if (_scenarioName != fluidscenario::FluidDrivenCavity::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidDrivenCavityCheckerboardLid::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidCircleFlow::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidGravityBox::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInChannel::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInChannelWithSlipWalls::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInTurbulentChannel::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInAllDirichletChannel::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInStationaryFlowField::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidObstacleInDriftRatchet::IDENTIFIER &&
//      _scenarioName != fluidscenario::FluidStep::IDENTIFIER ) {
//    _log.error("checkFluidSetting()", "unknown scenario " + _scenarioName );
//    result = false;
//  }


  return result;
}

///DEC for moving geo
//void peano::applications::navierstokes::prototype1::FluidSimulation::moveGeometry(double tau){
//  bool geometryHasChanged = false;
//  #if defined(ComponentPrecice)
//    std::cout << "tau = " << tau << ", max tau = " << _maximalFSITimestepLength << std::endl;
//    assertion ( tau - _maximalFSITimestepLength <= NUMERICAL_ZERO_DIFFERENCE  );
//    logDebug ( "moveGeometry()", "Computed tau = " << tau
//            << ", old maxtau = " << _maximalFSITimestepLength );
//  _maximalFSITimestepLength = _repository.getPrecice().advance(tau);
//    logDebug ( "moveGeometry()", "New maxtau = " << _maximalFSITimestepLength );
//    geometryHasChanged = true;
//  #else
//  geometryHasChanged = computeFSI( tau );
//  #endif
//
//  if(geometryHasChanged){
//    implementUpdateGrid();
//  }
//}

bool peano::applications::navierstokes::prototype1::FluidSimulation::isValid() const {
  return _isValid;
}


Vector peano::applications::navierstokes::prototype1::FluidSimulation::getGlobalForce() const {
  return _globalForce;
}


double peano::applications::navierstokes::prototype1::FluidSimulation::evaluateExplicitTimeStepSizeCriterion(
  const Vector uMaxPerDimension,
  const Vector minimumMeshSize,
  const double nu
) {
//Deactivated as long as the UMeasurement is not working
//  double minimumVoxelVolumeSquared = 1.0;
//  double minimumMeshSizeSumSquared = 0.0;
//  ElementMatrices dummyElementMatrix;
//  Vector minimumMeshSizeHFactor = dummyElementMatrix.getHFactorForMOrC(minimumMeshSize);
//
//  #ifdef Debug
//  assertion( tarch::la::greater(_tauSecurityFactorGlobal, 0.0) && !tarch::la::greater(_tauSecurityFactorGlobal, 1.0) );
//  assertion( tarch::la::greater(_tauSecurityFactorVisc, 0.0) && !tarch::la::greater(_tauSecurityFactorVisc, 1.0) );
//  assertion( tarch::la::greater(_tauSecurityFactorU, 0.0) && !tarch::la::greater(_tauSecurityFactorU, 1.0) );
//  #endif
//
//  bool useU = false;
//  for (int d=0; d<DIMENSIONS; d++) {
//    useU |= tarch::la::greater(uMaxPerDimension(d), 0.0);
//    #ifdef Debug
//    assertion( tarch::la::greater(minimumMeshSize(d), 0.0) );
//    #endif
//    minimumVoxelVolumeSquared *= minimumMeshSize(d) * minimumMeshSize(d);
//    minimumMeshSizeSumSquared += minimumMeshSizeHFactor(d) * minimumMeshSizeHFactor(d);
//  }
//
//  double resultingTimeStepSize = 0.0;
//
//  double deltaTauVisc = _tauSecurityFactorVisc / (2.0 * nu) *
//                        minimumVoxelVolumeSquared / minimumMeshSizeSumSquared;
//  resultingTimeStepSize = deltaTauVisc;
//
//  if ( useU ){
//    Vector deltaTauU    = _tauSecurityFactorU / 2.0 * (minimumMeshSize / uMaxPerDimension);
//
//    for (int d=0; d<DIMENSIONS; d++) {
//      resultingTimeStepSize = std::min( resultingTimeStepSize, deltaTauU(d) );
//    }
//  }
//
//  resultingTimeStepSize *= _tauSecurityFactorGlobal;
//
//  assertion1(tarch::la::greater(resultingTimeStepSize,0.0), resultingTimeStepSize);
//
//  return resultingTimeStepSize;
  return 0.0;
}

///DEC for PETSc usage non-linear
//double peano::applications::navierstokes::prototype1::FluidSimulation::evaluateImplicitTimeStepSizeCriterion(
//  const double tau
//) const {
//  assertionFail("only usage in NonLinearFluidSimulation allowed");
//  return 0.0;
//}


int peano::applications::navierstokes::prototype1::FluidSimulation::getNumberOfFluidCells() const {
  assertion(isValid());
  return _numberOfFluidCells;
}


int peano::applications::navierstokes::prototype1::FluidSimulation::getNumberOfFluidDofNodes() const {
  assertion(isValid());
  return _numberOfFluidDoFNodes;
}


void peano::applications::navierstokes::prototype1::FluidSimulation::performExplicitTimestep() {
  //setNewVelocityBoundaryValues
  //TODO

  //TODO: check RungeKutta: adjustment factor term in PPERHS gets wrong weight! egal?

  calculateF();

  calculatePPERHS();

  _extendedWatchForLGSSolution.startTimer();
  solveSystem();
  _extendedWatchForLGSSolution.stopTimer();
  _elapsedLGSTime = _extendedWatchForLGSSolution.getCPUTime();

  _globalForce = calculatePressureGradientAndForces(_forceDesired,
                                          _globalForceDirichletBoundaryPartNumber);

  updateVelocities();
  _extendedWatchForTimeStep.stopTimer();
  _elapsedCpuTimePerTimeStep = _extendedWatchForTimeStep.getCPUTime();
}


void peano::applications::navierstokes::prototype1::FluidSimulation::implementSetInitialValue(
  const bool   hasVariableTimeStepSize,
  const double startTime,
  const int    noPseudoTimeSteps,
  const double pseudoTimeStepSize
) {
   if(_forceDesired){
    _globalForceDirichletBoundaryPartNumber = getGlobalForceDirichletBoundaryPartNumber();
  }

  #if defined(ComponentPrecice)
  _maximalFSITimestepLength = _repository.getPrecice().initialize();
  #endif

  _log.info("runFluidSimulation()", "preparing the grid");
  prepareGrid();

//  //updateGrid performs the initial updating of the grid which is basically the setting of the
//  //boundary velocities and it counts the inner cells and vertices
//  _log.info("runFluidSimulation()", "counting the inner cells and setting boundary conditions");
//  bool gridChanged;
//  gridChanged = updateGrid();
//
//  assertion(!gridChanged);


  if (_useTimeDependentBoundaryConditions) {
//    setNewTimeDependentBoundaryData(0, startTime);
  }

///DEC for PETSc usage
//  _log.info("implementSetInitialValue()", "assembling the matrix");
//  {
//    tarch::utils::Watch watch("FluidSimulation","implementSetInitialValue()", true);
//    assembleMatrix();
//    _log.info("implementSetInitialValue()", "global time for matrix assemblation:");
//  }

  // plotting init data; has to be done after assembleMatrix() to
  // get correct order of iterations (and cell numbering) for test cases!
  if(_plotToVTK) {
    plotOutput(_forceDesired, getGlobalForce(), "initialValue", true);
  }

  _userInterface.writeFluidTimeStepInfoHeader(hasVariableTimeStepSize, _forceDesired,
                                              _globalForceDirichletBoundaryPartNumber);
}

void peano::applications::navierstokes::prototype1::FluidSimulation::implementFinalizeTimestepping ()
{
  #if defined(ComponentPrecice)
  _repository.getPrecice().finalize ();
  #endif
}


bool peano::applications::navierstokes::prototype1::FluidSimulation::implementExternalContinue()
{
  #if defined(ComponentPrecice)
  return _repository.getPrecice().isCoupledSimulationOngoing();
  #endif
  return true;
}

void peano::applications::navierstokes::prototype1::FluidSimulation::implementUpdateGrid()
{
  logDebug ("implementUpdateGrid()", "Updating grid");
  assertionFail("not yet implemented/checked!");
//  if( updateGrid() ){
//    logDebug ("implementUpdateGrid()", std::endl << std::endl << std::endl
//              << "updateGrid() == true" << std::endl << std::endl << std::endl );
//    assembleMatrix();
//    if (_useDivergenceCorrection ) {
//      computeDivFreeVelocityField();
//    }
//  }
}


///DEC for time-implicit/multistep
//double peano::applications::navierstokes::prototype1::FluidSimulation::implementCalculateStartSteps(
//  const double startTime,
//  const double tau,
//  const bool   hasVariableTimeStepSize
//) {
//  return 0.0;
//}


//bool peano::applications::navierstokes::prototype1::FluidSimulation::implementReadRestartData(
//  int&              timestep,
//  double&           time,
//  double&           tau,
//  const std::string readPath,
//  const bool        restartAtTimeZero,
//  const bool        internallyTriggered
//) {
//  bool readData = internallyTriggered;
//  #ifdef ComponentPrecice
//  if (_repository.getPrecice().isActionRequired(::precice::Constants::READ_SIMULATION_CHECKPOINT)) {
//    readData = true;
//    _repository.getPrecice().fulfilledAction(::precice::Constants::READ_SIMULATION_CHECKPOINT);
//  }
//  #endif // ComponentPrecice
//
//  if (readData) {
//    assertion(readPath != tarch::configuration::RestartConfiguration::UNDEF_PATH);
//    time = readRestartData(timestep, tau, readPath, restartAtTimeZero);
//
////    if (_useMovingGeometry) {
////    logDebug ( "implementReadRestartData", "_useMovingGeometry = true" );
//    updateGrid();
//
//    _log.info("implementReadRestartData()", "assembling the matrix");
//    assembleMatrix();
//
//    // plotting init data; has to be done after assembleMatrix() to
//    // get correct order of iterations (and cell numbering) for test cases!
//    double dummyTime = -1.0;
//    plotOutput(dummyTime, _forceDesired, getGlobalForce(), "initialValue");
////       implementUpdateGrid();
////    }
//    return true;
//  }
//  return false;
//}


//void peano::applications::navierstokes::prototype1::FluidSimulation::implementWriteRestartData(
//  const int         timeStepNumber,
//  const double      time,
//  const double      tau,
//  const std::string writePath,
//  const bool        internallyTriggered
//) {
//  bool writeData = internallyTriggered;
//  #ifdef ComponentPrecice
//  writeData |= _repository.getPrecice().isActionRequired(
//                 ::precice::Constants::WRITE_SIMULATION_CHECKPOINT);
//  #endif // ComponentPrecice
//  if (writeData) {
//    assertion(writePath != tarch::configuration::RestartConfiguration::UNDEF_PATH);
//    writeRestartData(timeStepNumber, time, tau, writePath);
//  }
//}


double peano::applications::navierstokes::prototype1::FluidSimulation::implementCalculateTimeStepSize(
  const int timeStepNumber,
  const double tau
) {
  double result;

///DEC time implicit
//  if(_useImplicitTimeIntegration){  // implicit integration
//    assertionFail("not yet implemented");
//    result = evaluateImplicitTimeStepSizeCriterion(tau);
//  }
//  else {   // explicit integration
    assertionFail("mesh size not accessible yet!");
    result = evaluateExplicitTimeStepSizeCriterion(_repository.getState().getUMaxPerDimension(),
                                                Vector(1.0), //getMinimumMeshSize(),
                                                _repository.getState().getScenarioEta() / _repository.getState().getScenarioRho()
                                                );
//  }

  #if defined(ComponentPrecice)
  // In a coupled simulation, the maximal timestep length is limited by an
  // additional criterion, determined in preCICE, in order to control the
  // advancement in time of the coupled simulation.
     if ( greater(result,_maximalFSITimestepLength) ) {
        result = _maximalFSITimestepLength;
	}
  #endif

  return result;
}


void peano::applications::navierstokes::prototype1::FluidSimulation::implementBeginTimeStep() {

///DEC to use!
//  bool setVelocities = false;
//  if (_useTimeDependentBoundaryConditions) {
//    setVelocities = setNewTimeDependentBoundaryData(timeStepNumber, time);
//  }
//  #ifdef ComponentPrecice
//  setVelocities |= _repository.getPrecice().isReadDataAvailable();
//  #endif // ComponentPrecice
//
//  //_log.debug("runFluidSimulation()", "setup div-free velocity field");
//  //if ((timeStepNumber-1) % 5 == 0 && timeStepNumber!=1) {
//  if (timeStepNumber==1) {
//    setVelocities = true;
//  }
//  logWarning("implementBeginTimeStep()","div-corr for debugging always on!? Step nr=" << timeStepNumber);
//  //if (_useDivergenceCorrection && ((timeStepNumber==1) || setVelocities ) ) {
//  if (_useDivergenceCorrection && setVelocities ) {
//    _log.warning("simulateOneFluidTimestep()", "div-free velocity field computation!");
//    computeDivFreeVelocityField();
//  }
}


void peano::applications::navierstokes::prototype1::FluidSimulation::implementEndTimeStep(
  const bool                    hasVariableTimeStepSize,
  const double&                 elapsedCPUTimePerStep,
  const bool                    shallOutputBePlotted,
  const std::string             timeStepNumberWithLeadingZeros
) {

  #ifdef Debug
//  if(!_useImplicitTimeIntegration){ //ecplicit time-integration
    assertionMsg(!hasVariableTimeStepSize,"not yet implemented!!!");
    double tauAdap = evaluateExplicitTimeStepSizeCriterion(_repository.getState().getUMaxPerDimension(),
                                     Vector(1.0),//getMinimumMeshSize(),!!!!
                                     _repository.getState().getScenarioEta()/_repository.getState().getScenarioRho());
    if ( tarch::la::greater(_repository.getState().getOdeTau(),tauAdap) ) {
      logWarning("implementEndTimeStep()","tau=" << _repository.getState().getOdeTau() << " larger than allowed by criterion: " << tauAdap );
    }
//  }

  #endif //Debug

///DEC for file data
//  if(_forceDesired){
//    assertion(_forceWriter!=NULL);
//    _forceWriter->plotData(getGlobalForce());
//    assertion(_forceWriterTEC!=NULL);
//    _forceWriterTEC->plotData(getGlobalForce());
//  }
//
//  if(_plotNumberIterationsDesired) {
//    assertion(_iterationsWriter!=NULL);
//    assertion(_iterationsWriter->isOpen());
//    _iterationsWriter->plotData(_neededLGSIterations);
//  }

  if(_plotToVTK) {
    plotOutput (_forceDesired, getGlobalForce(),
              timeStepNumberWithLeadingZeros, shallOutputBePlotted);
  }

  if ( _useMovingGeometry ){
    assertionFail("not yet implemented");
//    moveGeometry( _repository.getState().getOdeTau() );
  }

//  _maximumGridDepth = getMaximumGridDepth();
  _maximumGridDepth = -1;

  assertion(!tarch::la::smaller(elapsedCPUTimePerStep, 0.0));
  //assertion1(!tarch::la::smaller(_elapsedLGSTime, 0.0), _elapsedLGSTime);
  //TODO unterweg Wieder rein, sobald das UserInterface da ist...
  _userInterface.writeFluidTimeStepInfo(
    _repository.getState().getOdeTimestepnumber(),
    hasVariableTimeStepSize,
    _repository.getState().getOdeTau(),
    _repository.getState().getOdeTime(),
    _repository.getState().getUImprovementL2h() / _repository.getState().getUL2h(),
    _repository.getState().getUImprovementMax() / _repository.getState().getUMax(),
    _repository.getState().getUImprovementL2h(),
    _repository.getState().getUImprovementMax(),
    _repository.getState().getPImprovementL2h() / _repository.getState().getPL2h(),
    _repository.getState().getPImprovementMax() / _repository.getState().getPMax(),
    _repository.getState().getPImprovementL2h(),
    _repository.getState().getPImprovementMax(),
    _repository.getState().getLGSResidual(),
    _maximumGridDepth,
    _numberOfFluidCells,
    _numberOfFluidDoFNodes,
    elapsedCPUTimePerStep,
    _neededLGSIterations,
    _elapsedLGSTime,
    _forceDesired,
    getGlobalForce(),
    #ifdef Parallel
    tarch::parallel::NodePool::getInstance().getNumberOfWorkingNodes()
    #else
    1
    #endif
  );
}


void peano::applications::navierstokes::prototype1::FluidSimulation::implementDerivativeAndUpdate() {
  _isValid &= isValid();
  if (!_isValid) {
    _log.error("runFluidSimulation()","Invalid instance of FluidSimulation in time loop (possibly due to PETSc invalidity) -> return");
    return;
  }

///DEC for time-implicit
//  if (_useImplicitTimeIntegration) {
//    assertionFail("not yet supported");
//    performImplicitTimestep(solverStepNumber, derivativeTime, updateTimeIntermediate, updateTimeAccumulated);
//  }
//  else {
    performExplicitTimestep();
//  }
}


///DEC for PETSc non-linear
//void peano::applications::navierstokes::prototype1::FluidSimulation::setDimensionsInAdapters(
//  const int numberOfFluidDofNodes,
//  const int numberOfFluidCells
//) {
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::setNumbersOfCellsAndVertices(){
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::uploadUP(double* pUP){
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::downloadUP(double* pUP){
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::calculateJacobianMF(double* pUP, double* pB) {
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::computeNavierStokesFunction(double* pUP, double* pB){
//  assertionFail("must not be used! overwrite in derived class!");
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::computeNavierStokesJacobian(){
//  assertionFail("must not be used! overwrite in derived class!");
//}


///DEC for PETSc non-linear
//void peano::applications::navierstokes::prototype1::FluidSimulation::plotNonLinearIterationOutput(
//  const int         iteration
//){
//  #if defined(ComponentPlotter)
//  if(_forceDesired){
//    _nonLinearIterationForceWriter->plotData(_globalForce);
//  }
//  #endif
//
//  //todo: flag bei Constructoraufruf in NonLinearBase passend setzen!
//  const bool        useForSteadyState = true;
//  if (useForSteadyState) {
//    double dummyTime = -1.0;
//    std::ostringstream msg;
//    msg << "nonLinIt." << iteration;
//    plotOutput(dummyTime, _forceDesired, getGlobalForce(), msg.str());
//}
//
//  #ifdef Debug
//  std::ostringstream oss;
//  oss << "force vector at iteration ";
//  oss << iteration;
//  oss <<": (";
//  for (int d=0; d<DIMENSIONS; d++) {
//    oss << getGlobalForce()(d) << ", ";
//  }
//  oss << ")";
//  _log.debug("plotNonLinearIterationOutput()", oss.str());
//
//  #endif
//  #ifdef Debug
//  //for printing the Jacobian in matlab format for current iteration:
//  //_trivialgridRepository4FluidNonLinear.getCalculateJacobianAdapter().printJacobian(iteration);
//  #endif
//}


///DEC for PETSc non-linear
//void peano::applications::navierstokes::prototype1::FluidSimulation::computeNavierStokesJacobianMF(double* pUP, double* pB) {
//  assertion(pUP!=NULL);
//  assertion(pB!=NULL);
//
//  #if defined(ComponentPETSc)
//  PetscScalar *pxCopy;
//  VecGetArray(_inputCopy, &pxCopy);
//  uploadUP(pxCopy);
//  VecRestoreArray(_inputCopy, &pxCopy);
//  //VecDestroy(_inputCopy);
//
//  calculateJacobianMF(pUP, pB);
//  #endif
//}


///DEC for PETSc non-linear
//void peano::applications::navierstokes::prototype1::FluidSimulation::initSolveNonLinearSystem() {
//  #if defined(ComponentPETSc)
//  #ifndef Dim2
//  _log.warning("initSolveNonLinearSystem()", "only 2D tested/implemented");
//  #endif //Dim2
//  _log.debug("initSolveNonLinearSystem()", "setting solver parameters");
//
//  int noFluidDofs  = getNumberOfFluidDofNodes();
//  int noFluidCells = getNumberOfFluidCells();
//
//  logDebug("initSolveNonLinearSystem()","number of fluid dofs=" << noFluidDofs <<
//                                      ", number of cells =" << noFluidCells <<
//                                      ", total Dim=" << DIMENSIONS * noFluidDofs + noFluidCells );
//
//
//  if (_PETScNonLinearSolver==NULL || !_PETScNonLinearSolver->isValid()) {
//    _log.error("initSolveNonLinearSystem()","non-linear solver not instantiated or invalid! return");
//    return;
//  }
//
//
//  _PETScNonLinearSolver->setFunction(petsc::PETScNonLinearEquations::function);
//
//  if (_useMatrixFreeJacobian) {
//    _PETScNonLinearSolver->setJacobian(petsc::PETScNonLinearEquations::jacobianGridMF);
//    _PETScNonLinearSolver->setMultMF(petsc::PETScNonLinearEquations::matMultMF);
//  }
//  else {
//    _PETScNonLinearSolver->setJacobian(petsc::PETScNonLinearEquations::jacobianGrid);
//    //_PETScNonLinearSolver->setJacobian(petsc::PETScNonLinearEquations::jacobianDefault);
//  }
//
//
//  setDimensionsInAdapters(noFluidDofs, noFluidCells);
//
//  _PETScNonLinearSolver->setNonLinearMonitor(petsc::PETScNonLinearEquations::monitorNonLinearSolver, this);
//  _PETScNonLinearSolver->setLinearMonitor(petsc::PETScNonLinearEquations::monitorLinearSolver, this);
//
//  setNumbersOfCellsAndVertices();
//
//  #else
//  assertionMsg(false, "only for PETSc implemented!");
//  #endif //ComponentPETSc
//
//}


///DEC for PETSc non-linear
//void peano::applications::navierstokes::prototype1::FluidSimulation::solveNonLinearSystem() {
//
//  #if defined(ComponentPETSc)
//  int noFluidDofs  = getNumberOfFluidDofNodes();
//  int noFluidCells = getNumberOfFluidCells();
//
//  double* pUP = new double[DIMENSIONS * noFluidDofs + noFluidCells];
//  downloadUP(pUP);
//  _PETScNonLinearSolver->setInitial(pUP);
//  delete[] pUP;
//
//  _log.debug("solveNonLinearSystem()", "starting non-linear solver");
//
//  _PETScNonLinearSolver->solve( this, NULL, NULL, &_numberOfPerformedNonLinearIterations);
//
//  logInfo( "solveNonLinearSystem()", "non-linear solution completed with iterations:"
//                                           << _numberOfPerformedNonLinearIterations );
//
//  #else
//  assertionMsg(false, "only for PETSc implemented!");
//  #endif
//}


///DEC for PETSc non-linear
//int peano::applications::navierstokes::prototype1::FluidSimulation::getNumberOfPerformedNonLinearIterations() const {
//  return _numberOfPerformedNonLinearIterations;
//}
//
//
//#if defined(ComponentPETSc)
//peano::petsc::PETScNonLinearSolver* peano::applications::navierstokes::prototype1::FluidSimulation::getNLS() {
//  return _PETScNonLinearSolver;
//}
//void peano::applications::navierstokes::prototype1::FluidSimulation::saveInputVector(Vec x) {
//  VecDuplicate(x, &_inputCopy);
//  VecCopy(x, _inputCopy);
//}
//#endif



//bool peano::applications::navierstokes::prototype1::FluidSimulation::setNewTimeDependentBoundaryData(
//  const int    timeStepNumber,
//  const double time
//) {
//  double pInlet  = 0.0;
//  double pOutlet = 0.0;
//  bool setVelocityBoundaryValues = false;
//
//  if (_timeDependentBoundaryData.isPressureTimeDependent()) {
//  _timeDependentBoundaryData.computeNewPressureData(pInlet, pOutlet, time);
//  setNewPressureBoundaryData(pInlet, pOutlet);
//  logDebug("setNewTimeDependentBoundaryData()","new pInlet=" << pInlet <<
//                                               ", new pOutlet=" << pOutlet);
//  }
//  if (_timeDependentBoundaryData.isVelocityTimeDependent()) {
//     // Scaling factors for boundary velocities are set via time
//     _timeDependentBoundaryData.setTime (time);
//     implementUpdateBoundaryVelocities (_timeDependentBoundaryData);
//     setVelocityBoundaryValues = true;
//  }
//
//  assertion(_boundaryFunctionWriter!=NULL);
//  assertion(_boundaryFunctionWriter->isOpen());
//  _boundaryFunctionWriter->plotData(pInlet);
//  return setVelocityBoundaryValues;
//}



///copy-paste von PeanoFluidSimulation:

int peano::applications::navierstokes::prototype1::FluidSimulation::getGlobalForceDirichletBoundaryPartNumber() const {
  return peano::applications::navierstokes::prototype1::OBSTACLE;
}


void peano::applications::navierstokes::prototype1::FluidSimulation::prepareGrid() {
  _log.info("prepareGrid()", "dummy implementation for prepareGrid()");

  _repository.switchToInitialiseScenario();
  _repository.iterate();
  #ifdef Parallel
  _repository.switchToMergeA();
  _repository.iterate();
  #endif

//  _log.info("prepareGrid()", "refine grid with mock runs up to specified resolution");
//  _log.info("prepareGrid()", "starting mock grid iteration");
//  //_peanoRepositoryRootEvents.getMockRootEvent().setIsAllowedToRefineOrCoarse(true);
//  _peanoRepositoryRootEvents.getMockRootEvent().iterate();
//  int numberOfRefinementIterations = 1;
//
//  do {
//    _log.info("prepareGrid()", "starting mock grid iteration");
//    _peanoRepositoryRootEvents.getMockRootEvent().iterate();
//    numberOfRefinementIterations ++;
//  } while (_peanoRepositoryRootEvents.getMockRootEvent().hasRefined() ||
//           _peanoRepositoryRootEvents.getMockRootEvent().hasTriggeredARefinement() );
//
//  // check for even number of refinements
//  if (numberOfRefinementIterations % 2 != 0) {
//    _log.info("prepareGrid()", "starting mock grid iteration for even total number");
//    _peanoRepositoryRootEvents.getMockRootEvent().iterate();
//    numberOfRefinementIterations ++;
//  }
////  assertion(!_peanoRepositoryRootEvents.getMockRootEvent().isOddGridTraversal());
//
//  _peanoRepositoryRootEvents.getMockRootEvent().setIsAllowedToRefineOrCoarse(false);
//
//  _maximumGridDepth = _peanoRepositoryRootEvents.getMockRootEvent().getMaxTreeLevel();
//  #ifdef ComponentSteering
//  _peanoRepository.getUpdateGridAdapter().setMaxLevel(_maximumGridDepth);
//  #endif
//  logInfo("prepareGrid()", "maximum tree level:" << _maximumGridDepth );
//  logInfo("prepareGrid()", "number of refinement iterations: " << numberOfRefinementIterations );
//  logInfo("prepareGrid()", "total number of persistent vertices (in and out): "
//             << _peanoRepositoryRootEvents.getMockRootEvent().sizeOfVertexStack() );
//  logInfo("prepareGrid()", "total number of cells (in and out): "
//             << _peanoRepositoryRootEvents.getMockRootEvent().sizeOfEventStack() );
}


///skipped: updateGrid()

///skipped: assembleMatrix()

///skipped: computeDivFreeVelocityField()

void peano::applications::navierstokes::prototype1::FluidSimulation::calculateF() {
  //_log.info("calculateF()", "starting calculateF iteration");

  if (_useExplicitAssembling) {
    assertionFail("not yet implemented!");
  }
  else {
    _repository.switchToCalculateF();
    _repository.iterate();
  }

  //_log.info("calculateF()", "finished calculateF iteration");
}


void peano::applications::navierstokes::prototype1::FluidSimulation::calculatePPERHS() {

  //_log.debug("calculatePPERHS()", "starting calculatePPERHS iteration");

  if (_useExplicitAssembling){
    assertionFail("not yet implemented!");
//    #if !defined(ComponentStaggeredPoisson)
//    _peanoRepositoryRootEvents.getAssemblePPERHSRootEvent().setIsAllowedToRefineOrCoarse(false);
//    _peanoRepositoryRootEvents.getAssemblePPERHSRootEvent().iterate();
//    #endif
//    #if defined(ComponentPETSc)
//    // check for scenario and rank reduction ...
//    _adaptRHS.adaptSolver(_PETScSolver, IntVector(0), _numberOfFluidCells);
//    #else
//    assertionFail("explicit assembling needs petsc!");
//    #endif
  }
  else {
    _repository.switchToCalculatePPERHS();
    _repository.iterate();
  }

  //_log.debug("calculatePPERHS()", "finished calculatePPERHS iteration");
}



void peano::applications::navierstokes::prototype1::FluidSimulation::solveSystem() {

  if (_useExplicitAssembling){
    assertionFail("not yet implemented!");
//    //_log.debug("solveSystem()", "solving PPE");
//    _neededLGSIterations = _PETScSolver->solveLinearSystem();
//    _pResidual           = _PETScSolver->getLastResidualNorm();
//    //debug LGS:
//    //_PETScSolver->writeLGSToMatlabFile("checkPETScLGS");
  }
  else {//TN test environment (if used) Gauss-Seidel
    double res        = 99.0;
    double initRes    = 0.0;
    const double aTol    = 1e-7;
    const int    maxIts  = _repository.getState().getLGSMaxIterations();

    int itCount = 0;
//    _peanoRepository.getGaussSeidelSolverAdapter().prepareForInitResidual();

    _repository.switchToGaussSeidelForEnhancedDivFree();
    while(itCount < maxIts && tarch::la::greater(res,_rTol*initRes + aTol) ){

      #ifdef Parallel
      for(int i = 0; i < std::max(1, maxIts/10)-1; i++){
        _repository.iterate(false);
      }
      itCount += maxIts/10-1;
      #endif

      _repository.iterate();
      itCount++;

//      res     = _peanoRepository.getGaussSeidelSolverAdapter().getResidual();
//      initRes = _peanoRepository.getGaussSeidelSolverAdapter().getInitResidual();
    }
    _neededLGSIterations = itCount;
//    _pResidual           = _peanoRepository.getGaussSeidelSolverAdapter().getResidual();
//    logInfo("solveSystem()", "PPE solution: init residual= " << _peanoRepository.getGaussSeidelSolverAdapter().getInitResidual() );
  }
}



Vector peano::applications::navierstokes::prototype1::FluidSimulation::calculatePressureGradientAndForces(
  const bool forceDesired,
  const int globalForceDirichletBoundaryPartNumber
  ) {
  Vector dirichletForces(0.0);

  if (_useExplicitAssembling){
    assertionFail("not yet implemented!");
//    //_log.debug("calculatePressureGradient()", "starting pressure gradient iteration");
//    if (forceDesired) {
//      _peanoRepository.getPressureGradientAdapter().setGlobalForceDirichletBoundaryPartNumber(globalForceDirichletBoundaryPartNumber);
//    }
//    peano::fluid::FluidCellWithPersistentCellNumber::resetMeasurementMembers();
//    _peanoRepositoryRootEvents.getPressureGradientRootEvent().setIsAllowedToRefineOrCoarse(false);
//    _peanoRepositoryRootEvents.getPressureGradientRootEvent().iterate();
//
//    if (forceDesired) {
//      dirichletForces = _peanoRepository.getPressureGradientAdapter().getGlobalForce();
//    }
  }
  else {
    _log.debug("calculatePressureGradientAndForces()","called calculatePressureGradientAndForces() without any action ...");
  }
  return dirichletForces;
}




void peano::applications::navierstokes::prototype1::FluidSimulation::updateVelocities() {

  //_log.debug("updateVelocities", "starting update velocities iteration");

  ///TODO in mapping:
//  peano::fluid::FluidVertexWithPersistentCellNumber::resetMeasurementMembers();
//  peano::fluid::GridFluidVertex4CrankNicholson::resetMeasurementMembers();
//  peano::fluid::GridFluidVertex4EnhancedDivFree::resetMeasurementMembers();


  _repository.switchToUpdateVelocity();
  _repository.iterate();
}
void peano::applications::navierstokes::prototype1::FluidSimulation::runCartesianGridAdapter(){
  _repository.switchToPlotRegularSolutionVTK();
  _repository.iterate();
}


void peano::applications::navierstokes::prototype1::FluidSimulation::plotOutput(
  const bool        forceDesired,
  const Vector&     forces,
  const std::string timestepNumberWithZeros,
  const bool        internalTrigger
) {
  if (internalTrigger) {
    _repository.switchToPlotSolutionVTK();
    _repository.iterate();
    #ifdef ComponentPrecice
    assertionFail("NextLine not valid any more!");
//    _repository.getPrecice().exportGeometry ( timestepNumberWithZeros );
    #endif
  }
  #ifdef ComponentPrecice
  assertionFail("NextLine not valid any more!");
  if (
      //_repository.getPrecice().isActionRequired(::precice::Constants::PLOT_OUTPUT) &&
      !equals(_repository.getState().getOdeTime(), -1.0))
  {
    assertionFail("NextLine not valid any more!");
//    file << ".precice";
    _repository.switchToPlotSolutionVTK();
    _repository.iterate();
    assertionFail("NextLine not valid any more!");
    //_repository.getPrecice().fulfilledAction(::precice::Constants::PLOT_OUTPUT);
  }
  #endif // defined ComponentPrecice
}

///removed implementePlotOutput()
///skipped readRestartData()
///skipped writeRestartData()
///skipped getLastPressureSolution()
///skipped performImplicitTimestep()
///skipped setNewPressureBoundaryData()
///skipped implementFinalizeTimestepping()
///skipped implementUpdateBoundaryVelocities()
///skipped implementEndTimeStep()
