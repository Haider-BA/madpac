#include "peano/applications/navierstokes/prototype1/scenarios/integrationtests/AbstractTestCaseWithScenario.h"

//#include "peano/applications/navierstokes/prototype1/OperatorFactory.h"
#if defined(ComponentFluidTurbulence)
#include "peano/applications/navierstokes/prototype1/turbulence/LESOperatorFactory.h"
#endif

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#ifdef ComponentStaggeredPoisson
#include "peano/applications/navierstokes/prototype1/records-proxys/GridFluidVertexEulerExplicitMergeWithPoisson.h"
#endif
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

#include "peano/geometry/Intersection.h"
#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/DriftRatchet.h"

#if defined(ComponentPETSc)
#include "petsc/PETScSolver.h"
#endif

#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"
//#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateJacobian.h"

//#include "peano/applications/navierstokes/prototype1/scenarios/FluidDrivenCavity.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidCircleFlow.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannelWithSlipWalls.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInTurbulentChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInAllDirichletChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInDriftRatchet.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidStep.h"
#include "peano/applications/navierstokes/prototype1/scenarios/TimeDependentBoundaryData.h"

//#include "peano/applications/navierstokes/prototype1/runners/repositories/TrivialgridRepository4Fluid.h"
//#include "peano/applications/navierstokes/prototype1/runners/repositories/TrivialgridRepository4FluidRootEvents.h"
//#include "peano/applications/navierstokes/prototype1/runners/repositories/TrivialgridRepository4FluidNonLinear.h"
//#include "peano/applications/navierstokes/prototype1/runners/repositories/TrivialgridRepository4FluidRootEventsNonLinear.h"

//#include "peano/applications/navierstokes/prototype1/runners/PrototypeRunnerForRegularGrid.h" //used for creation of jacobian adapter + TG

#include <iostream>


tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::_log("peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario");


const Vector peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_OFFSET(0.0);
const Vector peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_GEOMETRY_VELOCITY(0.0);
const Vector peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_BOX(1.0);
const Vector peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_MESHSIZE(1.0);
const bool   peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_INVERTED = false;
const int    peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_BASENUMBER = 0;
const double peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_VELOCITY = 1.0;
const Vector peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_INLET_DIMENSIONS(1.0);
const bool   peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL = false;
const double peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_MEAN_INIT_VELOCITY   = 0.0;
const bool   peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_USE_PERIODIC_BC      = false;

const double peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_ADJUSTMENT_FACTOR    = 1.0;
const double peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::DEFAULT_THETA = 1.0;


peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::AbstractTestCaseWithScenario(const std::string& testCaseName):
  TestCase( testCaseName ),
  #if defined(ComponentGeometry) || defined(ComponentPrecice)
  _geometry(NULL),
  #endif
  _fluidScenario(NULL),
  _timeDependentBoundaryData(NULL),
  _calculateF(NULL)
#ifdef ComponentTrivialgrid
  ,
  _trivialgridRepository4Fluid(NULL),
  _trivialgridRepository4FluidRootEvents(NULL),
  _trivialgridRepository4FluidNonLinear(NULL),
  _trivialgridRepository4FluidRootEventsNonLinear(NULL),
  _gridScenarioAdapterTG(NULL),
  _mockAdapterTG(NULL),
  #ifdef Parallel
  _innerCellCountingParallelAdapterTG (NULL),
  #endif
  _updateGridAdapterTG(NULL),
  #if defined(ComponentPETSc)
  _assembleQAdapterTG(NULL),
  _assembleQAdapterDivCorrTG(NULL),
  #endif
  _calculateFAdapterTG(NULL),
  #if defined(ComponentPETSc)
  _pPERHSAdapterTG(NULL),
  _pressureGradientAdapterTG(NULL),
  #endif
  _globalForceAdapterTG(NULL),
  _fluidStructureInteractionAdapterTG(NULL),
  #if defined(ComponentPETSc)
  _updateUWithDivCorrAdapterTG(NULL),
  #endif
  _updateVelocitiesAdapterTG(NULL),
  _readRestartAdapterTG(NULL),
  _writeRestartAdapterTG(NULL),
  _vtkWriterAdapterTG(NULL),
  #ifdef ComponentSteering
  _vtkClientAdapterTG(NULL),
  #endif
  _tecWriterAdapterTG(NULL),
  _cartesianWriterAdapterTG(NULL),
#if defined(ComponentStaggeredPoisson)
  _pPERHSMergeAdapterTG(NULL),
  _pressureGradientMergeAdapterTG(NULL),
  _updateUWithDivCorrMergeAdapterTG(NULL),
  _stencilSetupMergeAdapterTG(NULL),
  _sorSolverMergeAdapterTG(NULL),
#endif
  #if defined(ComponentPETSc)
  _calculateJacobianAdapter(NULL),
  #endif
  _numberCellsAndVerticesAdapter(NULL),
  _uploadUPAdapter(NULL),
  _downloadUPAdapter(NULL),
  _calculateBAdapter(NULL),
  _calculateBCrankNicholsonAdapter(NULL),
  _initCrankNicholsonAdapter(NULL),
  _trivialgridData(NULL),
  _mockTG(NULL),
  #ifdef Parallel
  _innerCellCountingParallelTG (NULL),
  #endif
  _updateGridTG(NULL),
  #if defined(ComponentPETSc)
  _assembleQTG(NULL),
  _assembleQDivCorrTG(NULL),
  #endif
  _calculateFTG(NULL),
  #if defined(ComponentPETSc)
  _ppeRHSTG(NULL),
  _pressureGradientTG(NULL),
  #endif
  _globalForceTG(NULL),
  _fluidStructureInteractionTG(NULL),
  #if defined(ComponentPETSc)
  _updateUWithDivCorrTG(NULL),
  #endif
  _updateUTG(NULL),
  _restartReadTG(NULL),
  _restartWriteTG(NULL),
  _vtkWriterTG(NULL),
  #ifdef ComponentSteering
  _vtkClientTG(NULL),
  #endif
  _tecWriterTG(NULL),
  _cartesianWriterTG(NULL),
  #if defined(ComponentStaggeredPoisson)
  _trivialgridDataMerge(NULL),
  _mockTGMerge(NULL),
  #ifdef Parallel
  _innerCellCountingParallelTGMerge(NULL),
  #endif
  _updateGridTGMerge(NULL),
  #if defined(ComponentPETSc)
  _assembleQTGMerge(NULL),
  _assembleQDivCorrTGMerge(NULL),
  #endif
  _calculateFTGMerge(NULL),
   #if defined(ComponentPETSc)
  _ppeRHSTG4Petsc(NULL),
  _pressureGradientTG4Petsc(NULL),
  #endif
  _ppeRHSTGMerge(NULL),
  _pressureGradientTGMerge(NULL),
  _globalForceTGMerge(NULL),
  _fluidStructureInteractionTGMerge(NULL),
  #if defined(ComponentPETSc)
  _updateUWithDivCorrTG4Petsc(NULL),
  #endif
  _updateUWithDivCorrTGMerge(NULL),
  _updateUTGMerge(NULL),
  _restartReadTGMerge(NULL),
  _restartWriteTGMerge(NULL),
  _vtkWriterTGMerge(NULL),
  #ifdef ComponentSteering
  _vtkClientTGMerge(NULL),
  #endif
  _tecWriterTGMerge(NULL),
  _cartesianWriterTGMerge(NULL),
  _stencilSetupTGMerge(NULL),
  _sorSolverTGMerge(NULL),
#endif
    _trivialgridDataCrankNicholson(NULL),
  _mockTGCrankNicholson(NULL),
#ifdef Parallel
  _innerCellCountingParallelTGCrankNicholson(NULL),
#endif
  _updateGridTGCrankNicholson(NULL),
  #if defined(ComponentPETSc)
  _assembleQTGCrankNicholson(NULL),
  _assembleQDivCorrTGCrankNicholson(NULL),
  #endif
  _calculateFTGCrankNicholson(NULL),
  #if defined(ComponentPETSc)
  _ppeRHSTGCrankNicholson(NULL),
  _pressureGradientTGCrankNicholson(NULL),
  _globalForceTGCrankNicholson(NULL),
  _fluidStructureInteractionTGCrankNicholson(NULL),
  _updateUWithDivCorrTGCrankNicholson(NULL),
  _updateUTGCrankNicholson(NULL),
  #endif
  _restartReadTGCrankNicholson(NULL),
  _restartWriteTGCrankNicholson(NULL),
  _vtkWriterTGCrankNicholson(NULL),
  #ifdef ComponentSteering
  _vtkClientTGCrankNicholson(NULL),
  #endif
  _tecWriterTGCrankNicholson(NULL),
  _cartesianWriterTGCrankNicholson(NULL),
  _calculateJacobianTG(NULL),
  _numberCellsAndVerticesTG(NULL),
  _uploadUPTG(NULL),
  _downloadUPTG(NULL),
  _calculateBTG(NULL),
  _calculateBCrankNicholsonTG(NULL),
  _initCrankNicholsonTG(NULL)
#endif
  {

}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::~AbstractTestCaseWithScenario(){
  deletePointers();
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::deletePointers() {
  deleteGeometryPointer();
  deleteFluidScenarioPointer();
  #if defined(ComponentTrivialgrid)
  deleteTrivialgridAdaptersAndInstances();
  #endif
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::deleteGeometryPointer() {
#if defined(ComponentGeometry) || defined(ComponentPrecice)
  if (_geometry != NULL) {
    delete _geometry;
    _geometry = NULL;
  }
#endif
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::deleteFluidScenarioPointer() {
  if (_fluidScenario != NULL) {
    delete _fluidScenario;
    _fluidScenario = NULL;
  }
}

void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveDefaultHexahedron() {

  createAndSaveHexahedron(DEFAULT_BOX, DEFAULT_OFFSET, DEFAULT_MESHSIZE, DEFAULT_MESHSIZE, DEFAULT_GEOMETRY_VELOCITY);
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveHexahedron(
  const Vector dimensions,
  const Vector origin,
  const Vector hMin,
  const Vector hMax,
  const Vector velocity
) {
  #if defined(ComponentGeometry)
  deleteGeometryPointer();

  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;

  peano::geometry::Hexahedron* channel = new peano::geometry::Hexahedron( hMax, hMin,
                                                            DEFAULT_INVERTED,
                                                            DEFAULT_BASENUMBER,
                                                            dimensions, origin, velocity,
                                                            rotationAxis, rotationVelocity);
  _geometry = new peano::geometry::Intersection(hMax, hMin );
  _geometry->addGeometry(channel);
//  #elif defined(ComponentPrecice) // ComponentGeometry
//  assertion ( (hMin(0) == hMin(1)) ); // Precice can only deal with this
//  assertion ( (hMax(0) == hMax(1)) );
//
//  deleteGeometryPointer();
//
//  using namespace ::precice;
//  using namespace ::precice::mesh;
//  using namespace ::precice::geometry;
//  using namespace ::precice::com;
//  using namespace ::precice::mapping;
//  PtrDataConfiguration dataConfig (new DataConfiguration());
//  dataConfig->addData ("Forces", Data::TYPE_VECTOR);
//  dataConfig->addData ("Velocities", Data::TYPE_VECTOR);
//  dataConfig->addData ("VelocityDeltas", Data::TYPE_VECTOR);
//
//  PtrMeshConfiguration meshConfig (new MeshConfiguration(dataConfig));
//  PtrMesh mesh (new Mesh("Channel", true));
//  mesh->setSubID ("side-0");
//  mesh->setSubID ("side-1");
//  mesh->setSubID ("side-2");
//  mesh->setSubID ("side-3");
//  PtrData forces = mesh->createData ("Forces", Data::TYPE_VECTOR);
//  PtrData velocities = mesh->createData ("Velocities", Data::TYPE_VECTOR);
//  PtrData velocityDeltas = mesh->createData ("VelocityDeltas", Data::TYPE_VECTOR);
//  meshConfig->addMesh (mesh);
//
//  PtrCommunicationConfiguration comConfig;
//
//  PtrGeometryConfiguration geoConfig (new GeometryConfiguration(meshConfig));
//  PtrAbstractGeometry cuboid ( new Cuboid(origin, 1.0, dimensions));
//  geoConfig->addGeometry (cuboid, "Channel");
//
//  precice::PreciceConfiguration preciceConfig;
//  config::CouplingConfiguration cplConfig;
//  cplConfig.setGeometryMode ();
//  cplConfig.setDataConfiguration (dataConfig);
//  cplConfig.setMeshConfiguration (meshConfig);
//  cplConfig.setGeometryConfiguration (geoConfig);
//
//  // Set participant
//  impl::PtrParticipant me (new impl::Participant("Peano", meshConfig));
//  spacetree::PtrAbstractSpacetree spacetree;
//  spacetree::PtrSpacetreeConfiguration spacetreeConfig (new spacetree::SpacetreeConfiguration());
//  me->useMesh (mesh, cuboid, spacetree, Vector(0.0), false, "", false);
//  PtrAbstractMapping mappingForces (new MappingLinearConservative());
//  PtrAbstractMapping mappingVelocities (new MappingLinearConsistent());
//  PtrAbstractMapping mappingVelocityDeltas (new MappingLinearConsistent());
//  me->addWriteData (forces, mesh);
//  me->addReadData (velocities, mesh);
//  me->addReadData (velocityDeltas, mesh);
//  config::PtrParticipantConfiguration participantConfig (
//      new config::ParticipantConfiguration(meshConfig, geoConfig, spacetreeConfig));
//
//  MappingConfiguration mappingConfig (meshConfig);
//  bool incremental = true;
//  bool stationary = false;
//  MappingConfiguration::Direction write = MappingConfiguration::WRITE;
//  MappingConfiguration::Direction read = MappingConfiguration::READ;
//  mappingConfig.addMapping (mappingForces, mesh, write, incremental, stationary);
//  mappingConfig.addMapping (mappingVelocities, mesh, read, incremental, stationary);
//  mappingConfig.addMapping (mappingVelocityDeltas, mesh, read, incremental, stationary);
//  participantConfig->addParticipant (me, mappingConfig);
//  cplConfig.setParticipantConfiguration (participantConfig);
//
//  cplConfig.setIsValid ();
//  preciceConfig.setCouplingConfiguration (cplConfig);
//  preciceConfig.setGeometryAddon ("Channel-side-0", hMin(0), 0);
//  preciceConfig.setGeometryAddon ("Channel-side-1", hMin(0), DIMENSIONS);
//  preciceConfig.setGeometryAddon ("Channel-side-2", hMin(0), 1);
//  preciceConfig.setGeometryAddon ("Channel-side-3", hMin(0), 3);
//  preciceConfig.setDomainMaxMeshwidth (hMax(0));
//
//  _geometry = new precice::PreciceHandle ();
//  _geometry->configure (preciceConfig);
//  _geometry->initialize ();
  #endif // ComponentPrecice
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveHexahedronAndSphere(
  const Vector boxDimensions,
  const Vector boxOrigin,
  const Vector sphereOrigin,
  const double sphereRadius,
  const Vector hMin,
  const Vector hMax,
  const Vector velocity
) {
#if defined(ComponentGeometry)
  deleteGeometryPointer();

  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;

  peano::geometry::Hexahedron* channel = new peano::geometry::Hexahedron( hMax, hMin,
                                                            DEFAULT_INVERTED,
                                                            DEFAULT_BASENUMBER,
                                                            boxDimensions, boxOrigin, velocity,
                                                            rotationAxis, rotationVelocity);
  const bool isInverted    = true;
  const int geometricIndex = DEFAULT_BASENUMBER + 6;
  peano::geometry::Sphere*     sphere = new peano::geometry::Sphere(
      hMax, hMin,
      isInverted, geometricIndex, sphereRadius, sphereOrigin, velocity,
      rotationAxis, rotationVelocity
  );
  _geometry = new peano::geometry::Intersection(hMax, hMin );
  _geometry->addGeometry(channel);
  _geometry->addGeometry(sphere);

//#elif defined(ComponentPrecice)
  //copy/paste hexahedron only; todo!
//  assertion ( (hMin(0) == hMin(1)) ); // Precice can only deal with this
//  assertion ( (hMax(0) == hMax(1)) );
//
//  deleteGeometryPointer();
//
//  precice::PreciceConfiguration preciceConfig;
//  ::precice::config::CouplingInterfaceConfiguration preciceInterfaceConfig;
//  ::precice::container::DataConfiguration emptyDataConfig;
//  ::precice::geometry::GeometryConfiguration geometryConfig ( emptyDataConfig );
//  //Vector shiftedOrigin = origin - (hMin / 100.0);
//  //Vector enlargedDims = dimensions + 2 * (hMin / 100.0);
//  ::precice::geometry::Cuboid cuboid ("pegsi-channel", false, origin, 1.0, dimensions);
//  cuboid.setManualBaseID (0);
//  cuboid.activateManualSideID (1, "pegsi-channel-side-1", DIMENSIONS);
//  cuboid.activateManualSideID (2, "pegsi-channel-side-2", 1);
//  cuboid.activateManualSideID (3, "pegsi-channel-side-3", 3);
//  geometryConfig.addGeometry (cuboid);
//  preciceInterfaceConfig.setGeometryConfiguration (geometryConfig);
//  preciceConfig.setCouplingInterfaceConfiguration (preciceInterfaceConfig);
//  preciceConfig.setGeometryAddon ("pegsi-channel", hMin(0));
//  preciceConfig.setGeometryAddon ("sub-id1", hMin(0));
//  preciceConfig.setGeometryAddon ("sub-id2", hMin(0));
//  preciceConfig.setGeometryAddon ("sub-id3", hMin(0));
//  preciceConfig.setDomainMaxMeshwidth (hMax(0));
//
//  _geometry = new precice::PreciceHandle ();
//  _geometry->configure ( preciceConfig );
#endif
}

#ifdef ComponentPrecice
void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createPreciceHandle(
  const std::string& couplingConfigFilename
) {
  precice::PreciceConfiguration config;
  config.setCouplingConfigFilename(couplingConfigFilename);
  config.setDomainMaxMeshwidth(1.0/3);
  config.setGeometryAddon("PhaseInterface", 1.0/9, 10);
  config.setGeometryAddon("BoundingBox-side-0", 1.0/9, 0);
  config.setGeometryAddon("BoundingBox-side-1", 1.0/9, 2);
  config.setGeometryAddon("BoundingBox-side-2", 1.0/9, 1);
  config.setGeometryAddon("BoundingBox-side-3", 1.0/9, 3);
  #ifdef Dim3
  config.setGeometryAddon("BoundingBox-side-4", 1.0/9, 4);
  config.setGeometryAddon("BoundingBox-side-5", 1.0/9, 5);
  #endif

  _geometry = new precice::PreciceHandle();
  _geometry->configure(config);
}
#endif // ComponentPrecice

void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveDrivenCavityScenario(
  const double lidVelocity
) {
  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidDrivenCavity(lidVelocity);
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveChannelScenario(
  const Vector& inletDimensions,
  const Vector& inletOffset,
  const double& meanInletVelocity,
  const bool    useInletVelocityInWholeChannel
) {

  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInChannel( inletDimensions,
//                                                              inletOffset,
//                                                              meanInletVelocity,
//                                                              useInletVelocityInWholeChannel);
  assertion(_fluidScenario->isValid());
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveChannelWithPressureBCScenario(
  const Vector& inletDimensions,
  const Vector& inletOffset,
  const double& pInlet,
  const double& pOutlet,
  const bool    useInletVelocityInWholeChannel,
  const double& meanInitVelocity,
  const bool    usePeriodicBC
) {

  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInChannel( inletDimensions, inletOffset,
//                                                              pInlet, pOutlet,
//                                                              useInletVelocityInWholeChannel,
//                                                              meanInitVelocity,
//                                                              usePeriodicBC);
  assertion(_fluidScenario->isValid());
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveChannelWithSlipWallsScenario(
  const Vector& inletDimensions,
  const Vector& inletOffset,
  const double& meanInletVelocity,
  const bool    useInletVelocityInWholeChannel
) {

  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInChannelWithSlipWalls( inletDimensions,
//                                                              inletOffset,
//                                                              meanInletVelocity,
//                                                              useInletVelocityInWholeChannel);
  assertion(_fluidScenario->isValid());
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveChannelWithSlipWallsPBCScenario(
  const Vector& inletDimensions,
  const Vector& inletOffset,
  const double& pInlet,
  const double& pOutlet,
  const bool    useInletVelocityInWholeChannel,
  const double& meanInitVelocity,
  const bool    usePeriodicBC
) {

  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInChannelWithSlipWalls( inletDimensions, inletOffset,
//                                                              pInlet, pOutlet,
//                                                              useInletVelocityInWholeChannel,
//                                                              meanInitVelocity,
//                                                              usePeriodicBC);
  assertion(_fluidScenario->isValid());
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveTurbulentChannel(
  const Vector& inletDimensions,
  const Vector& inletOffset,
  const double& pInlet,
  const double& pOutlet,
  const bool    useInletVelocityInWholeChannel,
  const double& meanInitVelocity,
  const bool    usePeriodicBC
) {

  deleteFluidScenarioPointer();

//  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInTurbulentChannel( inletDimensions,
//                                                     inletOffset, pInlet, pOutlet,
//                                                     useInletVelocityInWholeChannel,
//                                                     meanInitVelocity,
//                                                     usePeriodicBC);
  assertion(_fluidScenario->isValid());
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveDefaultDriftRatchet (
  const double  inletRadius,
  const Vector  inletOffset,
  const double  meanInletVelocity
) {
# ifdef ComponentGeometry
  deleteGeometryPointer();
  deleteFluidScenarioPointer();

  Vector channelDimensions(2.0/3.0);
  channelDimensions(0) = 1.0;
  Vector origin(0.0);
  Vector velocity(0.0);
  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;
  double maxRadius = 0.57143 / 2.0;
  double minRadius = peano::geometry::DriftRatchet::getDefaultMinRadius(maxRadius);


  peano::geometry::Hexahedron*   box = new peano::geometry::Hexahedron( Vector(1.0), Vector(1.0), false, 0, channelDimensions, origin, velocity, rotationAxis, rotationVelocity );
  peano::geometry::DriftRatchet* DR = new peano::geometry::DriftRatchet( Vector(1.0), Vector(1.0), false, 1, maxRadius, minRadius, inletOffset, velocity, rotationAxis, rotationVelocity );
  _geometry = new peano::geometry::Intersection( Vector(1.0), Vector(1.0) );

  _geometry->addGeometry(box);
  _geometry->addGeometry(DR);

  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInDriftRatchet( inletRadius, inletOffset,  meanInletVelocity);
  assertion(_fluidScenario->isValid());
# endif
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveDefaultStep(
  const Vector inletDimensions,
  const Vector inletOffset,
  const double meanInletVelocity,
  const bool   usePBC,
  const bool   useInletVelocityInWholeChannel,
  const double pInlet,
  const double pOutlet
) {
# ifdef ComponentGeometry
  deleteGeometryPointer();
  Vector origin(0.0);
  Vector velocity(0.0);
  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;
  Vector channelDimensions(1.0);
  Vector stepDimensions(0.5);

  peano::geometry::Hexahedron*   channel = new peano::geometry::Hexahedron( Vector(1.0), Vector(1.0),
                                                    false, 0, channelDimensions, origin, velocity,
                                                    rotationAxis, rotationVelocity );
  peano::geometry::Hexahedron*   step = new peano::geometry::Hexahedron( Vector(1.0), Vector(1.0),
                                                    true, 2*DIMENSIONS, stepDimensions, origin, velocity,
                                                    rotationAxis, rotationVelocity );

  _geometry = new peano::geometry::Intersection( Vector(1.0), Vector(1.0) );
  _geometry->addGeometry(channel);
  _geometry->addGeometry(step);

  deleteFluidScenarioPointer();
  if (usePBC) {
    _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidStep(inletDimensions, inletOffset,
                                                  pInlet, pOutlet,
                                                  useInletVelocityInWholeChannel, meanInletVelocity);
  }
  else {
    _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidStep(inletDimensions, inletOffset,
                                                  meanInletVelocity, useInletVelocityInWholeChannel);
  }

  assertion(_fluidScenario->isValid());
# endif
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveDefaultTurbulentChannel(
  const double meanInletVelocity,
  const bool   useInletVelocityInWholeChannel,
  const double pInlet,
  const double pOutlet
) {
#ifdef ComponentGeometry
  createAndSaveDefaultHexahedron();

  deleteFluidScenarioPointer();

  Vector inletDimensions = DEFAULT_BOX;
  inletDimensions(0) = 0.0; //flow is in x-direction
  bool usePeriodicBoundaryConditions = true;
  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidObstacleInTurbulentChannel(inletDimensions, DEFAULT_OFFSET,
                                                               pInlet, pOutlet,
                                                               useInletVelocityInWholeChannel,
                                                               meanInletVelocity,
                                                               usePeriodicBoundaryConditions);
  assertion(_fluidScenario->isValid());
#endif // defined(ComponentGeometry)
}

#ifdef ComponentGeometry

peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeDC(
  const double lidVelocity
) {

  return createTGScenarioAdapter_BoxDC(DEFAULT_BOX, DEFAULT_OFFSET, lidVelocity);
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_BoxDC(
  const Vector boxDimensions,
  const Vector origin,
  const double lidVelocity
) {
  deletePointers();

  createAndSaveHexahedron(boxDimensions, origin, DEFAULT_GEOMETRY_VELOCITY);
  assertion(_geometry!=NULL);

  createAndSaveDrivenCavityScenario(lidVelocity);
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeCircleFlow() {
  deletePointers();

  createAndSaveDefaultHexahedron();
  assertion(_geometry!=NULL);

  deleteFluidScenarioPointer();

  _fluidScenario = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::FluidCircleFlow;
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeChannel(
  const double inletVelocity
) {

  return createTGScenarioAdapter_BoxChannel( DEFAULT_BOX, DEFAULT_OFFSET, inletVelocity);
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeChannelWithSlipWalls(
  const double inletVelocity
) {
   deletePointers();

  createAndSaveHexahedron(DEFAULT_BOX, DEFAULT_OFFSET, DEFAULT_GEOMETRY_VELOCITY);

  assertion(_geometry!=NULL);

  createAndSaveChannelWithSlipWallsScenario(DEFAULT_BOX, DEFAULT_OFFSET, inletVelocity,
                               DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL );
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeChannelWithSlipWallsPBC(
  const double pInlet,
  const double pOutlet,
  const bool   useInletVelocityInWholeChannel,
  const double meanInitVelocity
) {
   deletePointers();

  createAndSaveHexahedron(DEFAULT_BOX, DEFAULT_OFFSET, DEFAULT_GEOMETRY_VELOCITY);

  assertion(_geometry!=NULL);

  Vector inletDimensions = DEFAULT_BOX;
  inletDimensions(0) = 0.0; //flow is in x-direction

  createAndSaveChannelWithSlipWallsPBCScenario(inletDimensions,
                                              DEFAULT_OFFSET,
                                              pInlet, pOutlet,
                                              useInletVelocityInWholeChannel,
                                              meanInitVelocity,
                                              DEFAULT_USE_PERIODIC_BC );
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeChannelPBC(
  const double pInlet,
  const double pOutlet,
  const bool   useInletVelocityInWholeChannel,
  const double meanInitVelocity
) {
  deletePointers();

  createAndSaveDefaultHexahedron();
  assertion(_geometry!=NULL);

  Vector inletDimensions = DEFAULT_BOX;
  inletDimensions(0) = 0.0; //flow is in x-direction

  createAndSaveChannelWithPressureBCScenario( inletDimensions,
                                              DEFAULT_OFFSET,
                                              pInlet, pOutlet,
                                              useInletVelocityInWholeChannel,
                                              meanInitVelocity,
                                              DEFAULT_USE_PERIODIC_BC);

  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}


peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_UnitCubeChannelPeriodicBC(
  const double pInlet,
  const double pOutlet,
  const bool   useInletVelocityInWholeChannel,
  const double meanInitVelocity
) {


  deletePointers();

  createAndSaveDefaultHexahedron();

  assertion(_geometry!=NULL);

  Vector inletDimensions = DEFAULT_BOX;
  inletDimensions(0) = 0.0; //flow is in x-direction

  bool usePeriodicBoundaryConditions = true;
  createAndSaveChannelWithPressureBCScenario( inletDimensions,
                                              DEFAULT_OFFSET,
                                              pInlet, pOutlet,
                                              useInletVelocityInWholeChannel,
                                              meanInitVelocity,
                                              usePeriodicBoundaryConditions);
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}

peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_SphereInChannel(
  const Vector boxDimensions,
  const Vector boxOrigin,
  const Vector sphereCenter,
  const double sphereRadius,
  const double inletVelocity
) {

  Vector boxVelocity(0.0);
  Vector sphereVelocity(0.0);
  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;
  deletePointers();
  peano::geometry::Hexahedron*   box = new peano::geometry::Hexahedron( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          DEFAULT_INVERTED, DEFAULT_BASENUMBER,
                                                          boxDimensions, boxOrigin, boxVelocity,
                                                          rotationAxis, rotationVelocity );
  peano::geometry::Sphere*       sphere = new peano::geometry::Sphere(  DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          true,  2*DIMENSIONS, sphereRadius, sphereCenter,
                                                          sphereVelocity, rotationAxis, rotationVelocity );

  _geometry = new peano::geometry::Intersection( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE );
  _geometry->addGeometry(box);
  _geometry->addGeometry(sphere);

  assertion(_geometry!=NULL);

  Vector inletDimensions = boxDimensions;
  inletDimensions(0) = 0.0; //flow is in x-direction

  createAndSaveChannelScenario(boxDimensions, boxOrigin, inletVelocity,
                               DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL );
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}

peano::applications::navierstokes::prototype1::scenarios::integrationtests::GridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createGridScenarioAdapter_SphereInChannel(
  const Vector boxDimensions,
  const Vector boxOrigin,
  const Vector sphereCenter,
  const double sphereRadius,
  const double inletVelocity
) {

  Vector boxVelocity(0.0);
  Vector sphereVelocity(0.0);
  Vector rotationAxis(0.0);rotationAxis(0) = 1.0;
  double rotationVelocity = 0.0;
  deletePointers();
  peano::geometry::Hexahedron*   box = new peano::geometry::Hexahedron( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          DEFAULT_INVERTED, DEFAULT_BASENUMBER,
                                                          boxDimensions, boxOrigin, boxVelocity, rotationAxis,
                                                          rotationVelocity  );
  peano::geometry::Sphere*       sphere = new peano::geometry::Sphere(  DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          true,  2*DIMENSIONS, sphereRadius, sphereCenter,
                                                          sphereVelocity, rotationAxis, rotationVelocity );

  _geometry = new peano::geometry::Intersection( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE );
  _geometry->addGeometry(box);
  _geometry->addGeometry(sphere);

  assertion(_geometry!=NULL);

  Vector inletDimensions = boxDimensions;
  inletDimensions(0) = 0.0; //flow is in x-direction

  createAndSaveChannelScenario(boxDimensions, boxOrigin, inletVelocity,
                               DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL );
  assertion(_fluidScenario!=NULL);

#if defined(ComponentGrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::GridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::GridGeometryHandle2FluidScenarioAdapter();
#endif
}

peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_BoxInChannel(
  const Vector channelDimensions,
  const Vector channelOrigin,
  const Vector obstacleOffset,
  const double obstacleDimensions,
  const Vector obstacleVelocity,
  const double inletVelocity
) {
  Vector channelVelocity(0.0);
  Vector channelRotationAxis(0.0);channelRotationAxis(0) = 1.0;
  double channelRotationVelocity = 0.0;
  Vector obstacleRotationAxis(0.0);obstacleRotationAxis(0) = 1.0;
  double obstacleRotationVelocity = 0.0;
  deletePointers();
  peano::geometry::Hexahedron*   channel = new peano::geometry::Hexahedron( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          DEFAULT_INVERTED, DEFAULT_BASENUMBER,
                                                          channelDimensions, channelOrigin, channelVelocity,
                                                          channelRotationAxis, channelRotationVelocity );
  peano::geometry::Hexahedron*       obstacle = new peano::geometry::Hexahedron(  DEFAULT_MESHSIZE, DEFAULT_MESHSIZE,
                                                          true,  2*DIMENSIONS, obstacleDimensions, obstacleOffset,
                                                          obstacleVelocity, obstacleRotationAxis, obstacleRotationVelocity );

  _geometry = new peano::geometry::Intersection( DEFAULT_MESHSIZE, DEFAULT_MESHSIZE );
  _geometry->addGeometry(channel);
  _geometry->addGeometry(obstacle);

  assertion(_geometry!=NULL);

  Vector inletDimensions = channelDimensions;
  inletDimensions(0) = 0.0; //flow is in x-direction

  createAndSaveChannelScenario(channelDimensions, channelOrigin, inletVelocity,
                               DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL );
  assertion(_fluidScenario!=NULL);

#if defined(ComponentTrivialgrid)
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
#else
  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
#endif
}
#endif // defined ComponentGeometry

//#if defined(ComponentGeometry)
//peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
//#else
//peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridPreCICEHandle2FluidScenarioAdapter
//#endif
//peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_BoxChannel(
//  const Vector boxDimensions,
//  const Vector origin,
//  const double inletVelocity
//) {
//  Vector inletDimensions = boxDimensions;
//  inletDimensions(0) = 0.0; //flow is in x-direction
//
//  return createTGScenarioAdapter_BoxChannelWithInlet( boxDimensions, origin,
//                                       inletDimensions, origin, inletVelocity);
//}

//#if defined(ComponentGeometry)
//peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter
//#else
////peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridPreCICEHandle2FluidScenarioAdapter
//void
//#endif
//peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createTGScenarioAdapter_BoxChannelWithInlet(
//  const Vector boxDimensions,
//  const Vector boxOrigin,
//  const Vector inletDimensions,
//  const Vector inletOffset,
//  const double inletVelocity
//) {
//  deletePointers();
//
//  createAndSaveHexahedron(boxDimensions, boxOrigin, DEFAULT_GEOMETRY_VELOCITY);
//
//  assertion(_geometry!=NULL);
//
//  createAndSaveChannelScenario(inletDimensions, inletOffset, inletVelocity,
//                               DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL );
//  assertion(_fluidScenario!=NULL);
//
//  #if defined(ComponentTrivialgrid)
//    return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
//  #else
//    return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
//  #endif
//  #if defined(ComponentGeometry)
//  #if defined(ComponentTrivialgrid)
//  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter(*_geometry, *_fluidScenario);
//  #else // ComponentTrivialgrid
//  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridGeometryHandle2FluidScenarioAdapter();
//  #endif
//  #else // ComponentGeometry
//  #if defined(ComponentTrivialgrid)
//  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridPreCICEHandle2FluidScenarioAdapter (*_geometry, *_fluidScenario);
//  #else // defined(ComponentTrivialgrid)
//  return peano::applications::navierstokes::prototype1::scenarios::integrationtests::TrivialgridPreCICEHandle2FluidScenarioAdapter ();
//  #endif
//  #endif // defined(ComponentGeometry)
//}

#if defined(ComponentTrivialgrid)
void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::createAndSaveTrivialgridAdaptersAndInstances(
  const IntVector&  numberOfVerticesInDirection,
  const Vector&     domainSize,
  const Vector&     domainOffset,
  const bool        createNonlinearStuff,
  const std::string elementType,
  const bool        useImplicitTimeIntegration,
  const std::string JacobianAssemblingType,
  const double      theta,
  const IntVector   cpuConfig,
  const bool        useMeshStretching,
  const int         stretchingDirection,
  const double      stretchingParameter,
  const bool        useTurbulentComputeDFactor,
  const double      cSmag,
  const bool        isVanDriestDampingInUse,
  const double&     delta,
  const Vector&     offset
) {
  deleteTrivialgridAdaptersAndInstances();

  assertion(_geometry!=0);
  assertion(_fluidScenario!=0);
  assertion(::greater(_fluidScenario->getDensityRho(),0.0));

  //compute h for update grid adapter
  Vector h;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion(numberOfVerticesInDirection(d)>1);
    assertion(::greater(domainSize(d),0.0));
    h(d) = domainSize(d) / (numberOfVerticesInDirection(d)-1);
  }

  if (!useTurbulentComputeDFactor) { //standard case
    _calculateF = fluid::OperatorFactory::loadCalculateF(
                    elementType,
                    _fluidScenario->getDensityRho(), _fluidScenario->getDensityRhoPhase2(),
                    _fluidScenario->getViscosityEta(), _fluidScenario->getViscosityEtaPhase2(),
                    _fluidScenario->isInflowPressureBoundaryConditionUsed(),
                    _fluidScenario->isOutflowPressureBoundaryConditionUsed(),
                    _fluidScenario->isGravityPressureBoundaryConditionUsed(),
                    _fluidScenario->getInletPressure(), _fluidScenario->getOutletPressure(),
                    _fluidScenario->getGravityVector()
                    #ifdef ComponentPrecice
                    , _geometry, _fluidScenario->getSurfaceTensionSigma()
                    #endif
                    );
  }
  else { //turbulent case
    #if defined(ComponentFluidTurbulence)
    _calculateF = fluidturbulence::LESOperatorFactory::loadLESCalculateF(
                    elementType,
                    _fluidScenario->getDensityRho(), _fluidScenario->getDensityRho(),
                    _fluidScenario->getViscosityEta(), _fluidScenario->getViscosityEta(),
                    _fluidScenario->isInflowPressureBoundaryConditionUsed(),
                    _fluidScenario->isOutflowPressureBoundaryConditionUsed(),
                    _fluidScenario->isGravityPressureBoundaryConditionUsed(),
                    _fluidScenario->getInletPressure(), _fluidScenario->getOutletPressure(),
                    _fluidScenario->getGravityVector(),
                    cSmag, isVanDriestDampingInUse, delta, offset
                  );
    #else
    assertionFail("turbulent setup desired but subcomponent turbulence not installed");
    #endif
  }

  //adapters
  _gridScenarioAdapterTG       = new peano::fluid::TGScenarioAdapter(*_geometry,*_fluidScenario);
  _mockAdapterTG               = new peano::fluid::TGMockGridAdapter;
  #ifdef Parallel
  _innerCellCountingParallelAdapterTG = new peano::fluid::TGInnerCellCountingParallelAdapter;
  #endif
  _updateGridAdapterTG         = new peano::fluid::TGUpdateGridAdapter(*_geometry,
                                                                *_fluidScenario);
  _updateGridAdapterTG->setH(h);

  #if defined(ComponentPETSc)
  _assembleQAdapterTG          = new peano::fluid::TGAssembleQAdapter(false);
  _assembleQAdapterDivCorrTG   = new peano::fluid::TGAssembleQAdapter(true);
  #endif
  _calculateFAdapterTG         = new peano::fluid::TGCalculateFAdapter(*_calculateF);
  #if defined(ComponentPETSc)
  _pPERHSAdapterTG             = new peano::fluid::TGPPERHSAdapter(elementType,
                                                                   DEFAULT_ADJUSTMENT_FACTOR);
  _pressureGradientAdapterTG   = new peano::fluid::TGPressureGradientAdapter();
  #endif

  _globalForceAdapterTG        = new peano::fluid::TGGlobalForceAdapter (
  #if defined(ComponentPrecice)
                                            *_geometry
  #endif
                                             );
  _fluidStructureInteractionAdapterTG         = new peano::fluid::TGFluidStructureInteractionAdapter(*_geometry);

  #if defined(ComponentPETSc)
  _updateUWithDivCorrAdapterTG = new peano::fluid::TGUpdateVelocitiesWithDivCorrectionAdapter();
  #endif
  _updateVelocitiesAdapterTG   = new peano::fluid::TGUpdateVelocitiesAdapter;
  #if defined(ComponentPrecice)
  _advectGeometryAdapterTG     = new peano::fluid::TGAdvectGeometryAdapter;
  #endif
  _readRestartAdapterTG        = new peano::fluid::TGRestartReadAdapter;
  _writeRestartAdapterTG       = new peano::fluid::TGRestartWriteAdapter;
  _vtkWriterAdapterTG          = new peano::fluid::TGVTKWriterAdapter(numberOfVerticesInDirection);
  #ifdef ComponentSteering
  _vtkClientAdapterTG          = new peano::fluid::TGVTKClientAdapter;
  #endif
  _tecWriterAdapterTG          = new peano::fluid::TGTECWriterAdapter;
  _cartesianWriterAdapterTG    = new peano::fluid::TGCartesianWriterAdapter;

  // super-epsi
  #if defined(ComponentStaggeredPoisson)
  _pPERHSMergeAdapterTG             = new peano::fluid::TGPPERHSMergeAdapter(elementType, DEFAULT_ADJUSTMENT_FACTOR,
                                                                             _fluidScenario->getDensityRho());
  _pressureGradientMergeAdapterTG   = new peano::fluid::TGPressureGradientMergeAdapter(_fluidScenario->getDensityRho());
  _updateUWithDivCorrMergeAdapterTG = new peano::fluid::TGUpdateVelocitiesWithDivCorrectionMergeAdapter(_fluidScenario->getDensityRho());
//  _staggeredPoissonSetup = new peano::staggeredpoisson::StaggeredPoissonSetup <
//    peano::fluid::MergeTrivialgridFluidAndPoissonVertex,
//    peano::fluid::MergeTrivialgridFluidAndPoissonCell
//    > ( new peano::staggeredpoisson::FluidFiniteElementStencilManager<
//        peano::fluid::MergeTrivialgridFluidAndPoissonVertex,
//        peano::fluid::MergeTrivialgridFluidAndPoissonCell
//      > (),
//      new peano::staggeredpoisson::FluidFiniteElementWeightManager <
//        peano::fluid::MergeTrivialgridFluidAndPoissonVertex,
//        peano::fluid::MergeTrivialgridFluidAndPoissonCell
//      > ()
//    );
//  _stencilSetupMergeAdapterTG = new peano::fluid::TGStencilSetupMergeAdapter(*_staggeredPoissonSetup);
  _stencilSetupMergeAdapterTG = new peano::fluid::TGStencilSetupMergeAdapter();
  _sorSolverMergeAdapterTG = new peano::fluid::TGSORSolverMergeAdapter(1.0);
  #endif

  _trivialgridRepository4Fluid = new peano::fluid::TrivialgridRepository4Fluid(
    *_gridScenarioAdapterTG,
    *_mockAdapterTG,
    #ifdef Parallel
    *_innerCellCountingParallelAdapterTG,
    #endif // Parallel
    *_updateGridAdapterTG,
    // super-epsi
    #if defined(ComponentPETSc)
    *_assembleQAdapterTG,
    *_assembleQAdapterDivCorrTG,
    #endif // ComponentPETSc
    *_calculateFAdapterTG,
    // super-epsi
    #if defined(ComponentPETSc)
    *_pPERHSAdapterTG,
    *_pressureGradientAdapterTG,
    #endif // ComponentPETSc
    *_globalForceAdapterTG,
    *_fluidStructureInteractionAdapterTG,
    // super-epsi
    #if defined(ComponentPETSc)
    *_updateUWithDivCorrAdapterTG,
    #endif // ComponentPETSc
    *_updateVelocitiesAdapterTG,
    #if defined(ComponentPrecice)
    *_advectGeometryAdapterTG,
    #endif
    *_readRestartAdapterTG,
    *_writeRestartAdapterTG,
    *_vtkWriterAdapterTG,
    #ifdef ComponentSteering
    *_vtkClientAdapterTG,
    #endif // ComponentSteering
    *_tecWriterAdapterTG,
    *_cartesianWriterAdapterTG
    // super-epsi
    #if defined(ComponentStaggeredPoisson)
    ,
    *_pPERHSMergeAdapterTG,
    *_pressureGradientMergeAdapterTG,
    *_updateUWithDivCorrMergeAdapterTG,
    *_stencilSetupMergeAdapterTG,
    *_sorSolverMergeAdapterTG
    #endif // ComponentStaggeredPoisson
    #if defined(ComponentPrecice)
    ,
    *_geometry
    #endif // ComponentPrecice
  );


  if (!createNonlinearStuff) {
    _trivialgridData  = new peano::fluid::TGData(numberOfVerticesInDirection);
    //grid instances
    _mockTG               = new peano::fluid::MockTG(numberOfVerticesInDirection,domainSize,domainOffset,
                                       *_trivialgridData,
                                       *_gridScenarioAdapterTG, *_mockAdapterTG,
                                       useMeshStretching, stretchingDirection, stretchingParameter,
                                       cpuConfig);

    #ifdef Parallel
    _innerCellCountingParallelTG = new peano::fluid::InnerCellCountingParallelTG( *_mockTG,*_innerCellCountingParallelAdapterTG);
    #endif
    _updateGridTG         = new peano::fluid::UpdateGridTG(       *_mockTG,*_updateGridAdapterTG);
    #if defined(ComponentPETSc)
    _assembleQTG          = new peano::fluid::AssembleQTG(         *_mockTG,*_assembleQAdapterTG);
    _assembleQDivCorrTG   = new peano::fluid::AssembleQTG(         *_mockTG,*_assembleQAdapterDivCorrTG);
    #endif
    _calculateFTG         = new peano::fluid::CalculateFTG(        *_mockTG,*_calculateFAdapterTG);
    #if defined(ComponentPETSc)
    _ppeRHSTG             = new peano::fluid::PpeRHSTG(            *_mockTG,*_pPERHSAdapterTG);
    _pressureGradientTG   = new peano::fluid::PressureGradientTG(  *_mockTG,*_pressureGradientAdapterTG);
    #endif
    _globalForceTG        = new peano::fluid::GlobalForceTG(       *_mockTG,*_globalForceAdapterTG);
    _fluidStructureInteractionTG = new peano::fluid::FluidStructureInteractionTG(*_mockTG,*_fluidStructureInteractionAdapterTG);
    #if defined(ComponentPETSc)
    _updateUWithDivCorrTG = new peano::fluid::UpdateUWithDivCorrTG(*_mockTG,*_updateUWithDivCorrAdapterTG);
    #endif
    _updateUTG            = new peano::fluid::UpdateUTG(           *_mockTG,*_updateVelocitiesAdapterTG);
    #if defined(ComponentPrecice)
    _advectGeometryTG     = new peano::fluid::AdvectGeometryTG(    *_mockTG,*_advectGeometryAdapterTG);
    #endif
    _restartReadTG        = new peano::fluid::RestartReadTG(       *_mockTG,*_readRestartAdapterTG);
    _restartWriteTG       = new peano::fluid::RestartWriteTG(      *_mockTG,*_writeRestartAdapterTG);
    _vtkWriterTG          = new peano::fluid::VtkWriterTG(         *_mockTG,*_vtkWriterAdapterTG);
    #ifdef ComponentSteering
    _vtkClientTG          = new peano::fluid::VtkClientTG(         *_mockTG,*_vtkClientAdapterTG);
    #endif
    _tecWriterTG          = new peano::fluid::TecWriterTG(         *_mockTG,*_tecWriterAdapterTG);
    _cartesianWriterTG    = new peano::fluid::CartesianWriterTG(   *_mockTG,*_cartesianWriterAdapterTG);



    // super-epsi
    #if defined(ComponentStaggeredPoisson)
    _trivialgridDataMerge             = new peano::fluid::TGDataMerge(numberOfVerticesInDirection);
    _mockTGMerge                      = new peano::fluid::MockTGMerge(numberOfVerticesInDirection,domainSize,
                                                               domainOffset, *_trivialgridDataMerge,
                                                               *_gridScenarioAdapterTG, *_mockAdapterTG,
                                                               useMeshStretching, stretchingDirection, stretchingParameter,
                                                               cpuConfig);
    #ifdef Parallel
    _innerCellCountingParallelTGMerge = new peano::fluid::InnerCellCountingParallelTGMerge( *_mockTGMerge,*_innerCellCountingParallelAdapterTG);
    #endif // Parallel
    _updateGridTGMerge         = new peano::fluid::UpdateGridTGMerge(       *_mockTGMerge,*_updateGridAdapterTG);
    #if defined(ComponentPETSc)
    _assembleQTGMerge          = new peano::fluid::AssembleQTGMerge(         *_mockTGMerge,*_assembleQAdapterTG);
    _assembleQDivCorrTGMerge   = new peano::fluid::AssembleQTGMerge(         *_mockTGMerge,*_assembleQAdapterDivCorrTG);
    #endif
    _calculateFTGMerge                = new peano::fluid::CalculateFTGMerge(        *_mockTGMerge,*_calculateFAdapterTG);
    #if defined(ComponentPETSc)
    _ppeRHSTG4Petsc                    = new peano::fluid::PpeRHSTG4Petsc(            *_mockTGMerge,*_pPERHSAdapterTG);
    _pressureGradientTG4Petsc          = new peano::fluid::PressureGradientTG4Petsc(  *_mockTGMerge,*_pressureGradientAdapterTG);
    #endif
    _ppeRHSTGMerge                    = new peano::fluid::PpeRHSTGMerge(            *_mockTGMerge,*_pPERHSMergeAdapterTG);
    _pressureGradientTGMerge          = new peano::fluid::PressureGradientTGMerge(  *_mockTGMerge,*_pressureGradientMergeAdapterTG);
    _globalForceTGMerge               = new peano::fluid::GlobalForceTGMerge(       *_mockTGMerge,*_globalForceAdapterTG);
    _fluidStructureInteractionTGMerge = new peano::fluid::FluidStructureInteractionTGMerge( *_mockTGMerge, *_fluidStructureInteractionAdapterTG);
    #if defined(ComponentPETSc)
    _updateUWithDivCorrTG4Petsc        = new peano::fluid::UpdateUWithDivCorrTG4Petsc(*_mockTGMerge,*_updateUWithDivCorrAdapterTG);
    #endif
    _updateUWithDivCorrTGMerge        = new peano::fluid::UpdateUWithDivCorrTGMerge(*_mockTGMerge,*_updateUWithDivCorrMergeAdapterTG);
    _updateUTGMerge                   = new peano::fluid::UpdateUTGMerge(           *_mockTGMerge,*_updateVelocitiesAdapterTG);
    _restartReadTGMerge               = new peano::fluid::RestartReadTGMerge(       *_mockTGMerge,*_readRestartAdapterTG);
    _restartWriteTGMerge              = new peano::fluid::RestartWriteTGMerge(      *_mockTGMerge,*_writeRestartAdapterTG);
    _vtkWriterTGMerge                 = new peano::fluid::VtkWriterTGMerge(         *_mockTGMerge,*_vtkWriterAdapterTG);
    #ifdef ComponentSteering
    _vtkClientTGMerge                 = new peano::fluid::VtkClientTGMerge(         *_mockTGMerge,*_vtkClientAdapterTG);
    #endif // ComponentSteering
    _tecWriterTGMerge                 = new peano::fluid::TecWriterTGMerge(         *_mockTGMerge,*_tecWriterAdapterTG);
    _cartesianWriterTGMerge           = new peano::fluid::CartesianWriterTGMerge(   *_mockTGMerge,*_cartesianWriterAdapterTG);
    _stencilSetupTGMerge      = new peano::fluid::StencilSetupTGMerge(*_mockTGMerge,*_stencilSetupMergeAdapterTG);
    _sorSolverTGMerge = new peano::fluid::SORSolverTGMerge(*_mockTGMerge,*_sorSolverMergeAdapterTG);
    #endif // ComponentStaggeredPoisson
  //  _timeDependentBoundaryData = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::TimeDependentBoundaryData();

    #if (!defined(ComponentStaggeredPoisson))
    _trivialgridRepository4FluidRootEvents = new peano::fluid::TrivialgridRepository4FluidRootEvents(
      peano::fluid::TrivialgridRepository4FluidRootEvents::ODE_TYPE_EXPLICIT,
      *_mockTG,
      #ifdef Parallel
      *_innerCellCountingParallelTG,
      #endif // Parallel
      *_updateGridTG,
      #if defined(ComponentPETSc)
      *_assembleQTG,
      *_assembleQDivCorrTG,
      #endif // ComponentPETSc
      *_calculateFTG,
      #if defined(ComponentPETSc)
      *_ppeRHSTG,
      *_pressureGradientTG,
      #endif // ComponentPETSc
      *_globalForceTG,
      *_fluidStructureInteractionTG,
      #if defined(ComponentPETSc)
      *_updateUWithDivCorrTG,
      #endif // ComponentPETSc
      *_updateUTG,
      #if defined(ComponentPrecice)
      *_advectGeometryTG,
      #endif
      *_restartReadTG,
      *_restartWriteTG,
      *_vtkWriterTG,
      #ifdef ComponentSteering
      *_vtkClientTG,
      #endif // ComponentSteering
      *_tecWriterTG,
      *_cartesianWriterTG
      );
      #else
      _trivialgridRepository4FluidRootEvents = new peano::fluid::TrivialgridRepository4FluidRootEvents(
        peano::fluid::TrivialgridRepository4FluidRootEvents::ODE_TYPE_EXPLICIT,
        *_mockTGMerge,
        #ifdef Parallel
        *_innerCellCountingParallelTGMerge,
        #endif // Parallel
        *_updateGridTGMerge,
        // super-epsi
        #if defined(ComponentPETSc)
        *_assembleQTGMerge,
        *_assembleQDivCorrTGMerge,
        #endif // ComponentPETSc
        *_calculateFTGMerge,
        #if defined(ComponentPETSc)
        *_ppeRHSTG4Petsc,
        *_pressureGradientTG4Petsc,
        #endif
        *_ppeRHSTGMerge,
        *_pressureGradientTGMerge,
        *_globalForceTGMerge,
        *_fluidStructureInteractionTGMerge,
        #if defined(ComponentPETSc)
        *_updateUWithDivCorrTG4Petsc,
        #endif // ComponentPETSc
        *_updateUWithDivCorrTGMerge,
        *_updateUTGMerge,
        *_restartReadTGMerge,
        *_restartWriteTGMerge,
        *_vtkWriterTGMerge,
        #ifdef ComponentSteering
        *_vtkClientTGMerge,
        #endif // ComponentSteering
        *_tecWriterTGMerge,
        *_cartesianWriterTGMerge,
        *_stencilSetupTGMerge,
        *_sorSolverTGMerge
      );
      #endif
  }
  else {

  	// super-epsi TODO
  	#ifndef ComponentStaggeredPoisson

    _trivialgridDataCrankNicholson  = new peano::fluid::TGDataCrankNicholson(numberOfVerticesInDirection);

    tarch::la::Vector<DIMENSIONS,int>  cpuConfig(1);
    _mockTGCrankNicholson               = new peano::fluid::MockTGCrankNicholson(numberOfVerticesInDirection,domainSize,domainOffset,
                                       *_trivialgridDataCrankNicholson,
                                       *_gridScenarioAdapterTG, *_mockAdapterTG,
                                       useMeshStretching, stretchingDirection, stretchingParameter, cpuConfig);
    #ifdef Parallel
    //_innerCellCountingParallelTGCrankNicholson = new peano::fluid::InnerCellCountingParallelTGCrankNicholson(*_mockTGCrankNicholson,*_innerCellCountingParallelTG);
    #endif
    _updateGridTGCrankNicholson         = new peano::fluid::UpdateGridTGCrankNicholson(        *_mockTGCrankNicholson,*_updateGridAdapterTG);
    // super-epsi
    #if defined(ComponentPETSc)
    _assembleQTGCrankNicholson          = new peano::fluid::AssembleQTGCrankNicholson(         *_mockTGCrankNicholson,*_assembleQAdapterTG);
    _assembleQDivCorrTGCrankNicholson   = new peano::fluid::AssembleQTGCrankNicholson(         *_mockTGCrankNicholson,*_assembleQAdapterDivCorrTG);
    #endif
    _calculateFTGCrankNicholson         = new peano::fluid::CalculateFTGCrankNicholson(        *_mockTGCrankNicholson,*_calculateFAdapterTG);
    // super-epsi
    #if defined(ComponentPETSc)
    _ppeRHSTGCrankNicholson             = new peano::fluid::PpeRHSTGCrankNicholson(            *_mockTGCrankNicholson,*_pPERHSAdapterTG);
    _pressureGradientTGCrankNicholson   = new peano::fluid::PressureGradientTGCrankNicholson(  *_mockTGCrankNicholson,*_pressureGradientAdapterTG);
    _globalForceTGCrankNicholson        = new peano::fluid::GlobalForceTGCrankNicholson(       *_mockTGCrankNicholson,*_globalForceAdapterTG);
    _fluidStructureInteractionTGCrankNicholson       = new peano::fluid::FluidStructureInteractionTGCrankNicholson(        *_mockTGCrankNicholson,*_fluidStructureInteractionAdapterTG);
    _updateUWithDivCorrTGCrankNicholson = new peano::fluid::UpdateUWithDivCorrTGCrankNicholson(*_mockTGCrankNicholson,*_updateUWithDivCorrAdapterTG);
    _updateUTGCrankNicholson            = new peano::fluid::UpdateUTGCrankNicholson(           *_mockTGCrankNicholson,*_updateVelocitiesAdapterTG);
    #if defined(ComponentPrecice)
    _advectGeometryTGCrankNicholson     = new peano::fluid::AdvectGeometryTGCrankNicholson(    *_mockTGCrankNicholson,*_advectGeometryAdapterTG);
    #endif // ComponentPrecice
    #endif // ComponentPETSc
    _restartReadTGCrankNicholson        = new peano::fluid::RestartReadTGCrankNicholson(       *_mockTGCrankNicholson,*_readRestartAdapterTG);
    _restartWriteTGCrankNicholson       = new peano::fluid::RestartWriteTGCrankNicholson(      *_mockTGCrankNicholson,*_writeRestartAdapterTG);
    _vtkWriterTGCrankNicholson          = new peano::fluid::VtkWriterTGCrankNicholson(         *_mockTGCrankNicholson,*_vtkWriterAdapterTG);
    #ifdef ComponentSteering
    _vtkClientTGCrankNicholson          = new peano::fluid::VtkClientTGCrankNicholson(         *_mockTGCrankNicholson,*_vtkClientAdapterTG);
	 #endif
    _tecWriterTGCrankNicholson          = new peano::fluid::TecWriterTGCrankNicholson(         *_mockTGCrankNicholson,*_tecWriterAdapterTG);
    _cartesianWriterTGCrankNicholson    = new peano::fluid::CartesianWriterTGCrankNicholson(   *_mockTGCrankNicholson,*_cartesianWriterAdapterTG);
//    _timeDependentBoundaryData = new peano::applications::navierstokes::prototype1::scenarios::integrationtests::TimeDependentBoundaryData();

    _trivialgridRepository4FluidRootEvents = new peano::fluid::TrivialgridRepository4FluidRootEvents(
      peano::fluid::TrivialgridRepository4FluidRootEvents::ODE_TYPE_IMPLICIT,
      *_mockTGCrankNicholson,
      #ifdef Parallel
      *_innerCellCountingParallelTGCrankNicholson,
      #endif // Parallel
      *_updateGridTGCrankNicholson,
      // super-epsi
      #if defined(ComponentPETSc)
      *_assembleQTGCrankNicholson,
      *_assembleQDivCorrTGCrankNicholson,
      #endif // ComponentPETSc
      *_calculateFTGCrankNicholson,
      // super-epsi
      #if defined(ComponentPETSc)
      *_ppeRHSTGCrankNicholson,
      *_pressureGradientTGCrankNicholson,
      *_globalForceTGCrankNicholson,
      *_fluidStructureInteractionTGCrankNicholson,
      *_updateUWithDivCorrTGCrankNicholson,
      *_updateUTGCrankNicholson,
      #if defined(ComponentPrecice)
      *_advectGeometryTGCrankNicholson,
      #endif // ComponentPrecice
      #endif // ComponentPETSc
      *_restartReadTGCrankNicholson,
      *_restartWriteTGCrankNicholson,
      *_vtkWriterTGCrankNicholson,
      #ifdef ComponentSteering
      *_vtkClientTGCrankNicholson,
      #endif // ComponentSteering
      *_tecWriterTGCrankNicholson,
      *_cartesianWriterTGCrankNicholson
    );

    //_calculateJacobianAdapter  // comes now in creation call below
    _numberCellsAndVerticesAdapter  = new peano::fluid::TGNumberCellsAndVerticesAdapter;
    _uploadUPAdapter                = new peano::fluid::TGUploadUPAdapter;
    _downloadUPAdapter              = new peano::fluid::TGDownloadUPAdapter;
    _calculateBAdapter              = new peano::fluid::TGCalculateBAdapter(
                                                *_calculateF,
                                                DEFAULT_ADJUSTMENT_FACTOR);
    _calculateBCrankNicholsonAdapter = new peano::fluid::TGCalculateBCrankNicholsonAdapter(
                                                *_calculateF,
                                                DEFAULT_ADJUSTMENT_FACTOR,
                                                useImplicitTimeIntegration,
                                                theta
                                              );
    _initCrankNicholsonAdapter = new peano::fluid::TGInitCrankNicholsonAdapter(
                                                *_calculateF
                                             );

    //_calculateJacobianTG       = // comes now in creation call below
    const bool isMatrixFreeJacobianInUse = false;
    peano::fluid::TrivialgridFluidRunner::createJacobianAdapterAndTrivialgrid(
      _calculateJacobianAdapter,_calculateJacobianTG,
      *_calculateF,
      *_mockTGCrankNicholson,
      #if defined(ComponentPETSc)
      JacobianAssemblingType, isMatrixFreeJacobianInUse,
      #endif
      DEFAULT_ADJUSTMENT_FACTOR, useImplicitTimeIntegration,
      _fluidScenario->getDensityRho(),
      theta
    );

    _numberCellsAndVerticesTG  = new peano::fluid::NumberCellsAndVerticesTG(  *_mockTGCrankNicholson,*_numberCellsAndVerticesAdapter);
    _uploadUPTG                = new peano::fluid::UploadUPTG(                *_mockTGCrankNicholson,*_uploadUPAdapter);
    _downloadUPTG              = new peano::fluid::DownloadUPTG(              *_mockTGCrankNicholson,*_downloadUPAdapter);
    _calculateBTG              = new peano::fluid::CalculateBTG(              *_mockTGCrankNicholson,*_calculateBAdapter);
    _calculateBCrankNicholsonTG = new peano::fluid::CalculateBCrankNicholsonTG( *_mockTGCrankNicholson,*_calculateBCrankNicholsonAdapter);
    _initCrankNicholsonTG       = new peano::fluid::InitCrankNicholsonTG(       *_mockTGCrankNicholson,*_initCrankNicholsonAdapter);



    _trivialgridRepository4FluidNonLinear = new peano::fluid::TrivialgridRepository4FluidNonLinear(
        #if defined(ComponentPETSc)
        *_calculateJacobianAdapter,
        #endif
        *_calculateBAdapter,
        *_calculateBCrankNicholsonAdapter,
        *_downloadUPAdapter,
        *_numberCellsAndVerticesAdapter,
        *_uploadUPAdapter,
        *_initCrankNicholsonAdapter
    );
    _trivialgridRepository4FluidRootEventsNonLinear = new peano::fluid::TrivialgridRepository4FluidRootEventsNonLinear(
        *_calculateJacobianTG,
        *_calculateBTG,
        *_calculateBCrankNicholsonTG,
        *_downloadUPTG,
        *_numberCellsAndVerticesTG,
        *_uploadUPTG,
        *_initCrankNicholsonTG
    );

    #endif // ifndef ComponentStaggeredPoisson

    #if defined(ComponentStaggeredPoisson)
    _log.error("createAndSaveTrivialgridAdaptersAndInstances()", "Crank-nicholson case not supported if staggered-poisson is switched on!");
    #endif

  }
}


void peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario::deleteTrivialgridAdaptersAndInstances() {
  if (_timeDependentBoundaryData!=NULL) {
    delete _timeDependentBoundaryData;
    _timeDependentBoundaryData = NULL;
  }
  if (_calculateF!=NULL) {
    delete _calculateF;
    _calculateF = NULL;
  }

  if (_trivialgridRepository4Fluid != NULL) {
    delete _trivialgridRepository4Fluid;
    _trivialgridRepository4Fluid = NULL;
  }
  if (_trivialgridRepository4FluidRootEvents != NULL) {
    delete _trivialgridRepository4FluidRootEvents;
    _trivialgridRepository4FluidRootEvents = NULL;
  }
  if (_trivialgridRepository4FluidNonLinear != NULL) {
    delete _trivialgridRepository4FluidNonLinear;
    _trivialgridRepository4FluidNonLinear = NULL;
  }
  if (_trivialgridRepository4FluidRootEventsNonLinear != NULL) {
    delete _trivialgridRepository4FluidRootEventsNonLinear;
    _trivialgridRepository4FluidRootEventsNonLinear = NULL;
  }
  //adapters
  if (_gridScenarioAdapterTG != NULL) {
    delete _gridScenarioAdapterTG;
    _gridScenarioAdapterTG = NULL;
  }
  if (_mockAdapterTG != NULL) {
    delete _mockAdapterTG;
    _mockAdapterTG = NULL;
  }
  #ifdef Parallel
  if (_innerCellCountingParallelAdapterTG != NULL) {
    delete _innerCellCountingParallelAdapterTG;
    _innerCellCountingParallelAdapterTG = NULL;
  }
  #endif
  if (_updateGridAdapterTG != NULL) {
    delete _updateGridAdapterTG;
    _updateGridAdapterTG = NULL;
  }

  // super-epsi
  #if defined(ComponentPETSc)
  if (_assembleQAdapterTG != NULL) {
    delete _assembleQAdapterTG;
    _assembleQAdapterTG = NULL;
  }
  if (_assembleQAdapterDivCorrTG != NULL) {
    delete _assembleQAdapterDivCorrTG;
    _assembleQAdapterDivCorrTG = NULL;
  }
  #endif
  if (_calculateFAdapterTG != NULL) {
    delete _calculateFAdapterTG;
    _calculateFAdapterTG = NULL;
  }

  #if defined(ComponentPETSc)
  if (_pPERHSAdapterTG != NULL) {
    delete _pPERHSAdapterTG;
    _pPERHSAdapterTG = NULL;
  }
  if (_pressureGradientAdapterTG != NULL) {
    delete _pressureGradientAdapterTG;
    _pressureGradientAdapterTG = NULL;
  }
  #endif
  if (_globalForceAdapterTG != NULL) {
    delete _globalForceAdapterTG;
    _globalForceAdapterTG = NULL;
  }
  if (_fluidStructureInteractionAdapterTG != NULL) {
    delete _fluidStructureInteractionAdapterTG;
    _fluidStructureInteractionAdapterTG = NULL;
  }

  #if defined(ComponentPETSc)
  if (_updateUWithDivCorrAdapterTG != NULL) {
    delete _updateUWithDivCorrAdapterTG;
    _updateUWithDivCorrAdapterTG = NULL;
  }
  #endif

  if (_updateVelocitiesAdapterTG != NULL) {
    delete _updateVelocitiesAdapterTG;
    _updateVelocitiesAdapterTG = NULL;
  }
  if (_readRestartAdapterTG != NULL) {
    delete _readRestartAdapterTG;
    _readRestartAdapterTG = NULL;
  }
  if (_writeRestartAdapterTG != NULL) {
    delete _writeRestartAdapterTG;
    _writeRestartAdapterTG = NULL;
  }
  if (_vtkWriterAdapterTG != NULL) {
    delete _vtkWriterAdapterTG;
    _vtkWriterAdapterTG = NULL;
  }
  #ifdef ComponentSteering
  if (_vtkClientAdapterTG != NULL) {
     delete _vtkClientAdapterTG;
     _vtkClientAdapterTG = NULL;
  }
  #endif
  if (_tecWriterAdapterTG != NULL) {
    delete _tecWriterAdapterTG;
    _tecWriterAdapterTG = NULL;
  }
  if (_cartesianWriterAdapterTG != NULL) {
    delete _cartesianWriterAdapterTG;
    _cartesianWriterAdapterTG = NULL;
  }

  #if defined(ComponentPETSc)
  if (_calculateJacobianAdapter != NULL) {
    delete _calculateJacobianAdapter;
    _calculateJacobianAdapter = NULL;
  }
  #endif
  if (_numberCellsAndVerticesAdapter != NULL) {
    delete _numberCellsAndVerticesAdapter;
    _numberCellsAndVerticesAdapter = NULL;
  }
  if (_uploadUPAdapter != NULL) {
    delete _uploadUPAdapter;
    _uploadUPAdapter = NULL;
  }
  if (_downloadUPAdapter != NULL) {
    delete _downloadUPAdapter;
    _downloadUPAdapter = NULL;
  }
  if (_calculateBAdapter != NULL) {
    delete _calculateBAdapter;
    _calculateBAdapter = NULL;
  }
  if (_calculateBCrankNicholsonAdapter != NULL) {
    delete _calculateBCrankNicholsonAdapter;
    _calculateBCrankNicholsonAdapter = NULL;
  }
  if (_initCrankNicholsonAdapter != NULL) {
    delete _initCrankNicholsonAdapter;
    _initCrankNicholsonAdapter = NULL;
  }


  if (_trivialgridData != NULL) {
    delete _trivialgridData;
    _trivialgridData = NULL;
  }
  if (_trivialgridDataCrankNicholson != NULL) {
    delete _trivialgridDataCrankNicholson;
    _trivialgridDataCrankNicholson = NULL;
  }
  //grid instances
  if (_mockTG != NULL) {
    delete _mockTG;
    _mockTG = NULL;
  }
  #ifdef Parallel
  if (_innerCellCountingParallelTG != NULL) {
    delete _innerCellCountingParallelTG;
    _innerCellCountingParallelTG = NULL;
  }
  #endif
  if (_updateGridTG != NULL) {
    delete _updateGridTG;
    _updateGridTG = NULL;
  }
  // super-epsi
  #if defined(ComponentPETSc)
  if (_assembleQTG != NULL) {
    delete _assembleQTG;
    _assembleQTG = NULL;
  }
  if (_assembleQDivCorrTG != NULL) {
    delete _assembleQDivCorrTG;
    _assembleQDivCorrTG = NULL;
  }
  #endif
  if (_calculateFTG != NULL) {
    delete _calculateFTG;
    _calculateFTG = NULL;
  }
  // super-epsi
  #if defined(ComponentPETSc)
  if (_ppeRHSTG != NULL) {
    delete _ppeRHSTG;
    _ppeRHSTG = NULL;
  }
  if (_pressureGradientTG != NULL) {
    delete _pressureGradientTG;
    _pressureGradientTG = NULL;
  }
  #endif
  if (_globalForceTG != NULL) {
    delete _globalForceTG;
    _globalForceTG = NULL;
  }
  if (_fluidStructureInteractionTG != NULL) {
    delete _fluidStructureInteractionTG;
    _fluidStructureInteractionTG = NULL;
  }

  #if defined(ComponentPETSc)
  if (_updateUWithDivCorrTG != NULL) {
    delete _updateUWithDivCorrTG;
    _updateUWithDivCorrTG = NULL;
  }
  #endif
  if (_updateUTG != NULL) {
    delete _updateUTG;
    _updateUTG = NULL;
  }
  if (_restartReadTG != NULL) {
    delete _restartReadTG;
    _restartReadTG = NULL;
  }
  if (_restartWriteTG != NULL) {
    delete _restartWriteTG;
    _restartWriteTG = NULL;
  }
  if (_vtkWriterTG != NULL) {
    delete _vtkWriterTG;
    _vtkWriterTG = NULL;
  }
  #ifdef ComponentSteering
  if (_vtkClientTG != NULL) {
     delete _vtkClientTG;
     _vtkClientTG = NULL;
  }
  #endif
  if (_tecWriterTG != NULL) {
    delete _tecWriterTG;
    _tecWriterTG = NULL;
  }
  if (_cartesianWriterTG != NULL) {
    delete _cartesianWriterTG;
    _cartesianWriterTG = NULL;
  }


  if (_mockTGCrankNicholson != NULL) {
    delete _mockTGCrankNicholson;
    _mockTGCrankNicholson = NULL;
  }
  #ifdef Parallel
  if (_innerCellCountingParallelTGCrankNicholson != NULL) {
    delete _innerCellCountingParallelTGCrankNicholson;
    _innerCellCountingParallelTGCrankNicholson = NULL;
  }
  #endif
  if (_updateGridTGCrankNicholson != NULL) {
    delete _updateGridTGCrankNicholson;
    _updateGridTGCrankNicholson = NULL;
  }

  // super-epsi
  #if defined(ComponentPETSc)
  if (_assembleQTGCrankNicholson != NULL) {
    delete _assembleQTGCrankNicholson;
    _assembleQTGCrankNicholson = NULL;
  }
  if (_assembleQDivCorrTGCrankNicholson != NULL) {
    delete _assembleQDivCorrTGCrankNicholson;
    _assembleQDivCorrTGCrankNicholson = NULL;
  }
  #endif
  if (_calculateFTGCrankNicholson != NULL) {
    delete _calculateFTGCrankNicholson;
    _calculateFTGCrankNicholson = NULL;
  }
  // super-epsi
  #if defined(ComponentPETSc)
  if (_ppeRHSTGCrankNicholson != NULL) {
    delete _ppeRHSTGCrankNicholson;
    _ppeRHSTGCrankNicholson = NULL;
  }
  if (_pressureGradientTGCrankNicholson != NULL) {
    delete _pressureGradientTGCrankNicholson;
    _pressureGradientTGCrankNicholson = NULL;
  }
  if (_globalForceTGCrankNicholson != NULL) {
    delete _globalForceTGCrankNicholson;
    _globalForceTGCrankNicholson = NULL;
  }
  if (_fluidStructureInteractionTGCrankNicholson != NULL) {
    delete _fluidStructureInteractionTGCrankNicholson;
    _fluidStructureInteractionTGCrankNicholson = NULL;
  }
  if (_updateUWithDivCorrTGCrankNicholson != NULL) {
    delete _updateUWithDivCorrTGCrankNicholson;
    _updateUWithDivCorrTGCrankNicholson = NULL;
  }
  if (_updateUTGCrankNicholson != NULL) {
    delete _updateUTGCrankNicholson;
    _updateUTGCrankNicholson = NULL;
  }
  #endif
  if (_restartReadTGCrankNicholson != NULL) {
    delete _restartReadTGCrankNicholson;
    _restartReadTGCrankNicholson = NULL;
  }
  if (_restartWriteTGCrankNicholson != NULL) {
    delete _restartWriteTGCrankNicholson;
    _restartWriteTGCrankNicholson = NULL;
  }
  if (_vtkWriterTGCrankNicholson != NULL) {
    delete _vtkWriterTGCrankNicholson;
    _vtkWriterTGCrankNicholson = NULL;
  }
  #ifdef ComponentSteering
  if (_vtkClientTGCrankNicholson != NULL) {
      delete _vtkClientTGCrankNicholson;
      _vtkClientTGCrankNicholson = NULL;
  }
  #endif
  if (_tecWriterTGCrankNicholson != NULL) {
    delete _tecWriterTGCrankNicholson;
    _tecWriterTGCrankNicholson = NULL;
  }
  if (_cartesianWriterTGCrankNicholson != NULL) {
    delete _cartesianWriterTGCrankNicholson;
    _cartesianWriterTGCrankNicholson = NULL;
  }
  if (_calculateJacobianTG != NULL) {
    delete _calculateJacobianTG;
    _calculateJacobianTG = NULL;
  }
  if (_numberCellsAndVerticesTG != NULL) {
    delete _numberCellsAndVerticesTG;
    _numberCellsAndVerticesTG = NULL;
  }
  if (_uploadUPTG != NULL) {
    delete _uploadUPTG;
    _uploadUPTG = NULL;
  }
  if (_downloadUPTG != NULL) {
    delete _downloadUPTG;
    _downloadUPTG = NULL;
  }
  if (_calculateBTG != NULL) {
    delete _calculateBTG;
    _calculateBTG = NULL;
  }
  if (_calculateBCrankNicholsonTG != NULL) {
    delete _calculateBCrankNicholsonTG;
    _calculateBCrankNicholsonTG = NULL;
  }
  if (_initCrankNicholsonTG != NULL) {
    delete _initCrankNicholsonTG;
    _initCrankNicholsonTG = NULL;
  }

  #if defined(ComponentStaggeredPoisson)
  // adapters
  if (_pPERHSMergeAdapterTG != NULL){
  	delete _pPERHSMergeAdapterTG;
  }
  if (_pressureGradientMergeAdapterTG != NULL){
  	delete _pressureGradientMergeAdapterTG;
  }
  if (_updateUWithDivCorrMergeAdapterTG != NULL){
  	delete _updateUWithDivCorrMergeAdapterTG;
  }

  // grids
  if (_trivialgridDataMerge != NULL){
  	delete _trivialgridDataMerge;
  }
  if (_mockTGMerge != NULL){
  	delete _mockTGMerge;
  }


  #ifdef Parallel
  if (_innerCellCountingParallelTGMerge != NULL){
  	delete _innerCellCountingParallelTGMerge;
  }
  #endif

  if (_calculateFTGMerge != NULL){
  	delete _calculateFTGMerge;
  }
  if (_globalForceTGMerge != NULL){
  	delete _globalForceTGMerge;
  }
  if (_fluidStructureInteractionTGMerge != NULL){
  	delete _fluidStructureInteractionTGMerge;
  }
  if (_updateUTGMerge != NULL){
  	delete _updateUTGMerge;
  }
  if (_restartReadTGMerge != NULL){
  	delete _restartReadTGMerge;
  }
  if (_restartWriteTGMerge != NULL){
  	delete _restartWriteTGMerge;
  }
  if (_vtkWriterTGMerge != NULL){
  	delete _vtkWriterTGMerge;
  }
  if (_tecWriterTGMerge != NULL){
  	delete _tecWriterTGMerge;
  }
  if (_cartesianWriterTGMerge != NULL){
  	delete _cartesianWriterTGMerge;
  }
  if (_ppeRHSTGMerge != NULL){
  	delete _ppeRHSTGMerge;
  }
  if (_pressureGradientTGMerge != NULL){
  	delete _pressureGradientTGMerge;
  }
  if (_updateUWithDivCorrTGMerge != NULL){
  	delete _updateUWithDivCorrTGMerge;
  }
  if (_stencilSetupTGMerge != NULL){
  	delete _stencilSetupTGMerge;
  }
//  if (_staggeredPoissonSetup != NULL){
//  	delete _staggeredPoissonSetup;
//  }
  #endif
}

#endif



