// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYCONFIGURATION_H_
#define _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYCONFIGURATION_H_

#include "peano/geometry/Geometry.h"
#include "tarch/irr/XML.h"
#include "tarch/configuration/Configuration.h"

namespace peano {
  namespace geometry {
    namespace configurations {
      class GeometryConfiguration;
    }
  }
}


/** parses a geometry configuration and returns a pointer to the respective geometrical description
 *
 * @author Philipp Neumann
 */
class peano::geometry::configurations::GeometryConfiguration: public tarch::configuration::Configuration {
  public:
    GeometryConfiguration(){}
    virtual ~GeometryConfiguration(){}

    /** returns an initialised geometry pointer according to the underlying config */
    virtual peano::geometry::Geometry* interpreteConfiguration() const = 0;
};
#endif // _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYCONFIGURATION_H_
