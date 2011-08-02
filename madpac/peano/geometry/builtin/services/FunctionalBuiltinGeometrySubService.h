// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_SERVICES_FUNCTIONALBUILTINGEOMETRYSUBSERVICE_H_
#define _PEANO_GEOMETRY_BUILTIN_SERVICES_FUNCTIONALBUILTINGEOMETRYSUBSERVICE_H_

#include "peano/geometry/services/GeometryService.h"
#include "peano/geometry/services/AbstractFunctionalGeometrySubService.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryConfiguration.h"
#include "peano/geometry/Intersection.h"
#include <map>

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace services {
        class FunctionalBuiltinGeometrySubService;
      }
    }
  }
}



/** functional sub-service giving unique IDs to all geometrical objects used in a simulation. In most simulations,
 *  one deals with a given geometry that remains fixed or at least does not interact with the solver at all
 *  (besides implying certain boundary conditions at the startup). For these kinds of simulations, this service
 *  should never be applied (except for setting boundary conditions, if this is needed), but the original
 *  GeometryService.
 *  However, in case of simulation runs interacting with the geometry (e.g. fluid-structure interactions) and that
 *  should still be carried out using the builtin geometry (e.g. for testing), this class can be used to track and
 *  identify single geometrical objects and store/ apply modifications to them. Therefore, it uses an index list
 *  which is filled in the initialisation phase according to the IDs returned from the intersection.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::services::FunctionalBuiltinGeometrySubService: public peano::geometry::services::AbstractFunctionalGeometrySubService {
  public:
    /** initialises the geometry, sets the _geometry pointer of GeometryService to a valid geometry and sets up the
     *  index list for the single geometrical objects
     */
    void init(
      const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& configs
    );

    /** returns a vector containing all geometrical object IDs having a boundary at position x considering a domain
     *  that is resolved by meshsize h. If there is no boundary, an empty vector is returned.
     */
    std::vector<int> getGeometryIDs(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h
    );

    FunctionalBuiltinGeometrySubService(): peano::geometry::services::AbstractFunctionalGeometrySubService(), _intersection(NULL){
      _geometryIDs.clear();
    }
    virtual ~FunctionalBuiltinGeometrySubService(){
      _geometryIDs.clear();
    }

  private:
    /** stores the IDs of all geometrical objects. As the configuration allows for specifying object IDs which
     *  do not necessarily correspond to the position in the intersection vector where each object is stored,
     *  this member variable is a map that can be used as:
     *
     *  _geometryIDs[numberOfGeometryObjectInIntersectionVector] = objectIDSpecifiedInBuiltinGeometryObjectConfiguration
     */
    std::map<unsigned int,int> _geometryIDs;

    /** intersection storing all geometrical objects */
    peano::geometry::Intersection* _intersection;
};
#endif // _PEANO_GEOMETRY_BUILTIN_SERVICES_FUNCTIONALBUILTINGEOMETRYSUBSERVICE_H_
