#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BoundaryConfiguration.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration"
);

const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::VELOCITY_L = "velocity_L";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::DENSITY_L = "density_L";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::PROFILE = "profile";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::FLAT_PROFILE = "flat";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::PARABOLIC_PROFILE = "parabolic";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::BOUNDARY_TYPE = "boundary-type";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::GEOMETRY_ID = "geometry-id";

const std::map<std::string,short int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::_boundaryTypeMap
= peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::initBoundaryTypeMap();



std::map<std::string,short int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::
initBoundaryTypeMap() {
  std::map<std::string, short int> bcMap;
  bcMap["no-slip-wall"] = peano::applications::latticeboltzmann::BoundaryData::HW_BB;
  bcMap["moving-wall"] = peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB;
  bcMap["moving-obstacle"] = peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB;
  bcMap["velocity-inlet"] = peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION;
  bcMap["pressure-outlet"] = peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB;
  bcMap["pressure-inlet"] = peano::applications::latticeboltzmann::BoundaryData::PRESSURE_INLET_HW_BB;
  return bcMap;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration::
parseBoundaryConfigurationData(tarch::irr::io::IrrXMLReader* xmlReader) {
  // get geometry ID
  if (xmlReader->getAttributeValue(GEOMETRY_ID.c_str()) != 0){
    int id = xmlReader->getAttributeValueAsInt(GEOMETRY_ID.c_str());
    unsigned int id2 = 0;
    if (id < 0){
      logDebug("parseBoundaryConfigurationData()", "Negative geometry-id!");
      assertion(false);
    }
    id2 = (unsigned int) id;
    _configData.setGeometryID(id2);
  } else {
    logDebug("parseBoundaryConfigurationData()", "Geometry-id not specified!");
    assertion(false);
  }

  // get boundary type
  if (xmlReader->getAttributeValue(BOUNDARY_TYPE.c_str()) != 0){
    if (_boundaryTypeMap.find(xmlReader->getAttributeValue(BOUNDARY_TYPE.c_str())) == _boundaryTypeMap.end()){
      logDebug("parseBoundaryConfigurationData()", "Wrong boundary type!");
      assertion(false);
    }
    _configData.setBoundaryType(_boundaryTypeMap.find(xmlReader->getAttributeValue(BOUNDARY_TYPE.c_str()))->second);
  } else {
    logDebug("parseBoundaryConfigurationData()", "Boundary type not specified!");
    assertion(false);
  }

  // parse velocity profile for velocity inlet
  if (_configData.getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION){
    if (xmlReader->getAttributeValue(PROFILE.c_str()) != 0){
      std::string buf = xmlReader->getAttributeValue(PROFILE.c_str());
      if (buf == FLAT_PROFILE){
        _configData.setProfileType(peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::FLAT_PROFILE);
      } else if (buf == PARABOLIC_PROFILE){
        _configData.setProfileType(peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::PARABOLIC_PROFILE);
      } else {
        logDebug("parseBoundaryConfigurationData()", "Wrong profile! Only 'parabolic' and 'flat' currently supported!");
        assertion(false);
      }
    } else {
      logDebug("parseBoundaryConfigurationData()", "No profile specified! Only 'parabolic' and 'flat' currently supported!");
      assertion(false);
    }
  }

  // parse velocity for moving wall and velocity inlet
  if (  (_configData.getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB)
     || (_configData.getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION)
  ) {
    if ( xmlReader->getAttributeValue( VELOCITY_L.c_str() ) != 0 ) {
      _configData.setVelocityL( xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                                  VELOCITY_L.c_str()
                                )
                              );
      if (tarch::la::dot(_configData.getVelocityL(),_configData.getVelocityL()) > CS_L_SQUARED){
        logDebug("parseBoundaryConfigurationData()", VELOCITY_L << " out of range!");
        assertion(false);
      }
      logDebug("parseBoundaryConfigurationData()", VELOCITY_L << ": " << _configData.getVelocityL());
    } else {
      logDebug( "parseBoundaryConfigurationData()", VELOCITY_L << " not specified!");
      assertion(false);
    }
  }

  // parse density for pressure inlet
  if ( _configData.getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::PRESSURE_INLET_HW_BB) {
    if ( xmlReader->getAttributeValue( DENSITY_L.c_str() ) != 0 ) {
      _configData.setDensityL( xmlReader->getAttributeValueAsDouble(DENSITY_L.c_str()));
      if (_configData.getDensityL() <= 0.0){
        logDebug("parseBoundaryConfigurationData()", DENSITY_L << " out of range!");
        assertion(false);
      }
      logDebug("parseBoundaryConfigurationData()", DENSITY_L << ": " << _configData.getDensityL());
    } else {
      logDebug( "parseBoundaryConfigurationData()", DENSITY_L << " not specified!");
      assertion(false);
    }
  }
}
