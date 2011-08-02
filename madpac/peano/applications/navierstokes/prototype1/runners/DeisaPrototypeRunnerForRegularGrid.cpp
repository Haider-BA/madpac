#ifdef CCA
#include "peano/applications/navierstokes/prototype1/runners/DeisaPrototypeRunnerForRegularGrid.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryFactory.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

// @todo Remove this include as soon as you've created your real-world geometry
//#include "peano/geometry/builtin/Sphere.h"

#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/geometry/builtin/DriftRatchet.h"



///manually inserted includes
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#ifdef Parallel
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"
#endif

peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::DeisaPrototypeRunnerForRegularGrid() {
  // @todo Insert your code here
  _timeStep=0;
  _time=0.0;
}


peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::~DeisaPrototypeRunnerForRegularGrid() {
  // @todo Insert your code here
  if(fluidSim!=NULL){
      delete fluidSim;
      fluidSim=NULL;
  }
  if(geometry!=NULL){
      delete geometry;
      geometry=NULL;
  }
  if(repository!=NULL){
      delete repository;
      repository=NULL;
  }
}
void peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::terminate(){
#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()&&repository!=NULL) {
      repository->terminate();
  }
#endif
}
void peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::init(){
#ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
#endif
  bool                                        channelIsInverted    = false;
  const tarch::la::Vector<DIMENSIONS,double>& channelWidth  = Vector(2.46,0.41);
  const tarch::la::Vector<DIMENSIONS,double>& channelOffset = Vector(0.0);
  peano::geometry::GeometryObject* channel = new peano::geometry::builtin::Hexahedron(
          channelIsInverted,
          channelWidth,
          channelOffset
  );
  bool                                         sphereIsInverted = true;
  float                                        sphereRadius = 0.2;
  const tarch::la::Vector<DIMENSIONS,double>&  sphereCenter = Vector(0.5);
  peano::geometry::GeometryObject* obstacle = new peano::geometry::builtin::Sphere(
          sphereIsInverted,
          sphereRadius,
          sphereCenter
  );
  bool                                         driftRatchetIsInverted = false;
  float                                        driftRatchetMaxRadius = 0.205;
  const tarch::la::Vector<DIMENSIONS,double>&  driftRatchetOffset = Vector(0.0,0.205);
  peano::geometry::GeometryObject* driftRatchet = new peano::geometry::builtin::DriftRatchet(
          driftRatchetIsInverted,
          driftRatchetMaxRadius,
          driftRatchetOffset
  );
  geometry=new peano::geometry::Intersection;
  geometry->addGeometry(channel);
  geometry->addGeometry(driftRatchet);

  repository =
      peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::getInstance().createRegularGridStandardImplementation(
          *geometry,
          IntVector(384,64),                                // numberOfGridPoints,
          tarch::la::Vector<DIMENSIONS,double>(2.46,0.41),   // domainSize,
          tarch::la::Vector<DIMENSIONS,double>(0.0)    // computationalDomainOffset
      );

  UserInterface userInterface;
  userInterface.writeHeader();

#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      initAsMaster();

  }
  else {
      initAsClient( *repository );
  }
#else
  initAsMaster();
#endif
}
int peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::initAsMaster() {



  //fill up state
  repository->getState().setLGSMaxIterations(150);
  repository->getState().setPlotterPlotDebugInfo(true);
  repository->getState().setScenarioRe(1.0);
  repository->getState().setScenarioEta(1.0);
  repository->getState().setScenarioRho(1.0);
  repository->getState().setScenarioCharacteristicLength(1.0);
  repository->getState().setOdeTimestepnumber(0);
  //repository->getState().c

  //Instanz. FluidSimulation
  const bool   useDivergenceCorrection = false;
  const double rTol = 1e-7;
  fluidSim= new FluidSimulation ( useDivergenceCorrection, rTol,
      *repository );

  //Zeitschleife (spaeter: ode instanz)

  const bool hasVariableTimeStepSize  = false; //in state???


  const double dummyValue = -1.0;

  fluidSim->implementSetInitialValue(hasVariableTimeStepSize,_time, dummyValue, dummyValue);



  return 1;
}
int peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::runCartesianGridAdapter(){
#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {

      fluidSim->runCartesianGridAdapter();
  }
#else


  fluidSim->runCartesianGridAdapter();

#endif

  return 1;

}
int peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::runOneStep(){
  //repository->getState().setNumberOfVertices(dims);
  int result=1;
#if defined(Parallel)
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      result = runOneTimeStepAsMaster(*repository);

  }
  //reduceDeisaGrid();
#else
  result=runOneTimeStepAsMaster(*repository);
#endif
  //	repository->iterate();
  return result;
}

int peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::runOneTimeStepAsMaster(peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid& repository) {


  //Zeitschleife (spaeter: ode instanz)
  //std::cout<<"computing t:"<<_timeStep<<std::endl;
  double tau  = 0.00001;

  const bool hasVariableTimeStepSize  = false; //in state???
  const double  elapsedCPUTimePerStep = tarch::la::PI;
  const bool    shallOutputBePlotted  = true;  //in state???

  repository.getState().setOdeTimestepnumber(_timeStep);
  repository.getState().setOdeTime(_time);
  repository.getState().setOdeTau(tau);
  fluidSim->implementBeginTimeStep();
  fluidSim->implementDerivativeAndUpdate();
  _time += tau;

  std::ostringstream msg;
  msg << "./testVtk." <<_time << ".vtk";
  std::string timeStepNumberWithLeadingZeros = msg.str();

  fluidSim->implementEndTimeStep(hasVariableTimeStepSize, elapsedCPUTimePerStep,
      shallOutputBePlotted, timeStepNumberWithLeadingZeros);



 // std::cout<<"timestep end"<<std::endl;
  repository.logIterationStatistics();
  _timeStep++;
  return 0;
}


#ifdef Parallel
int peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid::initAsClient(peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
      peano::kernel::regulargrid::parallel::messages::ForkMessage forkMessage;
      forkMessage.receive(tarch::parallel::NodePool::getInstance().getMasterNodeNumber(),tarch::parallel::NodePool::getInstance().getTagForForkMessages());
      repository.restart(
          forkMessage.getNumberOfGridPoints(),
          peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(forkMessage),
          forkMessage.getDomainOffset(),
          forkMessage.getNeighbourRanks()
      );

      while (repository.continueToIterate()) {
          repository.iterate();
      }

      // insert your postprocessing here
      // -------------------------------

      // -------------------------------

      repository.terminate();
  }
  return 0;
}
#endif
#endif
