// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_SERVICES_ABSTRACTFUNCTIONALGEOMETRYSUBSERVICE_H_
#define _PEANO_GEOMETRY_SERVICES_ABSTRACTFUNCTIONALGEOMETRYSUBSERVICE_H_

#include <vector>
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace peano {
  namespace geometry {
    namespace services {
      class AbstractFunctionalGeometrySubService;
    }
  }
}


/** abstract sub-service for functional geometry support. The name 'service' might
 *  be a little misleading at this point. Let's clarify it:
 *  The FunctionalGeometryService holds instances of specialized AbstractFunctionalGeometryServices.
 *  If getGeometryIDs() is called from the FunctionalGeometryService (which is a real service by
 *  the way), this call is delegated to the respective implementation of this interface
 *  (currently either BuiltinFunctionalGeometryService or PreciceFunctionalGeometryService).
 *  Thus, FunctionalGeometryService is the ONLY REAL SERVICE w.r.t. to the mentioned classes.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::services::AbstractFunctionalGeometrySubService {
  public:
    virtual ~AbstractFunctionalGeometrySubService(){}

    virtual std::vector<int> getGeometryIDs(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h
    ) = 0;
};
#endif // _PEANO_GEOMETRY_SERVICES_ABSTRACTFUNCTIONALGEOMETRYSUBSERVICE_H_
