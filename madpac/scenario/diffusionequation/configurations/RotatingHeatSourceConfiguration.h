// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_ROTATING_HEAT_SOURCE_CONFIGURATION_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_ROTATING_HEAT_SOURCE_CONFIGURATION_H_

#include "scenario/diffusionequation/RotatingHeatSource.h"

#include "tarch/configuration/Configuration.h"

namespace scenario {
  namespace diffusionequation {
    namespace configurations {
      class RotatingHeatSourceConfiguration;
    }
  }
}


class scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration:
  public tarch::configuration::Configuration {
  private:
    static tarch::logging::Log          _log;

    double                              _thermalDiffusivity;
    double                              _thermalDiffusivityInEmbeddedMaterial;
    bool                                _isValid;
    double                              _stimulusRadius;
  public:
    RotatingHeatSourceConfiguration();
    virtual RotatingHeatSource* interpreteConfiguration() const;
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
    virtual std::string getTag() const;
    virtual bool isValid() const;
    virtual void toXML(std::ostream& out) const;
};

#endif
