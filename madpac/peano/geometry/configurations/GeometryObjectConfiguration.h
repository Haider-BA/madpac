#ifndef _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYOBJECTCONFIGURATION_H_
#define _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYOBJECTCONFIGURATION_H_

#include "tarch/irr/XML.h"
#include "tarch/configuration/Configuration.h"
#include "peano/geometry/Geometry.h"

namespace peano {
  namespace geometry {
    namespace configurations {
      class GeometryObjectConfiguration;
    }
  }
}

/** parses a geometry object configuration and returns a pointer to the respective geometry object
 *
 * @author Philipp Neumann
 */
class peano::geometry::configurations::GeometryObjectConfiguration: public tarch::configuration::Configuration {
  public:
    GeometryObjectConfiguration(){}
    virtual ~GeometryObjectConfiguration(){}

    /** returns an initialised geometry pointer according to the underlying config */
    virtual peano::geometry::GeometryObject* interpreteConfiguration() const = 0;
};
#endif // _PEANO_GEOMETRY_CONFIGURATIONS_GEOMETRYOBJECTCONFIGURATION_H_
