// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_CONFIGURATION_TOP_LEVEL_CONFIGURATION_FACTORY_H_
#define _TARCH_CONFIGURATION_TOP_LEVEL_CONFIGURATION_FACTORY_H_


#include "tarch/configuration/TopLevelConfiguration.h"


namespace tarch {
  namespace configuration {
    template <class TopLevelConfigurationType>
    class TopLevelConfigurationFactory;
  }
}


template <class TopLevelConfigurationType>
class tarch::configuration::TopLevelConfigurationFactory {
  private:
    TopLevelConfiguration* _configuration;
  public:
    TopLevelConfigurationFactory();

    virtual ~TopLevelConfigurationFactory();
};


#include "tarch/configuration/TopLevelConfigurationFactory.cpph"

#endif

