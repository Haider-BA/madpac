#ifndef _PEANO_SCENARIO_SHALLOWWATER_DEFAULTSIMULATION_SIMULATION_H_
#define _PEANO_SCENARIO_SHALLOWWATER_DEFAULTSIMULATION_SIMULATION_H_

#include "scenario/shallowwater/ShallowWaterScenario.h"

namespace scenario {
  namespace shallowwater {
    namespace defaultsimulation {
      class Simulation;
    }
  }
}

class scenario::shallowwater::defaultsimulation::Simulation: public scenario::shallowwater::ShallowWaterScenario {
  private:
    std::string _bathymetryFile;
    std::string _displacementFile;
    std::string _outputFile;
    int _outputTimeDistance;
    tarch::la::Vector<DIMENSIONS, int> _numberOfGridPoints;
    tarch::la::Vector<3, double> _simulationArea;
    tarch::la::Vector<2, double> _displacementLocation;
    int _numberOfTimeSteps;
    int _grainSize;

  public:
    Simulation(
      const std::string& bathymetryFile,
      const std::string& displacementFile,
      const std::string& outputFile,
      const int& outputTimeDistance,
      const tarch::la::Vector<DIMENSIONS, int>& numberOfGridPoints,
      const tarch::la::Vector<3, double>& simulationArea,
      const tarch::la::Vector<2, double>& displacementLocation,
      const int& numberOfTimeSteps,
      const int& grainSize
    );
    virtual ~Simulation();

    virtual std::string getBathymetryFile() const;
    virtual std::string getDisplacementFile() const;

    virtual std::string getOutputFile() const;
    virtual int getOutputTimeDistance() const;

    virtual tarch::la::Vector<DIMENSIONS, int> getNumberOfGridPoints() const;
    virtual tarch::la::Vector<3, double> getSimulationArea() const;
    virtual tarch::la::Vector<2, double> getDisplacementLocation() const;
    virtual int getNumberOfTimeSteps() const;
    virtual int getGrainSize() const;
};

#endif
