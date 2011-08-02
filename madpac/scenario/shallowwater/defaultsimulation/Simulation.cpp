#include "scenario/shallowwater/defaultsimulation/Simulation.h"

scenario::shallowwater::defaultsimulation::Simulation::Simulation(
  const std::string& bathymetryFile,
  const std::string& displacementFile,
  const std::string& outputFile,
  const int& outputTimeDistance,
  const tarch::la::Vector<DIMENSIONS, int>& numberOfGridPoints,
  const tarch::la::Vector<3, double>& simulationArea,
  const tarch::la::Vector<2, double>& displacementLocation,
  const int& numberOfTimeSteps,
  const int& grainSize
):
  _bathymetryFile(bathymetryFile),
  _displacementFile(displacementFile),
  _outputFile(outputFile),
  _outputTimeDistance(outputTimeDistance),
  _numberOfGridPoints(numberOfGridPoints),
  _simulationArea(simulationArea),
  _displacementLocation(displacementLocation),
  _numberOfTimeSteps(numberOfTimeSteps),
  _grainSize(grainSize)
  {
}

scenario::shallowwater::defaultsimulation::Simulation::~Simulation() {
}

std::string scenario::shallowwater::defaultsimulation::Simulation::getBathymetryFile() const {
  return _bathymetryFile;
}

std::string scenario::shallowwater::defaultsimulation::Simulation::getDisplacementFile() const {
  return _displacementFile;
}

int scenario::shallowwater::defaultsimulation::Simulation::getOutputTimeDistance() const {
  return _outputTimeDistance;
}



tarch::la::Vector<DIMENSIONS,int> scenario::shallowwater::defaultsimulation::Simulation::getNumberOfGridPoints() const {
  return _numberOfGridPoints;
}



std::string scenario::shallowwater::defaultsimulation::Simulation::getOutputFile() const {
  return _outputFile;
}



tarch::la::Vector<3,double> scenario::shallowwater::defaultsimulation::Simulation::getSimulationArea() const {
  return _simulationArea;
}



tarch::la::Vector<2, double> scenario::shallowwater::defaultsimulation::Simulation::getDisplacementLocation() const {
  return _displacementLocation;
}



int scenario::shallowwater::defaultsimulation::Simulation::getNumberOfTimeSteps() const {
  return _numberOfTimeSteps;
}

int scenario::shallowwater::defaultsimulation::Simulation::getGrainSize() const {
  return _grainSize;
}




