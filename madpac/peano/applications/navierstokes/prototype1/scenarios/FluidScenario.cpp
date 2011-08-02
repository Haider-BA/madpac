#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenario.h"
#include "configuration/FluidScenarioConfiguration.h"
#include "peano/utils/Globals.h"
//#include "tarch/la/Vector.h"



tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::FluidScenario::_log( "peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario" );


peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario(
  const configuration::FluidScenarioConfiguration&  configuration
):
  _isValid(true),
//  _manualRefinementBoxes(),
  _Re(configuration.getReynoldsNumber()),
  _RePhase2(configuration.getReynoldsNumberPhase2()),
  _eta(configuration.getViscosityEta()),
  _etaPhase2(configuration.getViscosityEtaPhase2()),
  _rho(configuration.getDensityRho()),
  _rhoPhase2(configuration.getDensityRhoPhase2()),
  _sigma(configuration.getSurfaceTensionSigma()),
  _phaseInterfaceWidth(configuration.getPhaseInterfaceWidth()),
  _isMultiPhase(false),
  _useMovingGeometry(configuration.useMovingGeometry()),
  _gravityVector(configuration.getGravityVector()) {

  if (!configuration.isReynoldsNumberSpecified()) {
    _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RE +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
    _isValid = false;
  }
  if (!configuration.isViscosityEtaSpecified()) {
    _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
    _isValid = false;
  }
  if (!configuration.isDensityRhoSpecified()) {
    _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
    _isValid = false;
  }

  _isMultiPhase = configuration.isReynoldsNumberPhase2Specified() ||
                  configuration.isViscosityEtaPhase2Specified()   ||
                  configuration.isDensityRhoPhase2Specified()     ||
                  configuration.isSurfaceTensionSigmaSpecified();

  if (_isMultiPhase)
  {
    assertion(false); // Not yet available
    if (!configuration.isReynoldsNumberPhase2Specified()) {
        _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RE_PHASE2 +
                                          "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
        _isValid = false;
    }
    if (!configuration.isViscosityEtaPhase2Specified()) {
      _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA_PHASE2 +
                                        "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
      _isValid = false;
    }
    if (!configuration.isDensityRhoPhase2Specified()) {
      _log.error( "FluidScenario(...)", "missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO_PHASE2 +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">" );
      _isValid = false;
    }
    if (!configuration.isSurfaceTensionSigmaSpecified()) {
      _sigma = 0.0;
    }
  }
  else
  {
    //defaults for standard single-phase flow
    _RePhase2  = _Re;
    _etaPhase2 = _eta;
    _rhoPhase2 = _rho;
    _sigma     = 0.0;
  } //_isMultiPhase

  _isValid &= checkFluidScenarioConfig();

//  for (int i=0; i<configuration.getNumberOfManualRefinementBoxes(); i++) {
//
//    Vector minimalMeshSize = configuration.getManualBox(i).getHMin();
//    Vector offset          = configuration.getManualBox(i).getOffset();
//    Vector width           = configuration.getManualBox(i).getWidth();
//    bool   isInverted      = configuration.getManualBox(i).isInverted();
//    Vector limitOffset     = configuration.getManualBox(i).getLimitOffset();
//    Vector limitWidth      = configuration.getManualBox(i).getLimitWidth();
//    if (isInverted && (!configuration.getManualBox(i).isLimitOffsetSpecified() ||
//                       !configuration.getManualBox(i).isLimitWidthSpecified()  ) ) {
//      _log.error( "FluidScenario(...)", "missing attribute \"" + RefinementBoxConfiguration::ATTRIBUTE_LIMIT_OFFSET +
//                                        " or \"" + RefinementBoxConfiguration::ATTRIBUTE_LIMIT_WIDTH +
//                                        "\"in one tag <" + RefinementBoxConfiguration::TAG + "> "  );
//      _isValid = false;
//    }
//    _manualRefinementBoxes.push_back(ManualRefinementBox(minimalMeshSize,
//                                                          offset, width, isInverted,
//                                                          limitOffset,limitWidth) );
//  }
//  assertion(int(_manualRefinementBoxes.size())==configuration.getNumberOfManualRefinementBoxes());
//
//
//
//  for (int i=0; i<configuration.getNumberOfManualRefinementTubes(); i++) {
//    Vector minimalMeshSize = configuration.getManualTube(i).getHMin();
//    Vector offset          = configuration.getManualTube(i).getOffset();
//    double radius          = configuration.getManualTube(i).getRadius();
//    double length          = configuration.getManualTube(i).getLength();
//    Vector axis            = configuration.getManualTube(i).getAxis();
//    _manualRefinementTubes.push_back( ManualRefinementTube(minimalMeshSize,
//                                                           offset, radius, length, axis) );
//  }
//  assertion(int(_manualRefinementTubes.size())==configuration.getNumberOfManualRefinementTubes());
}


peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario():
  _isValid(true),
  _Re(1.0),
  _RePhase2(1.0),
  _eta(1.0),
  _etaPhase2(1.0),
  _rho(1.0),
  _rhoPhase2(1.0),
  _isMultiPhase(false),
  _gravityVector(Vector(0.0)) {
}


peano::applications::navierstokes::prototype1::scenarios::FluidScenario::~FluidScenario() {
}

void peano::applications::navierstokes::prototype1::scenarios::FluidScenario::setupMultiPhase(
  const double rhoPhase2,
  const double etaPhase2,
  const double sigma,
  const double phaseInterfaceWidth
) {
  assertion(false); // Not yet available
  _isMultiPhase = true;

  _rhoPhase2           = rhoPhase2;
  _etaPhase2           = etaPhase2;
  _sigma               = sigma;
  _phaseInterfaceWidth = phaseInterfaceWidth;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::checkFluidScenarioConfig() {

  if ( !tarch::la::greater(_Re, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RE +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  if ( !tarch::la::greater(_RePhase2, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RE_PHASE2 +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  if ( !tarch::la::greater(_eta, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  if ( !tarch::la::greater(_etaPhase2, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA_PHASE2 +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  if ( !tarch::la::greater(_rho, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  if ( !tarch::la::greater(_rhoPhase2, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO_PHASE2 +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }

  if ( !tarch::la::greater(_phaseInterfaceWidth, 0.0) ) {
    _log.error("checkFluidScenarioConfig()", "invalid attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_PHASE_INTERFACE_WIDTH +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: has to be >0" );
    return false;
  }
  else if ( tarch::la::smaller(_phaseInterfaceWidth, 1.0) ) {
    _log.warning("checkFluidScenarioConfig()", "attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_PHASE_INTERFACE_WIDTH +
                                      "\"in tag <" + configuration::FluidScenarioConfiguration::TAG + ">: values <1 might result in unstable results" );
  }

  return true;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isValid() const {
  return _isValid;
}


void peano::applications::navierstokes::prototype1::scenarios::FluidScenario::toString(std::ostream& out) const {
  out << "fluid scenario data: "
      << "Re:"      << _Re        << ", "
      << "eta:"     << _eta       << ", "
      << "rho:"     << _rho       << ", ";
	if (_isMultiPhase) {
      out << "Re2:"     << _RePhase2  << ", "
          << "eta2:"    << _etaPhase2 << ", "
          << "rho2:"    << _rhoPhase2 << ", "
          << "sigma:"   << _sigma     << ", "
          << "phase-interface-width:"   << _phaseInterfaceWidth << ", ";
	}
  out << "gravity:" << _gravityVector;
}


std::string peano::applications::navierstokes::prototype1::scenarios::FluidScenario::toString() const {
  std::ostringstream out;
  toString(out);
  return out.str();
}

double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getViscosityEta() const {
  return _eta;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getViscosityEtaPhase2() const {
  return _etaPhase2;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getDensityRho() const {
  return _rho;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getDensityRhoPhase2() const {
  return _rhoPhase2;
}

double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getSurfaceTensionSigma() const {
  return _sigma;
}

double peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getPhaseInterfaceWidth() const {
  return _phaseInterfaceWidth;
}

bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isMultiPhase() const {
  return _isMultiPhase;
}

bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::usesMovingGeometry() const {
  return _useMovingGeometry;
}

Vector peano::applications::navierstokes::prototype1::scenarios::FluidScenario::getGravityVector() const {
  return _gravityVector;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isInflowPressureBoundaryConditionUsed() const {
  return false;
}

bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isOutflowPressureBoundaryConditionUsed() const {
  return false;
}

bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isGravityPressureBoundaryConditionUsed() const {
  bool isGravityConditionUsed=false;
  if(!tarch::la::equals(_gravityVector.norm(),0.0)){
      isGravityConditionUsed=true;
  }
  return isGravityConditionUsed;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidScenario::refine(
  const Vector& x,
  const Vector& h,
  const int     axis
) {
  _log.error("FluidScenario::refine","Function not yet implemented/ported.");
  exit(ASSERTION_EXIT_CODE);
//  // check boxes
//  for (unsigned int i=0; i<_manualRefinementBoxes.size(); i++) {
//    if (_manualRefinementBoxes[i].refine(x,h,axis)) return true;
//  }
//
//  // check tubes
//  for (unsigned int i=0; i<_manualRefinementTubes.size(); i++) {
//    if (_manualRefinementTubes[i].refine(x,h,axis)) return true;
//  }
//
//  return false;
}
#ifdef ComponentSteering
void peano::applications::navierstokes::prototype1::scenarios::FluidScenario::synchronize( peano::applications::navierstokes::prototype1::scenarios::FluidScenario *scenario)
{

}
#endif

std::ostream& operator<<(std::ostream& out,  const peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario& fluidScenario) {
  fluidScenario.toString(out);
  out.flush();
  return out;
}

