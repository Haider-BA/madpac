// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_FADING_SINUS_CONFIGURATION_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_FADING_SINUS_CONFIGURATION_H_

#include "scenario/diffusionequation/FadingSinus.h"

#include "tarch/configuration/Configuration.h"

namespace scenario {
  namespace diffusionequation {
    namespace configurations {
      class FadingSinusConfiguration;
    }
  }
}


class scenario::diffusionequation::configurations::FadingSinusConfiguration:
  public tarch::configuration::Configuration {
  private:
    static tarch::logging::Log          _log;

    bool                                _isValid;
  public:
    FadingSinusConfiguration();
    virtual FadingSinus* interpreteConfiguration() const;
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
    virtual std::string getTag() const;
    virtual bool isValid() const;
    virtual void toXML(std::ostream& out) const;
};

#endif
