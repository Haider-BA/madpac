// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_CONFIGURATION_UNIONCONFIGURATION_H_
#define _PEANO_GEOMETRY_BUILTIN_CONFIGURATION_UNIONCONFIGURATION_H_

#include <memory>
#include "tarch/logging/Log.h"
#include "peano/geometry/Geometry.h"
#include "peano/geometry/builtin/Union.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/geometry/builtin/configurations/SphereConfiguration.h"
#include "peano/geometry/builtin/configurations/HexahedronConfiguration.h"
#include "peano/geometry/builtin/configurations/CuttingPlaneConfiguration.h"
#include "peano/geometry/builtin/configurations/DriftRatchetConfiguration.h"
#include "peano/geometry/builtin/configurations/IntersectionConfiguration4BuiltinGeometry.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class UnionConfiguration;
      }
    }
  }
}


/** allows the user to specify a cut primitive/ intersection as single geometrical object.
 *
 *  Therefore, one can define the respective geometrical object (in its usual xml-tag; all builtin
 *  geometrical objects are currently allowed except for cutting planes themselves)
 *  and (at least) one (or even more) cutting-plane(s), each again specified in its own
 *  tag. These tags are again embraced by the geometry-cut tag.
 *  The cutting works as follows: Each cutting plane is defined by a point lying on the plane
 *  and the normal of the plane pointing outwards (that is into the domain which is considered
 *  to be outside the computational domain). If we now consider a inverted sphere (e.g. a spherical
 *  obstacle in a flow simulation) at the origin and a plane passing through the origin having the
 *  normal n=(1,0,...,0), the cut will return the left part of the sphere as inner computational domain (this
 *  is "cut" from the obstacle and "added" to the computational domain); the right part of the sphere
 *  is going to be considered as obstacle. For more information on the respective GeometryObject Cut,
 *  see the documentation of Cut.h.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::configurations::UnionConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
  public:
    UnionConfiguration();
    ~UnionConfiguration();

    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    bool isValid() const;

    void toXML(std::ostream&) const;

    std::string getTag() const;

    /** returns the Cut as GeometryObject */
    peano::geometry::GeometryObject* interpreteConfiguration() const;

  private:
    static const std::string TAG;

    /** stores all object configurations */
    std::vector<peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration* > _builtinGeometryObjectConfigurations;

    static tarch::logging::Log _log;
};

#endif // _PEANO_GEOMETRY_BUILTIN_CONFIGURATION_UNIONCONFIGURATION_H_
