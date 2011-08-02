// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_UNION_H_
#define _PEANO_GEOMETRY_BUILTIN_UNION_H_

#include <vector>
#include "tarch/la/Vector.h"
#include "peano/geometry/Geometry.h"
#include "peano/geometry/builtin/CuttingPlane.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class Union;
    }
  }
}


/** acts as a union on different geometrical objects. It is the opposite form of the intersection class.
 *  Let A and B be part of an intersection. Then: If a point is completely inside both A and B, then it
 *  is considered to be inside the intersection as well.
 *  For a union, it is enough if the point is inside of only ONE OF BOTH geometries. For the command completelyOutside
 *  and outsideClosedDomain, it is just the other way round.
 *  So, in general, Union can be used to put together several inner domains and glue them together to one comp. domain :-)
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::Union: public peano::geometry::GeometryObject {
  public:
    Union(
      std::vector<peano::geometry::GeometryObject*> objects
    );
    ~Union();

    bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  private:
    /** objects in the union */
    std::vector<peano::geometry::GeometryObject*> _geometryObjects;
};
#endif // _PEANO_GEOMETRY_BUILTIN_UNION_H_
