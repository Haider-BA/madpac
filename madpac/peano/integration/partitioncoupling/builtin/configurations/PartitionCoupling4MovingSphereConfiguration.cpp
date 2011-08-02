#include "peano/integration/partitioncoupling/builtin/configurations/PartitionCoupling4MovingSphereConfiguration.h"

tarch::logging::Log peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::_log(
  "peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration"
);


const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TAG = "partition-coupling-for-moving-sphere";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::POSITION = "position";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::RADIUS = "radius";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::DENSITY = "density";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TIMESTEPS_PER_PLOTTING_VTK = "timesteps-per-plotting-vtk";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TIMESTEPS_PER_PLOTTING_POVRAY = "timesteps-per-plotting-povray";
const std::string peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::FILENAME = "filename";


peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::
PartitionCoupling4MovingSphereConfiguration():
_isValid(true),
_position(0.0),
_radius(0.0),
_density(0.0),
_timestepsPerPlottingVtk(0),
_timestepsPerPlottingPovray(0),
_filename(""){}


void peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::
parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader){
  // get position
  if (xmlReader->getAttributeValue(POSITION.c_str()) != 0){
    _position = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(POSITION.c_str());
  } else {
    logError("parseSubtag()",POSITION << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }

  // get radius
  if (xmlReader->getAttributeValue(RADIUS.c_str()) != 0){
    _radius = xmlReader->getAttributeValueAsDouble(RADIUS.c_str());
    if (_radius <= 0.0){
      logError("parseSubtag()", RADIUS << " is smaller or equal 0.0!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  } else {
    logError("parseSubtag()",RADIUS << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }

  // get density
  if (xmlReader->getAttributeValue(DENSITY.c_str()) != 0){
    _density = xmlReader->getAttributeValueAsDouble(DENSITY.c_str());
    if (_density <= 0.0){
      logError("parseSubtag()", DENSITY << " is smaller or equal 0.0!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  } else {
    logError("parseSubtag()",DENSITY << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }

  // get timesteps-per-plotting
  if (xmlReader->getAttributeValue(TIMESTEPS_PER_PLOTTING_VTK.c_str()) != 0){
    _timestepsPerPlottingVtk = xmlReader->getAttributeValueAsInt(TIMESTEPS_PER_PLOTTING_VTK.c_str());
  } else {
    logError("parseSubtag()",TIMESTEPS_PER_PLOTTING_VTK << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }
  if (xmlReader->getAttributeValue(TIMESTEPS_PER_PLOTTING_POVRAY.c_str()) != 0){
    _timestepsPerPlottingPovray = xmlReader->getAttributeValueAsInt(TIMESTEPS_PER_PLOTTING_POVRAY.c_str());
  } else {
    logError("parseSubtag()",TIMESTEPS_PER_PLOTTING_POVRAY << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }

  // get filename
  if (xmlReader->getAttributeValue(FILENAME.c_str()) != 0){
    _filename = xmlReader->getAttributeValue(FILENAME.c_str());
  } else {
    logError("parseSubtag()",FILENAME << " not defined!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }
}
