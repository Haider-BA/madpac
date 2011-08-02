// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARIESCONFIGURATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARIESCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include <vector>
#include "tarch/logging/Log.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BoundaryConfiguration.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/PlaneBoundaryConfiguration.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace configurations {
          class BoundariesConfiguration;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration {
  public:
    BoundariesConfiguration(){}
    ~BoundariesConfiguration();

    void parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);

    static const std::string TAG;

    peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration&
    getBoundaryConfiguration(unsigned int i) const;

    unsigned int getNumberOfBoundaryConfigurations() const;

  private:
    static tarch::logging::Log _log;

    std::vector<peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration*> _boundaryConfigurations;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARIESCONFIGURATION_H_
