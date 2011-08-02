// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_GEOMETRY_H_
#define _GEOMETRY_GEOMETRY_H_
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano {
  namespace geometry {
    class Geometry;

    /** currently each geometry object is identical with the overall geometry interface.
     *  However, a single geometry object might obtain more properties in future implementations,
     *  still keeping all characteristics of Geometry (GeometryObject inherits from Geometry).
     */
    typedef Geometry GeometryObject;
  }
}


/**
 * Interface for builtin or other geometry descriptions
 *
 * @author Philipp Neumann, Tobias Weinzierl, Tobias Neckel
 */
class peano::geometry::Geometry {
  public:
    Geometry(){}

    virtual ~Geometry(){}

    /**
     * Routine for decision if the point and the surrounding box lies outside
     * the geometry.
     *
     * With value zero for the parameter resolution, this gives the exact
     * geometry information of a single point position x (outside yes or no).
     *
     * Please note that the computational domain splits up the whole
     * space @f$ \mathbf{R}^d @f$ into outside, inside and a set of points
     * (submanifold) that are neither inside nor outside. Thus, a pointwise
     * query (h equals the zero vector) returns one of three values mapped onto
     * the two functions isCompletelyInside() and isCompletelyOutside(). The
     * spatial query, where the query point x is added a surrounding box with
     * size 2*resolution where x is in the center is a little bit more complicated: The surrounding box
     * is interpreted to be an open domain and isCompletelyInside() /
     * isCompletelyOutside() returns true iff the intersection of the inner /
     * outer domain with the open surrounding box is the box itself.
     *
     * @image html geometry_Geometry.png
     *
     * The query is not const anymore, as PeGSI might want to change the
     * underlying spacetree structure.
     *
     */
     virtual bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) = 0;

    /**
     * Routine for decision if the point and the surrounding box lies inside
     * the geometry.
     *
     * With value zero for the parameter resolution, this gives the exact
     * geometry information of a single point position x (outside yes or no).
     *
     * Please note that the computational domain splits up the whole
     * space @f$ \mathbf{R}^d @f$ into outside, inside and a set of points
     * (submanifold) that are neither inside nor outside. Thus, a pointwise
     * query (h equals the zero vector) returns one of three values mapped onto
     * the two functions isCompletelyInside() and isCompletelyOutside(). The
     * spatial query, where the query point x is added a surrounding box with
     * size 2*resolution where x is in the center is a little bit more complicated: The surrounding box
     * is interpreted to be an open domain and isCompletelyInside() /
     * isCompletelyOutside() returns true iff the intersection of the inner /
     * outer domain with the open surrounding box is the box itself.
     *
     * @image html geometry_Geometry.png
     *
     * The query is not const anymore, as PeGSI might want to change the
     * underlying spacetree structure.
     *
     */
    virtual bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) = 0;

    /**
     * @todo Well could someone write a description here?
     */
    virtual bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) = 0;
};

#endif
