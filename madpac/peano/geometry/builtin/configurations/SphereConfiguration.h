// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SPHERE_CONFIGURATION_GEOMETRYCONFIGURATION_H_
#define _SPHERE_CONFIGURATION_GEOMETRYCONFIGURATION_H_

#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
//#include "tarch/la/Utilities.h"
#include "tarch/la/Vector.h"

#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"

#include <string>

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class SphereConfiguration;
      }
    }
  }
}


/**
 *
 * A config for a sphere geometry
 *
 * @author Tobias Weinzierl, Tobias Neckel, Philipp Neumann
 */
class peano::geometry::builtin::configurations::SphereConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {

  private:
    /**
     * XML-Tag corresponding to grid configuration.
     */
    static const std::string TAG;
    /**
     * String for invert-flag
     */
    static const std::string ATTRIBUTE_INVERT;
    /**
     * String for center
     */
    static const std::string ATTRIBUTE_CENTER;
    /**
     * String for radius
     */
    static const std::string ATTRIBUTE_RADIUS;

    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * If a parser error occurs, this flag is set false.
     */
    bool _fileValid;

    /**
     * Defines the center of the sphere
     */
    tarch::la::Vector<DIMENSIONS,double> _center;

    /**
     * Defines the radius
     */
    double _radius;

    /**
     * Flag determining whether the geometry is inverted.
     */
    bool _isInverted;

  public:
    SphereConfiguration();

    /**
     * Standard destructor
     */
    virtual ~SphereConfiguration();

    /** parses invert-flag, sphere center and sphere radius */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    /**
     * This method checks all the internal validate-flags, but it does not
     * examine the mesh width properties. To validate them, you've to call the
     * hasValidMeshWidth() operation.
     *
     * @return Whether configuration is valid.
     */
    bool isValid() const;

    virtual void toXML(std::ostream&) const;

    virtual std::string getTag() const;

    virtual peano::geometry::GeometryObject* interpreteConfiguration() const;

};
#endif // END _SPHERE_CONFIGURATION_GEOMETRYCONFIGURATION_H_
