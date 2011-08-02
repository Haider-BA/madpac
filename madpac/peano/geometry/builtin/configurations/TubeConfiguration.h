#ifndef _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_TUBECONFIGURATIONS_H_
#define _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_TUBECONFIGURATIONS_H_

#include "tarch/la/Vector.h"
#include <string>
#include "tarch/la/VectorVectorOperations.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/utils/Globals.h"
#include "peano/geometry/builtin/Tube.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class TubeConfiguration;
      }
    }
  }
}


class peano::geometry::builtin::configurations::TubeConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
  public:
    TubeConfiguration();
    virtual ~TubeConfiguration(){}

  private:
    /**
     * XML-Tag
     */
    static const std::string TAG;

    /**
     * for invert flag
     */
    static const std::string ATTRIBUTE_INVERT;
    /**
     * String of subtag for point 1.
     */
    static const std::string ATTRIBUTE_POINT1;
    /**
     * String of subtag for point 2.
     */
    static const std::string ATTRIBUTE_POINT2;

    /** radius of the tube */
    static const std::string ATTRIBUTE_RADIUS;

    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * point1
     */
    tarch::la::Vector<DIMENSIONS,double> _point1;

    /** point 2 */
    tarch::la::Vector<DIMENSIONS,double> _point2;

    /** radius */
    double _radius;

    /**
     * Flag determining whether the geometry is inverted.
     */
    bool _isInverted;

    bool _isValid;

  public:

    /** parses the width, offset and boundary name of the hexahedron */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    /**
     *
     * @return Whether configuration is valid.
     */
    bool isValid() const;

    /** writes an example config of this config to an output stream */
    virtual void toXML(std::ostream&) const;

    /** returns the tag */
    virtual std::string getTag() const;

    /** returns a tube geometry */
    virtual peano::geometry::GeometryObject* interpreteConfiguration() const;

};
#endif // _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_TUBECONFIGURATIONS_H_
