// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_GEOMETRY_INTERSECTION_H_
#define _GEOMETRY_GEOMETRY_INTERSECTION_H_

#include "peano/geometry/Geometry.h"
#include "peano/geometry/configurations/GeometryObjectConfiguration.h"
#include <vector>



namespace peano {
  namespace geometry {
    class Intersection;
  }
}

/**
 * This class implements the intersection of several other geometries. A typical
 * example is 2D cylinder in a channel realised by an intersection of a
 * non-inverted hexadron with an inverted sphere.
 *
 * This class holds a std::vector of intersected geometries. Geometries may be
 * added via the method addGeometry().
 *
 * @author Tobias Weinzierl, Tobias Neckel, Michael Lieb
 * @version $Revision: 2.00 $
 */
class peano::geometry::Intersection: public peano::geometry::GeometryObject {
public:

  /**
   * Standard constructor.
   */
  Intersection(
  );

  /**
   * Destructor deleting the vector of geometries.
   */
  virtual ~Intersection();

private:
  /**
   * Holds all the geometric objects assigned to the intersection.
   */
  std::vector< peano::geometry::GeometryObject* > _geometry;

public:

  bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

  bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

  bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  /**
   * Adds a new geometry. It returns the index of the position in the vector
   * where the added geometry is stored. This is the function that should generally be used for adding geometry objects.
   */
  unsigned int addGeometry( const peano::geometry::configurations::GeometryObjectConfiguration& config);

  /** adds a new geometry to the intersection. By adding this object, the intersection takes over the responsibility of deleting
   *  the present object. The index of the position in the vector where the geometry has been pushed back is returned.
   *  This function is only meant for testing purposes.
   */
  unsigned int addGeometry( peano::geometry::GeometryObject* object);

  /** replaces the geometry object at position 'index' of the _geometry vector by the new geometry object 'object'.
   *  If the index is out of range, this function simply adds the new object to the vector. In any case, the
   *  position of the new object within the vector is returned.
   */
  unsigned int replaceGeometry(const unsigned int &index, peano::geometry::GeometryObject *object);

  /**
   *
   * @return The subgeometries of this Intersectionobject.
   */
  const std::vector< peano::geometry::GeometryObject* >& getSubGeometries();

  /** clears the vector of sub geometries */
  void clear();

};

#endif
