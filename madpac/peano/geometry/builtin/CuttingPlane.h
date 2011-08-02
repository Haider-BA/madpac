// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_CUTTINGPLANE_H_
#define _PEANO_GEOMETRY_BUILTIN_CUTTINGPLANE_H_

#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include "peano/utils/Loop.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class CuttingPlane;
    }
  }
}


/** defines a plane which can be used to cut an prededined computational domain or to surround a certain domain (when defining multiple
 *  cutting planes and merging them via the geometry intersection class/ configuration.
 *  The plane is defined via a position p which is part of the plane and the corresponding normal of the plane. The normal n is oriented
 *  sucht that it always points OUT of the domain, i.e. a point x is outside of the domain if n*(p-x) > 0.0 with '*' denoting the
 *  standard scalar product.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::CuttingPlane: public peano::geometry::GeometryObject {
  public:
    CuttingPlane(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const tarch::la::Vector<DIMENSIONS,double> &normal
    );
    ~CuttingPlane();

    bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  private:
    /** point position being part of the cutting plane */
    tarch::la::Vector<DIMENSIONS,double> _position;

    /** normal vector point out of the domain */
    tarch::la::Vector<DIMENSIONS,double> _normal;

};

#endif //  _PEANO_GEOMETRY_BUILTIN_CUTTINGPLANE_H_
