// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_SINEXPERIMENT_CONFIGURATION_CONFIGURATION_H_
#define _PEANO_SCENARIO_POISSON_SINEXPERIMENT_CONFIGURATION_CONFIGURATION_H_

#include "scenario/poisson/configuration/PoissonScenarioConfiguration.h"
#include "tarch/logging/Log.h"


namespace scenario {
  namespace poisson {
    namespace sinexperiment {
      namespace configuration {
        class Configuration;
      }
    }
  }
}


class scenario::poisson::sinexperiment::configuration::Configuration:
  public scenario::poisson::configuration::PoissonScenarioConfiguration {
  private:
	static tarch::logging::Log _log;
	bool _isValid;
    tarch::la::Vector<DIMENSIONS,int>             _oscillationsPerAxis;
    tarch::la::Vector<DIMENSIONS,int>             _numberOfGridPoints;
    double       _relaxationFactor;
    std::string  _outputFile;

  public:
	Configuration();
	virtual ~Configuration();

	static std::string Tag();

	virtual PoissonScenario* interpreteConfiguration() const;
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
    virtual std::string getTag() const;
    virtual bool isValid() const;
    virtual void toXML(std::ostream& out) const;
};

#endif
