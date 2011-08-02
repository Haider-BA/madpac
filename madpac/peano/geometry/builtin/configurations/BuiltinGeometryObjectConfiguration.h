// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYOBJECTCONFIGURATION_H_
#define _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYOBJECTCONFIGURATION_H_

#include "peano/geometry/configurations/GeometryObjectConfiguration.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class BuiltinGeometryObjectConfiguration;
      }
    }
  }
}


/** implements the GeometryObjectConfiguration interface for the builtin geometry. If this layer of abstraction
 *  is help- and useful, should turn out in future and might be omitted.
 *  As each object might need to be individually addressed by certain applications, the user has the possibility
 *  to specify an ID for each builtin object. If no ID is specified, it is set and left at -1.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration:
public peano::geometry::configurations::GeometryObjectConfiguration {
  public:
    BuiltinGeometryObjectConfiguration();

    virtual ~BuiltinGeometryObjectConfiguration(){}

    /** returns the ID of the geometrical object */
    int getGeometryID() const;

  protected:
    /** parses the geometry ID */
    void readGeometryID(tarch::irr::io::IrrXMLReader* xmlReader);

  private:
    /** ID string */
    static const std::string GEOMETRY_ID;

    static tarch::logging::Log _log;

    /** stores the ID */
    int _geometryID;
};

#endif // _PEANO_GEOMETRY_BUILTIN_CONFIGURATIONS_BUILTINGEOMETRYOBJECTCONFIGURATION_H_
