// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_SPHERE_H_
#define _GEOMETRY_SPHERE_H_

#include "peano/geometry/builtin/AbstractGeometry.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class Sphere;

      namespace tests {
        /**
         * Forward declaration for friends.
         */
         class SphereTest;
      }
    }
  }
}


/**
 * Represents a sphere with center at the coordinates specified by _center.
 *
 * @image html geometry_Sphere.png
 *
 * @author Tobias Weinzierl, Tobias Neckel, Philipp Neumann
 */
class peano::geometry::builtin::Sphere: public peano::geometry::builtin::AbstractGeometry {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;
    /**
     * Friend declaration for test.
     */
    friend class tests::SphereTest;

    /**
     * Holds the radius of the sphere.
     */
    double _radius;

    /**
     * Holds the center of the sphere.
     */
    tarch::la::Vector<DIMENSIONS,double> _center;

    /**
     * This method calculates the distance of the coordinate x to the center of
     * the sphere (including the offset).
     *
     * @param x          Position vector.
     */
    double getDistance(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;
    /**
     * This method returns if getDistance(x) is smaller than _radius.
     *
     * @param x          Position vector.
     */
    bool isInsideOpenSphere(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;
    /**
     * This method returns if getDistance(x) is not greater than _radius.
     * @param x          Position vector.
     */
    bool isInsideClosedSphere(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;
    /**
     * This method returns if getDistance(x) is greater than _radius.
     *
     * @param x          Position vector.
     */
    bool isOutsideClosedSphere(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;
    /**
     * This method returns if getDistance(x) is not smaller than _radius.
     *
     * @param x          Position vector.
     */
    bool isOutsideOpenSphere(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;

    /**
     * This method checks if a given point x is inside the open Minkowski sphere
     * or not. This is necessary in order to check the complete Minkowski sum.
     * This method is called on all 2^d vertices of the query voxel (i.e.
     * currenttarch::la::Vector<DIMENSIONS,double> in the first loop of isCompletelyOutsideNotInverted() ).
     *
     * The radius is taken from Sphere (i.e. _radius).
     *
     * @param x      Query position vector.
     * @param center Center of the Minkowski sphere in consideration.
     */
    bool isInsideOpenMinkowskiSphere( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &center );

    /**
     * This method checks if a given point x is inside the open Minkowski
     * cylinder or not. This is necessary in order to check the complete
     * Minkowski sum in 3D.
     *
     * The radius is taken from Sphere (i.e. _radius).
     *
     * @param x          Query position vector.
     * @param dir        Direction of cylinder axis.
     * @param baseCenter Center of the Minkowski sphere in consideration.
     * @param height     Height of the cylinder (usually 2*resolution).
     */
    bool isInsideOpenMinkowskiCylinder(
      const tarch::la::Vector<DIMENSIONS,double>& x,
      const int     dir,
      const tarch::la::Vector<DIMENSIONS,double>& baseCenter,
      const double  height
    );

  protected:
    /**
     * A voxel is completely outside the sphere, if all the vertices are outside
     * and there's no intersection between the sphere and any of the planes. The
     * latter one is checked by a Minkowski sum. The basic idea of Minkowski
     * sums is to enlarge one object by running over its edges and adding the
     * second object with a reference point. Thus, afterwards, one only has to
     * check if the reference point lies in the enlarged (first+added second)
     * object.
     *
     * Here comes an overview of the algorithm in use (return false if one of
     * the steps is true):
     * -# Check whether voxel is completely inside (simple test, for exclusion).
     * -# Check whether x is not outside closed sphere (simple test, for exclusion).
     * -# Check whether one of the @f$ 2^d @f$ voxel's vertices is not outside
     *   the sphere (simple test, for exclusion) or if x is in one of the
     *   Minkowski spheres of the voxel's vertices.
     * -# Without the round edges the Minkowski sum of the voxel is the union of
     *   d different hexahedrons (each one enlarged along one axis). Check
     *   whether one of them intersects.
     * -# in 3D: check also the cylinder parts of the Minkowski object (i.e.
     *   sweeped 2D circles on voxel edges). If _offset lies in one cylinder,
     *   false is returned (because we have intersection).
     *
     * The default return value (i.e. if the algorithm has passed the above
     * steps without a return call) is true.
     *
     * For the special case of a degenerated voxel (i.e. point with
     * resolution==0.0), the above algorithm is stopped after step 2, since we
     * only have to check if the point lies in the open sphere (actually done in
     * step 2).
     *
     * @param x          Position vector.
     * @param resolution tarch::la::Vector<DIMENSIONS,double> of mesh size.
     */
    virtual bool isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    /**
     * A voxel is completely inside, if all the @f$ 2^d @f$ vertices are inside
     * the sphere. This holds as both geometric objects are convex.
     */
    virtual bool isCompletelyInsideNotInverted(  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    virtual bool isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x );

  public:
    /**
     * Constructs the sphere.
     *
     * This constructor should be used for test cases only!
     *
     * @param maxMeshWidth tarch::la::Vector<DIMENSIONS,double> of maximal mesh size.
     * @param minMeshWidth tarch::la::Vector<DIMENSIONS,double> of minimal mesh size.
     * @param isInverted   Bool deciding if the geometry is inverted (true)
     *                     or not (false).
     * @param geometricIndex Int for starting the enumeration of boundary parts.
     * @param radius       Value of the sphere radius.
     * @param offset       tarch::la::Vector<DIMENSIONS,double> of offset of the sphere origin (i.e. center).
     * @param velocity     tarch::la::Vector<DIMENSIONS,double> of the initial velocity.
     * @param rotationVelocity Velocity of the rotation of this object.
     * @param offset tarch::la::Vector<DIMENSIONS,double> that holds the offset (i.e. translation from origin) for this geometry.
     */
    Sphere(
      bool          isInverted,
      double        radius,
      const tarch::la::Vector<DIMENSIONS,double>& center
    );

    void setCenter( const tarch::la::Vector<DIMENSIONS,double>& x );

    /**
     * Destructor.
     */
    virtual ~Sphere();

    /**
     * This method returns the number of boundaries the support of a node x for
     * mesh size h intersects for this geometry.
     *
     * @param x          Position vector.
     * @param resolution tarch::la::Vector<DIMENSIONS,double> of mesh size.
     */
    virtual int getNumberOfBoundariesIntersected(const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double>& h);

    /**
     * Empty method, only in PeGSIGeometry real implementation. Needed due to
     * virtual
     *
     * @param filename Desired file name of the PeGSI spactree vtk output
     *                 (including the extension).
     */
    virtual void plotGeometryAsVTK(const std::string& filename);

};

#endif
