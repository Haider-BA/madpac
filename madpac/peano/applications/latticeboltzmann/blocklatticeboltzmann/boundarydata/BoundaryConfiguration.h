// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARYCONFIGURATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARYCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/Boundary.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryConfigurationData.h"

#include <map>
#include <string>
#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace configurations {
          class BoundaryConfiguration;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration {
  public:
  BoundaryConfiguration(){}
    virtual ~BoundaryConfiguration(){}

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader) = 0;

    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary* interpreteConfiguration() = 0;

  protected:
    void parseBoundaryConfigurationData(tarch::irr::io::IrrXMLReader* xmlReader);

    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData _configData;

  private:
    static tarch::logging::Log _log;

    static std::map<std::string,short int> initBoundaryTypeMap();

    static const std::string VELOCITY_L;
    static const std::string DENSITY_L;
    static const std::string PROFILE;
    static const std::string FLAT_PROFILE;
    static const std::string PARABOLIC_PROFILE;
    static const std::string BOUNDARY_TYPE;
    static const std::string GEOMETRY_ID;

    static const std::map<std::string,short int> _boundaryTypeMap;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BOUNDARYCONFIGURATION_H_
