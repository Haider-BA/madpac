// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYCONFIGURATION_H_
#define _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYCONFIGURATION_H_

#include "tarch/logging/Log.h"
#include "peano/geometry/configurations/GeometryConfiguration.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/geometry/builtin/configurations/CuttingPlaneConfiguration.h"
#include "peano/geometry/builtin/configurations/DriftRatchetConfiguration.h"
#include "peano/geometry/builtin/configurations/SphereConfiguration.h"
#include "peano/geometry/builtin/configurations/HexahedronConfiguration.h"
#include "peano/geometry/builtin/configurations/UnionConfiguration.h"
#include "peano/geometry/builtin/configurations/IntersectionConfiguration4BuiltinGeometry.h"
#include "peano/geometry/builtin/configurations/TubeConfiguration.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class BuiltinGeometryConfiguration;
      }
    }
  }
}


/** implements the GeometryConfiguration interface for the builtin geometry.
 *  Therefore, parses the builtin-geometry-configuration tag and sets up an intersection
 *  of all geometrical objects defined in this tag.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::configurations::BuiltinGeometryConfiguration:
public peano::geometry::configurations::GeometryConfiguration {
  public:
    BuiltinGeometryConfiguration();
    ~BuiltinGeometryConfiguration();

    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    bool isValid() const;

    void toXML(std::ostream&) const;

    std::string getTag() const;

    /** returns the number of geometrical objects */
    unsigned int size() const;

    /** returns a const reference of the configuration for each geometrical object */
    const peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration& getBuiltinGeometryObjectConfiguration(const unsigned int &i) const;

    peano::geometry::Geometry* interpreteConfiguration() const;

  private:
    static tarch::logging::Log _log;

    std::vector<peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration* > _builtinGeometryConfigurations;
};

#endif // _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYCONFIGURATION_H_
