// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_CUTTINGPLANECONFIGURATION_H_
#define _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_CUTTINGPLANECONFIGURATION_H_

#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/geometry/builtin/CuttingPlane.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Dimensions.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class CuttingPlaneConfiguration;
      }
    }
  }
}

/** config for a plane cutting a certain domain.
 *
 * @author Philipp Neumann
 */
class peano::geometry::builtin::configurations::CuttingPlaneConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
  public:
    CuttingPlaneConfiguration();
    ~CuttingPlaneConfiguration();

    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    bool isValid() const;

    virtual void toXML(std::ostream&) const;

    virtual std::string getTag() const;

    /** returns a cutting plane pointer */
    virtual peano::geometry::GeometryObject* interpreteConfiguration() const;

  private:
    static const std::string TAG;

    static const std::string ATTRIBUTE_POINT;
    static const std::string ATTRIBUTE_NORMAL;

    static tarch::logging::Log _log;

    bool _fileValid;

    /** point identified by ATTRIBUTE_POINT lying inside the plain */
    tarch::la::Vector<DIMENSIONS,double> _point;

    /** normal of the plane (identified by ATTRIBUTE_NORMAL) */
    tarch::la::Vector<DIMENSIONS,double> _normal;
};

#endif // _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_CUTTINGPLANECONFIGURATION_H_

