// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_PLANEBOUNDARYCONFIGURATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_PLANEBOUNDARYCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "peano/utils/Dimensions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BoundaryConfiguration.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/PlaneBoundary.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/Boundary.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace configurations {
          class PlaneBoundaryConfiguration;
        }
      }
    }
  }
}

class peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration {

  public:
    PlaneBoundaryConfiguration():
    peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration(),
    _width(0.0), _offset(0.0), _normal(0.0),_isOpen(false){}

    virtual ~PlaneBoundaryConfiguration(){}

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary* interpreteConfiguration();

    static const std::string TAG;

  private:
    void parseInterval(std::string interval);

    static tarch::logging::Log _log;

    static const std::string INTERVAL;
    static const std::string NORMAL;

    tarch::la::Vector<DIMENSIONS,double> _width;
    tarch::la::Vector<DIMENSIONS,double> _offset;
    tarch::la::Vector<DIMENSIONS,double> _normal;

    tarch::la::Vector<2*DIMENSIONS,bool> _isOpen;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_PLANEBOUNDARYCONFIGURATION_H_
