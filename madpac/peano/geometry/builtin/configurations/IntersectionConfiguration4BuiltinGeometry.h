// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_CONFIGURATIONS_INTERSECTIONCONFIGURATION4BUILTINGEOMETRY_H_
#define _PEANO_GEOMETRY_CONFIGURATIONS_INTERSECTIONCONFIGURATION4BUILTINGEOMETRY_H_

#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/geometry/Intersection.h"
#include "peano/geometry/builtin/configurations/SphereConfiguration.h"
#include "peano/geometry/builtin/configurations/HexahedronConfiguration.h"
#include "peano/geometry/builtin/configurations/DriftRatchetConfiguration.h"
#include "peano/geometry/builtin/configurations/CuttingPlaneConfiguration.h"
#include "peano/geometry/builtin/configurations/UnionConfiguration.h"
#include "peano/geometry/builtin/configurations/TubeConfiguration.h"
#include "tarch/logging/Log.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class IntersectionConfiguration4BuiltinGeometry;
      }
    }
  }
}


/** parses an intersection of different geometrical objects as single geometrical object.
 *  The reason for this is the following: Typically, the BuiltinGeometryConfiguration
 *  is already capable of returning a geometry built of different geometry objects, i.e.
 *  it acts as intersection. However, it might happen that you do not want to stick to
 *  boring  hexahedrons and spheres ;-), but want to have little more complex forms for
 *  your simulations, e.g. only half of a sphere that one can generate by a cut (see documentation
 *  of Cut.h) or even half a sphere and half a hexahedron that are both cut along the same plane.
 *  This can now be done using the present configuration class. You define the sphere and the hexahedron
 *  in an intersection tag as described by this configuration class and put this new description of a
 *  SINGLE geometrical object into the CutConfiguration where you can define the plane that is going to
 *  cut your intersection (sphere+hexhedron).
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
  public:
    IntersectionConfiguration4BuiltinGeometry();
    ~IntersectionConfiguration4BuiltinGeometry();

    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    bool isValid() const;

    virtual void toXML(std::ostream&) const;

    virtual std::string getTag() const;

    /** returns a pointer to the respective geometrical object (intersection) */
    virtual peano::geometry::GeometryObject* interpreteConfiguration() const;

  private:
    tarch::logging::Log _log;
    /** stores configurations of all geometrical objects that are used for this intersection */
    std::vector<peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration*> _builtinGeometryObjectConfigurations;
};
#endif // _PEANO_GEOMETRY_CONFIGURATIONS_INTERSECTIONCONFIGURATION4BUILTINGEOMETRY_H_
