// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_SERVICES_GEOMETRYSERVICE_H_
#define _PEANO_GEOMETRY_SERVICES_GEOMETRYSERVICE_H_


#include "tarch/services/Service.h"
#include "peano/geometry/Geometry.h"
#include "peano/geometry/configurations/GeometryConfiguration.h"


namespace peano {
  namespace geometry {
    namespace services {
      class GeometryService;
    }
  }
}


/**
 *  Service Managing Geometry
 *
 *  t.b.d. Docu seems to be invalid
 *  A NULL geometry is automatically created and is set to a valid geometry representation
 *  when calling init(config). The geometry can be obtained from other classes by calling getInstance().
 *
 *  @author Philipp Neumann
 */
class peano::geometry::services::GeometryService: public tarch::services::Service {
  protected:
    GeometryService();
    virtual ~GeometryService();

    peano::geometry::Geometry* _geometry;
    bool                       _deleteGeometry;

    /**
     * This operation checks _deleteGeometry and frees the geometry instance
     * if the flag is set.
     */
    void deleteGeometry();
  public:
    /**
     * Initialises the geometry from configuration and boundary-condition-mapping
     */
    void init(
      const peano::geometry::configurations::GeometryConfiguration& config
    );

    /**
     * Set geometry manually. Please tell the service whether it shall delete
     * the geometry itself,.
     */
    void init(
      peano::geometry::Geometry* geometry,
      bool                       serviceShallDeleteGeometry
    );

    /**
     * Returns the service. If you wanna get the Geometry, please call getInstance().getGeometry().
     * @return The Service
     */
    static GeometryService& getInstance();

    peano::geometry::Geometry& getGeometry();

    void receiveDanglingMessages();
};

#endif // _PEANO_GEOMETRY_SERVICES_GEOMETRYSERVICE_H_
