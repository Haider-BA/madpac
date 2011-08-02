// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _CCA_PEANO_INTEGRATION_CCA_PORT_REPOSITORY_H_
#define _CCA_PEANO_INTEGRATION_CCA_PORT_REPOSITORY_H_

#include <string>
#include <map>

#include "tarch/logging/Log.h"

#include "peano/integration/cca/Port.h"

namespace peano {
  namespace integration {
    namespace cca {
      class PortRepository;
    }
  }
}


/**
 * Repository for the ports used by Peano.
 *
 * This class is a singleton. Whenever you wanna write something to a uses-port,
 * invoke getSingleton() and afterwards get the port you wanna use.
 *
 * !!! Using Ports within Mappings
 *
 * If you want to access an external sciCoDE cooperation partner within your
 * mappings, you ask the port repository whether there is such a partner and
 * then receive the port. One typically does this once within the mapping's
 * beginIteration(). Within the mapping, you then have to downcast the returned
 * port to the port you need.
 *
 * !!! Managing Ports within Runners/Components
 *
 * To make this whole port thing work, you have to fill the port repository in
 * your runner. For this, I recommend to add a fillPortRepository() command to
 * your sciCoDE component. That operation first invokes clearAllPorts() on the
 * repository, and then it calls addPort for each port that is connected to the
 * component. Remember that you have to do this whenever you answer to an
 * incoming request, i.e. in each provides-port operation, as the connections to
 * other components might change throughout the component's lifecycle.
 *
 * @author Tobias Weinzierl
 */
class peano::integration::cca::PortRepository {
  private:
    static tarch::logging::Log _log;

    std::map<std::string, Port*> _ports;

    PortRepository();
  public:
    virtual ~PortRepository();
    static PortRepository& getInstance();

    void clearAllPorts();
    void addPort( const std::string& fullQualifiedPortName, Port* port );
    bool hasPort( const std::string& fullQualifiedPortName ) const;

    /**
     * Ensure that there is such a port due to hasPort() before you invoke this
     * operation.
     */
    Port* getPort( const std::string& fullQualifiedPortName ) const;
};

#endif
