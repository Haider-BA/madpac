// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_CONFIGURATION_CONFIGURATION_REGISTRY_H_
#define _TARCH_CONFIGURATION_CONFIGURATION_REGISTRY_H_

#include "tarch/logging/Log.h"

#include <string>
#include <map>
#include <list>


namespace tarch {
  namespace configuration {
    class ConfigurationRegistry;
    class TopLevelConfiguration;
  }
}

/**
 *
 *
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.21 $
 */
class tarch::configuration::ConfigurationRegistry {
  private:
    /**
     * Log device for the configuration component.
     */
    static tarch::logging::Log _log;

    typedef std::map<std::string,TopLevelConfiguration*> TopLevelConfigurationContainer;

    TopLevelConfigurationContainer _topLevelTags;

    /**
     * Standard constructor.
     */
    ConfigurationRegistry();
  public:
    virtual ~ConfigurationRegistry();

    static ConfigurationRegistry& getInstance();

    void addTopLevelConfiguration( TopLevelConfiguration* configuration );

    void enlistAvailableTopLevelTags() const;

    void writeDummyConfigFile(std::ostream& out) const;

    /**
     * Reads a configuration file and returns the runners. If the file is
     * invalid, the operationreturns an empty set.
     *
     * @param filename Qualified name of the file to open.
     */
    std::list<TopLevelConfiguration*> readFile(
      const std::string& filename,
      const std::string& topLevelTag
    );

    void freeConfigurations(std::list<TopLevelConfiguration*>& configurations);
};


#endif

