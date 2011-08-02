// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_PRECICE_SERVICES_FUNCTIONALPRECICEGEOMETRYSUBSERVICE_H_
#define _PEANO_GEOMETRY_PRECICE_SERVICES_FUNCTIONALPRECICEGEOMETRYSUBSERVICE_H_

#include "tarch/logging/Log.h"
#include "peano/geometry/services/GeometryService.h"
#include "precice/SolverInterface.hpp"
#include "peano/geometry/precice/PreciceGeometry.h"
#include "peano/geometry/services/AbstractFunctionalGeometrySubService.h"
#include "peano/geometry/precice/configurations/PreciceConfiguration.h"

namespace peano {
  namespace geometry {
    namespace precice {
      namespace services {
        class FunctionalPreciceGeometrySubService;
      }
    }
  }
}


/** functional geometry representation of precice geometry
 *
 * @author Philipp Neumann
 */
class peano::geometry::precice::services::FunctionalPreciceGeometrySubService:
public peano::geometry::services::AbstractFunctionalGeometrySubService {
  public:
    FunctionalPreciceGeometrySubService(): peano::geometry::services::AbstractFunctionalGeometrySubService(),
    _preciceGeometry(NULL){
      _geometryIDMap.clear();
    }

    ~FunctionalPreciceGeometrySubService(){
      _geometryIDMap.clear();
    }

    /** initialise geometry (i.e. PreciceGeometry in GeometryService) and functional part */
    void init(
      const peano::geometry::precice::configurations::PreciceConfiguration &config
    );

    /** returns all geometry ids that are touched in a surrounding 2*h around x */
    std::vector<int> getGeometryIDs(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h
    );

  private:
    void mapIDs ( std::vector<int> & ids ) const;


    /** initializes the geometry ID map according to the given configuration */
    std::map<int,int> initializeGeometryIDMap(
      const std::vector<std::string> &geometryAddonNames,
      const std::vector<int> &geometryAddonIDs,
      ::precice::SolverInterface *interface
    );


    // @brief Map from preCICE geometry ID to Peano fluid boundary ID.
    std::map<int, int> _geometryIDMap;

    /** points to the precice geometry that is also used in the GeometryService. A destruction is not necessary
     *  as the auto_ptr in the GeometryService will do the job.
     */
    peano::geometry::precice::PreciceGeometry *_preciceGeometry;

    static tarch::logging::Log _log;
};

#endif // _PEANO_GEOMETRY_PRECICE_SERVICES_FUNCTIONALPRECICEGEOMETRYSUBSERVICE_H_
