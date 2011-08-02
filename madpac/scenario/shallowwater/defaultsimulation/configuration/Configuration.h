#ifndef _PEANO_SCENARIO_SHALLOWWATER_DEFAULTSIMULATION_CONFIGURATION_CONFIGURATION_H_
#define _PEANO_SCENARIO_SHALLOWWATER_DEFAULTSIMULATION_CONFIGURATION_CONFIGURATION_H_

#include "scenario/shallowwater/configuration/ShallowWaterScenarioConfiguration.h"
#include "tarch/logging/Log.h"

namespace scenario {
  namespace shallowwater {
    namespace defaultsimulation {
      namespace configuration {
        class Configuration;
      }
    }
  }
}

class scenario::shallowwater::defaultsimulation::configuration::Configuration:
  public scenario::shallowwater::configuration::ShallowWaterScenarioConfiguration {
    private:
      static tarch::logging::Log _log;
      bool _isValid;
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
      Configuration();
      virtual ~Configuration();

      static std::string Tag();

      virtual ShallowWaterScenario* interpreteConfiguration() const;
      virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
      virtual std::string getTag() const;
      virtual bool isValid() const;
      virtual void toXML( std::ostream& out) const;
};

#endif
