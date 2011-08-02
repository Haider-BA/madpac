#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannPlotterConfiguration.h"

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::TAG = "plotter";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::VTKWRITER_BASENAME = "vtk-outputname";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::VTKWRITER_TIMESTEPSPERPLOTTING = "timesteps-per-plotting";

tarch::logging::Log peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::_log("peano::latticeboltzmann::LatticeBoltzmannPlotterConfiguration");


peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::LatticeBoltzmannPlotterConfiguration():
_isValid(true),
_vtkWriterBaseName(""), _isDefinedVtkWriter(false),
_vtkWriterTimestepsPerPlotting(0)
{}



peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::~LatticeBoltzmannPlotterConfiguration(){}



void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader){

  // get vtk-output filename and set defined-flag
  if ( xmlReader->getAttributeValue( VTKWRITER_BASENAME.c_str() ) == 0 ) {
    _log.info("parseSubtag()", "name 'vtk-outputname' for VTK-output not specified!");
  }
  else {
    _vtkWriterBaseName = xmlReader->getAttributeValue(VTKWRITER_BASENAME.c_str());
    _isDefinedVtkWriter = true;
    _log.info("parseSubtag()", "'vtk-outputname': " + _vtkWriterBaseName);
  }

  // determine number of timesteps per plotting
  if (xmlReader->getAttributeValue( VTKWRITER_TIMESTEPSPERPLOTTING.c_str() ) == 0){
    _log.info("parseSubtag()", "'timesteps-per-plotting' not defined!");
    if (_isDefinedVtkWriter){
      _log.error("parseSubtag()", "Plotting not possible! Please specify 'timesteps-per-plotting'!");
      _isValid = false;
      assertion(false);
    }
  } else {
    _vtkWriterTimestepsPerPlotting = xmlReader->getAttributeValueAsInt(VTKWRITER_TIMESTEPSPERPLOTTING.c_str());
    if (_vtkWriterTimestepsPerPlotting < 1){
      _log.error("parseSubtag()", "'timesteps-per-plotting' is smaller than one!");
      if (_isDefinedVtkWriter){
        _isValid = false;
        assertion(false);
      }
    }
    logDebug("parseSubtag()", "'timesteps-per-plotting': " << (_vtkWriterTimestepsPerPlotting));
  }
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::
plotVTK() const {
  return _isDefinedVtkWriter;
}


bool peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::isValid() const {
  return peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::_isValid;
}


std::string peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::toXMLString() const {
  return "";
}


std::string peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::getTag() const {
  return peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::TAG;
}


std::string peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::getVTKWriterBaseName() const {
  return _vtkWriterBaseName;
}


int peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration::getNumberTimestepsPerPlotting() const {
  return _vtkWriterTimestepsPerPlotting;
}
