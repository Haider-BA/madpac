#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenarioFactory.h"

#include "peano/applications/navierstokes/prototype1/scenarios/configuration/FluidScenarioConfiguration.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenario.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidTrivialScenario.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidCircleFlow.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidDrivenCavity.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidDrivenCavityCheckerboardLid.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidGravityBox.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidPreCICEColdLeg.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannelWithSlipWalls.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInAllDirichletChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInStationaryFlowField.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInTurbulentChannel.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInDriftRatchet.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidStep.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidPoissonOnly.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidFlatPlateInParallelFlow.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/FluidRisingFrameOfReference.h"


peano::applications::navierstokes::prototype1::scenarios::FluidScenarioFactory::FluidScenarioFactory() {
}


peano::applications::navierstokes::prototype1::scenarios::FluidScenarioFactory::~FluidScenarioFactory() {
}


peano::applications::navierstokes::prototype1::scenarios::FluidScenario* peano::applications::navierstokes::prototype1::scenarios::FluidScenarioFactory::loadFluidScenario(
  const configuration::FluidScenarioConfiguration& fluidScenarioConfiguration
) {
  static tarch::logging::Log _log( "peano::applications::navierstokes::prototype1::scenarios::FluidScenarioFactory" );
  assertion( fluidScenarioConfiguration.isValid() );
  FluidScenario* result = 0;

//  try {
//    if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidTrivialScenario::IDENTIFIER ) {
//      result = new FluidTrivialScenario();
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidCircleFlow::IDENTIFIER ) {
//      result = new FluidCircleFlow(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidDrivenCavity::IDENTIFIER ) {
//      result = new FluidDrivenCavity(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidDrivenCavityCheckerboardLid::IDENTIFIER ) {
//      result = new FluidDrivenCavityCheckerboardLid(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidGravityBox::IDENTIFIER ) {
//      result = new FluidGravityBox(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidPreCICEColdLeg::IDENTIFIER) {
//        result = new FluidPreCICEColdLeg(
//            fluidScenarioConfiguration
//            );
//    }
//    else
    if (fluidScenarioConfiguration.getScenarioName() == FluidObstacleInChannel::IDENTIFIER ) {
      result = new FluidObstacleInChannel(
        fluidScenarioConfiguration
      );
    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannelWithSlipWalls::IDENTIFIER ) {
//      result = new FluidObstacleInChannelWithSlipWalls(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInTurbulentChannel::IDENTIFIER ) {
//      result = new FluidObstacleInTurbulentChannel(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInAllDirichletChannel::IDENTIFIER ) {
//      result = new FluidObstacleInAllDirichletChannel(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInStationaryFlowField::IDENTIFIER) {
//      result = new FluidObstacleInStationaryFlowField(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInDriftRatchet::IDENTIFIER ) {
//      result = new FluidObstacleInDriftRatchet(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidStep::IDENTIFIER ) {
//      result = new FluidStep(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidPoissonOnly::IDENTIFIER ) {
//      result = new FluidPoissonOnly(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidFlatPlateInParallelFlow::IDENTIFIER ) {
//      result = new FluidFlatPlateInParallelFlow(
//        fluidScenarioConfiguration
//      );
//    }
//    else if (fluidScenarioConfiguration.getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidRisingFrameOfReference::IDENTIFIER ) {
//      result = new FluidRisingFrameOfReference(
//        fluidScenarioConfiguration
//      );
//    }
    else {
      _log.error(
        "loadFluidScenario(ScenarioConfiguration)",
        "unknown fluidscenario " + fluidScenarioConfiguration.getScenarioName()
      );
      return 0;
    }
//  }
//  catch (std::bad_alloc& exception) {
//    _log.error(
//      "loadFluidScenario(ScenarioConfiguration)",
//      "failed to create fluidscenario object " + fluidScenarioConfiguration.getScenarioName() + ": " +
//      std::string( exception.what() )
//    );
//    result = 0;
//  }

  if (result!=0 && !result->isValid()) {
    delete result;
    _log.error( "loadFluidScenario(...)", "fluidscenario object was invalid" );
    result = 0;
  }

  return result;
}
